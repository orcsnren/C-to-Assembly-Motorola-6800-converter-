%{
    #include <stdio.h>
    #include "symboltable.h"
    #include "file.h"
    void yyerror(char *);
    int yylex(void);
    extern FILE *yyin;
    extern int linenum;
    char writeBuffer[100];
    FILE *outputFile;
    char writeBuf[100];
    char writeBuf2[100];
    char writeBuf3[100];
    int memory=10;int tmpco=1;int mulco=1; int flagIF=1;int ifco=1; int elseco=1; int exco=1; 
    int IFBLOCK=0;
%}
%union
{
int number;
char *string;
}
%token <string> INTEGER 
%token <string> VARIABLE 
%token MINUSOP PLUSOP OPENPAR CLOSEPAR DIVIDEOP MULTOP ASSIGNOP ECHOSTMT SEMICOLON INTRSW INCLD MAIN ELSE IF RTN OPNBRCKT CLSBRCKT COMMA BIGGER LESS EQUAL
%type <string> expression
%left PLUSOP MINUSOP
%left MULTOP DIVIDEOP
%%
first:
	INCLD second 
;
second: statement SEMICOLON
	|
	statement SEMICOLON second
	|
	INTRSW MAIN OPENPAR CLOSEPAR OPNBRCKT program RTN INTEGER SEMICOLON CLSBRCKT 
;
program:
        statement SEMICOLON
	|
	statement SEMICOLON program	
	|
	IF OPENPAR checkIf CLOSEPAR OPNBRCKT program CLSBRCKT elseblock program //if(comp){ smthng } elseblock program
	|
	IF OPENPAR checkIf CLOSEPAR OPNBRCKT program CLSBRCKT elseblock 	//if(comp){ smthng } elseblock
	|
	IF OPENPAR checkIf CLOSEPAR statement SEMICOLON elseblock program      //if(comp) statement elseblock program
	|
	IF OPENPAR checkIf CLOSEPAR statement SEMICOLON elseblock 		//if(comp) statement elseblock-----------------------
	|
	IF OPENPAR checkIf CLOSEPAR statement SEMICOLON noElse endofIfBlock   //if(comp) statement; 
	|
	IF OPENPAR checkIf CLOSEPAR statement SEMICOLON noElse endofIfBlock program 	//if(comp)statement; program
	|	
	IF OPENPAR checkIf CLOSEPAR OPNBRCKT program CLSBRCKT noElse endofIfBlock program  //if(comp){ program }program
	|
	IF OPENPAR checkIf CLOSEPAR OPNBRCKT program CLSBRCKT noElse endofIfBlock	//if(comp) { program } 
	
	;
elseblock: ELSE checkElse statement SEMICOLON endofIfBlock
	   |
	   ELSE checkElse OPNBRCKT program CLSBRCKT endofIfBlock
	   |
	   ELSE printBRA IF OPENPAR checkIf CLOSEPAR statement SEMICOLON  printBRA endofIfBlock
	   |
	   ELSE printBRA IF OPENPAR checkIf CLOSEPAR statement SEMICOLON elseblock
	   |
	   ELSE printBRA IF OPENPAR checkIf CLOSEPAR OPNBRCKT program CLSBRCKT elseblock
	   |
           ELSE printBRA IF OPENPAR checkIf CLOSEPAR OPNBRCKT program CLSBRCKT printBRA endofIfBlock
           
;
checkIf: expression BIGGER expression { 
		printf("CHECKIF->FLAGIF:%d ->IFBLOCK:%d\n",flagIF,IFBLOCK);
		symbol_table_entry *entry,*entry2; int firstval,secondval;
		entry=findIdent($1,symbol_table_head); 
		if(entry==NULL){  sprintf(writeBuf,"\tLDAA #%s\n",$1);writeLinetoFile(writeBuf,outputFile);firstval=atoi($1);
		}else {sprintf(writeBuf,"\tLDAA $%d\n",entry->mem);writeLinetoFile(writeBuf,outputFile);firstval=atoi(entry->val);}

		entry2=findIdent($3,symbol_table_head);
	        if(entry2==NULL){ sprintf(writeBuf,"IF%d     CMPA #%s\n\tBLE ELSE%d\n",ifco,$3,elseco);ifco++;  writeLinetoFile(writeBuf,outputFile); secondval=atoi($3);}
		else {sprintf(writeBuf,"IF%d     CMPA $%d\n\tBLE ELSE%d\n",ifco,entry2->mem,elseco);ifco++;  writeLinetoFile(writeBuf,outputFile); 
			secondval=atoi(entry2->val);}

		if(firstval>secondval)	{
			if(IFBLOCK==0){ flagIF=1; IFBLOCK=1;}else {flagIF=0;}
		}else { flagIF=0;}
		printf("CHECKIF->FLAGIF:%d ->IFBLOCK:%d\n",flagIF,IFBLOCK);
	
	}
	|
	 expression LESS expression { 
		printf("CHECKIF->FLAGIF:%d ->IFBLOCK:%d\n",flagIF,IFBLOCK);
		symbol_table_entry *entry,*entry2; int firstval,secondval;
		entry=findIdent($1,symbol_table_head); 
		if(entry==NULL){  sprintf(writeBuf,"\tLDAA #%s\n",$1);writeLinetoFile(writeBuf,outputFile);firstval=atoi($1);
		}else {sprintf(writeBuf,"\tLDAA $%d\n",entry->mem);writeLinetoFile(writeBuf,outputFile);firstval=atoi(entry->val);}

		entry2=findIdent($3,symbol_table_head);
	        if(entry2==NULL){ sprintf(writeBuf,"IF%d     CMPA #%s\n\tBGE ELSE%d\n",ifco,$3,elseco);ifco++;  writeLinetoFile(writeBuf,outputFile); secondval=atoi($3);}
		else {sprintf(writeBuf,"IF%d     CMPA $%d\n\tBGE ELSE%d\n",ifco,entry2->mem,elseco);ifco++;  writeLinetoFile(writeBuf,outputFile); 
			secondval=atoi(entry2->val);}

		if(firstval<secondval)	{
			if(IFBLOCK==0){ flagIF=1; IFBLOCK=1;}else {flagIF=0;}
		}else { flagIF=0;}
		printf("CHECKIF->FLAGIF:%d ->IFBLOCK:%d\n",flagIF,IFBLOCK);
	
	}
;
noElse: { sprintf(writeBuf,"\tBRA EXIT%d\nELSE%d   NOP\n",exco,elseco);elseco++;writeLinetoFile(writeBuf,outputFile);  }
;
printBRA: {sprintf(writeBuf,"\tBRA EXIT%d\nELSE%d   NOP\n",exco,elseco);elseco++;writeLinetoFile(writeBuf,outputFile);}

;
checkElse: {  sprintf(writeBuf,"\tBRA EXIT%d\nELSE%d   NOP\n",exco,elseco);elseco++;writeLinetoFile(writeBuf,outputFile); 
		 printf("FLAGIF:%d\n",flagIF);
		if(IFBLOCK==0){
			flagIF=1;
			IFBLOCK=1;
		 }else { flagIF=0;  }
		printf("FLAGIF:%d\n",flagIF);
}
;
endofIfBlock: {sprintf(writeBuf,"EXIT%d   NOP\n",exco); exco++;writeLinetoFile(writeBuf,outputFile); 
		printf("ENDIF->FLAGIF:%d ->IFBLOCK:%d\n",flagIF,IFBLOCK);
		flagIF=1;IFBLOCK=0;
		printf("ENDIF->FLAGIF:%d ->IFBLOCK:%d\n",flagIF,IFBLOCK); }
;

state: 
	VARIABLE { 
		symbol_table_entry *entry;
		entry=findIdent($1,symbol_table_head);
		if(entry==NULL){
		printf("sa:%s ->mem:%d",$1,memory);
		sprintf(writeBuf,"\tLDAA #0\n\tSTAA $%d\n",memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			addToSymbolTable("0",memory,$1,&symbol_table_head); 
			memory++;
			}
		}
	 } 
	|
	VARIABLE COMMA state { printf("SA4:::%s\n",$1);
		symbol_table_entry *entry;
		entry=findIdent($1,symbol_table_head);
		if(entry==NULL){
		printf("sa:%s ->mem:%d",$1,memory);
		sprintf(writeBuf,"\tLDAA #0\n\tSTAA $%d\n",memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			addToSymbolTable("0",memory,$1,&symbol_table_head);
			memory++;
			}
		}
	 } 	
	|
	VARIABLE ASSIGNOP INTEGER { printf("SA2:::%s -> %s\n",$1,$3);
		symbol_table_entry *entry;
		entry=findIdent($1,symbol_table_head);
		if(entry==NULL){
		sprintf(writeBuf,"\tLDAA #%s\n\tSTAA $%d\n",$3,memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			addToSymbolTable($3,memory,$1,&symbol_table_head);
			memory++;
			} 
		}
	}
	|
	VARIABLE ASSIGNOP INTEGER COMMA state { printf("SA3:::%s -> %s\n",$1,$3);
		symbol_table_entry *entry;
		entry=findIdent($1,symbol_table_head);
		if(entry==NULL){
		sprintf(writeBuf,"\tLDAA #%s\n\tSTAA $%d\n",$3,memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			addToSymbolTable($3,memory,$1,&symbol_table_head);
			memory++;
			}
		} 
	}
;
statement:
	INTRSW VARIABLE COMMA state { 
		symbol_table_entry *entry;
		entry=findIdent($2,symbol_table_head);
		if(entry==NULL){
		sprintf(writeBuf,"\tLDAA #0\n\tSTAA $%d\n",memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			addToSymbolTable("0",memory,$2,&symbol_table_head);
			memory++;
			}
		} 
	}
	|
	INTRSW VARIABLE ASSIGNOP INTEGER COMMA state { 
		symbol_table_entry *entry;
		entry=findIdent($2,symbol_table_head);
		if(entry==NULL){
		sprintf(writeBuf,"\tLDAA #%s\n\tSTAA $%d\n",$4,memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			addToSymbolTable($4,memory,$2,&symbol_table_head);
			memory++;
			} 
		}
	}
	|
	INTRSW VARIABLE ASSIGNOP INTEGER{

		symbol_table_entry *entry;
		entry=findIdent($2,symbol_table_head);
		if(entry!=NULL){
		sprintf(writeBuf,"\tLDAA #%s\n\tSTAA $%d\n",$4,entry->mem);
		writeLinetoFile(writeBuf,outputFile);
		if(flagIF==1){
			entry->val=$4;
			}
		}else if(entry==NULL){
		sprintf(writeBuf,"\tLDAA #%s\n\tSTAA $%d\n",$4,memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			addToSymbolTable($4,memory,$2,&symbol_table_head);
			memory++;
			}
		} }
	|
	INTRSW VARIABLE { 

		symbol_table_entry *entry;
		entry=findIdent($2,symbol_table_head);
		if(entry==NULL){
		sprintf(writeBuf,"\tLDAA #0\n\tSTAA $%d\n",memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
				addToSymbolTable("0",memory,$2,&symbol_table_head);
				memory++;
			}	
		} 
	}
	|
	VARIABLE ASSIGNOP INTEGER
	{
		symbol_table_entry *entry,*entry2;
  		entry=findIdent($1,symbol_table_head);
		if(entry==NULL){
			exit(0);
		}else{
			sprintf(writeBuf,"\tLDAA #%s\n\tSTAA $%d\n",$3,entry->mem);
			writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			entry->val=$3;
			}
		} 
	}
	|
	VARIABLE ASSIGNOP expression       
	{ 
		symbol_table_entry *entry,*entry2;
  		entry=findIdent($1,symbol_table_head);
		if(entry==NULL){
			exit(0);
		}else{
			entry2=findIdent($3,symbol_table_head);	
			int val=atoi(entry2->val);
			printf("VAL:%d\n",val);
			sprintf(writeBuf,"\tLDAA $%d\n\tSTAA $%d\n",entry2->mem,entry->mem);
			writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			entry->val=entry2->val;
			}
		}
  }
	;
expression:
	INTEGER { $$=$1;}
	|
	VARIABLE                      
	{ 
		symbol_table_entry *entry;
		entry=findIdent($1,symbol_table_head);
		if(entry==NULL){
			exit(0);
		}else{
			
			$$=entry->ident;	
		//printf("%s",writeBuf3);		
		}
	}
  | 
	expression PLUSOP expression     { printf("$1:%s\n",$1); printf("$3:%s\n",$3);
						
						symbol_table_entry *entry;
						int firstval,secondval;
						entry=findIdent($1,symbol_table_head);
						if(entry==NULL){
							sprintf(writeBuf,"\tLDAA #%s\n",$1);
							writeLinetoFile(writeBuf,outputFile);
							firstval=atoi($1);
						}else {
							printf("MEM:%d\n",entry->mem);
							sprintf(writeBuf,"\tLDAA $%d\n",entry->mem);
							writeLinetoFile(writeBuf,outputFile);
							firstval=atoi(entry->val);
							printf("val:%d\n",firstval);
						}	
						entry=findIdent($3,symbol_table_head);
						if(entry==NULL){
							sprintf(writeBuf,"\tADDA #%s\n",$3);
							writeLinetoFile(writeBuf,outputFile);
							secondval=atoi($3);
						}else {
							//printf("%d",entry->mem);
							sprintf(writeBuf,"\tADDA $%d\n",entry->mem);
							writeLinetoFile(writeBuf,outputFile);
							secondval=atoi(entry->val);
							//printf("val:%d",secondval);
						}	
						char *ident=malloc(sizeof(writeBuf));
						char *w=malloc(sizeof(ident));
						sprintf(ident,"tmp%d",tmpco);tmpco++;
						printf("%s->",ident);
						printf("first:%d second:%d\n",firstval,secondval);
						printf("THIS:%d\n",firstval+secondval);
						sprintf(w,"%d",firstval+secondval);
						sprintf(writeBuf,"\tSTAA $%d\n",memory);
						writeLinetoFile(writeBuf,outputFile);
						addToSymbolTable(w,memory,ident,&symbol_table_head);
						memory++;
		
						$$=ident;
					}
        | 
	expression MINUSOP expression     { 	
						symbol_table_entry *entry;
						int firstval,secondval;
						entry=findIdent($1,symbol_table_head);
						if(entry==NULL){
							sprintf(writeBuf,"\tLDAA #%s\n",$1);
							writeLinetoFile(writeBuf,outputFile);
							firstval=atoi($1);
						}else {
							sprintf(writeBuf,"\tLDAA $%d\n",entry->mem);
							writeLinetoFile(writeBuf,outputFile);
							firstval=atoi(entry->val);
						}
						entry=findIdent($3,symbol_table_head);
						if(entry==NULL){
							sprintf(writeBuf,"\tSUBA #%s\n",$3);
							writeLinetoFile(writeBuf,outputFile);
							secondval=atoi($3);
						}else {
							sprintf(writeBuf,"\tSUBA $%d\n",entry->mem);
							writeLinetoFile(writeBuf,outputFile);
							secondval=atoi(entry->val);
						}
						char *ident=malloc(sizeof(writeBuf));
						char *w=malloc(sizeof(writeBuf));
						sprintf(ident,"tmp%d",tmpco);tmpco++;
						printf("%s->",ident);
						printf("first:%d second:%d\n",firstval,secondval);
						printf("THIS:%d\n",firstval-secondval);
						sprintf(w,"%d",firstval-secondval);
						sprintf(writeBuf,"\tSTAA $%d\n",memory);
						writeLinetoFile(writeBuf,outputFile);
						addToSymbolTable(w,memory,ident,&symbol_table_head);
						memory++;
						
						$$=ident;
}
        | 
	expression MULTOP expression   { 	

						symbol_table_entry *entry;
						int firstval,secondval;
						entry=findIdent($1,symbol_table_head);
						if(entry==NULL){
							sprintf(writeBuf,"\tCLRA\n");
							writeLinetoFile(writeBuf,outputFile);
							firstval=atoi($1);
							sprintf(writeBuf3,"#%s",$1);
						}else {
							sprintf(writeBuf,"\tCLRA\n");
							writeLinetoFile(writeBuf,outputFile);
							firstval=atoi(entry->val);
							sprintf(writeBuf3,"$%d",entry->mem);
						}
						entry=findIdent($3,symbol_table_head);
						if(entry==NULL){
							sprintf(writeBuf,"\tLDAB #%s\n",$3);
							writeLinetoFile(writeBuf,outputFile);
							secondval=atoi($3);
						}else {
							sprintf(writeBuf,"\tLDAB $%d\n",entry->mem);
							writeLinetoFile(writeBuf,outputFile);
							secondval=atoi(entry->val);
						}
						char *ident=malloc(sizeof(writeBuf));
						char *w=malloc(sizeof(ident));
						sprintf(ident,"tmp%d",tmpco);tmpco++;
						printf("%s->",ident);
						printf("first:%d second:%d\n",firstval,secondval);
						printf("THIS:%d\n",firstval*secondval);
						sprintf(w,"%d",firstval*secondval);
						sprintf(writeBuf2,"MUL%d    BEQ STOP%d\n\tADDA %s\n\tDECB\n\tBRA MUL%d\n",mulco,mulco,writeBuf3,mulco);
						writeLinetoFile(writeBuf2,outputFile);
						sprintf(writeBuf,"STOP%d   STAA $%d\n",mulco,memory);
						writeLinetoFile(writeBuf,outputFile);
						addToSymbolTable(w,memory,ident,&symbol_table_head);
						memory++;mulco++;
						
						
						$$=ident; 
			}
        | 
	OPENPAR expression CLOSEPAR            { $$ = strdup($2); }
        ;

%%
void yyerror(char *s) {
    fprintf(stderr, "%s\n ++++ %d", s,linenum);
}
int yywrap(){
	return 1;
}
int main(int argc, char *argv[])
{
    /* Call the lexer, then quit. */
    symbol_table_head=NULL;
    openFile(argv[2],&outputFile);
    yyin=fopen(argv[1],"r");
    yyparse();
    fclose(yyin);
    printAllSymbolElementsToFile(symbol_table_head,outputFile);
    closeFile(outputFile);
    return 0;
}
