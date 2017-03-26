#include "symboltable.h"

void addToSymbolTable(char* val,int mem,char *ident,symbol_table_entry **head){
    symbol_table_entry *new_entry;
    symbol_table_entry *tmp;
    new_entry=(symbol_table_entry*)malloc(sizeof(symbol_table_entry));
    new_entry->val=val;
    new_entry->ident=ident;
    new_entry->mem=mem;
    //new_entry->tmpident=tmpident;
    new_entry->next=NULL;
    if(*head==NULL){
    	*head=new_entry;
    }else{
    	tmp=*head;
    	while(
tmp->next!=NULL){
    		tmp=tmp->next;
    	}
    	tmp->next=new_entry;
    }
    
}
void printAllSymbolElements(symbol_table_entry *head){
    while(head!=NULL){
    	printf("%s - %d\n",head->ident,head->mem);
    	head=head->next;
    }
}

void printAllSymbolElementsToFile(symbol_table_entry *head, FILE *f){
    while(head!=NULL){
    	fprintf(f,"%s -> %s->mem:%d\n",head->ident,head->val,head->mem);
    	head=head->next;
    }
}

symbol_table_entry* findIdent(char* ident,symbol_table_entry *symbol_entry){
	while(symbol_entry!=NULL && (strcmp(ident,symbol_entry->ident))){
		symbol_entry=symbol_entry->next;
	}
	return symbol_entry;
}
