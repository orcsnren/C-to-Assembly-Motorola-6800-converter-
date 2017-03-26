#include <string.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct symbol_table_entry{
	char *val;
	char *ident;
	int mem;
    struct symbol_table_entry *next;
}symbol_table_entry;

symbol_table_entry *symbol_table_head;

void addToSymbolTable(char*,int,char*,symbol_table_entry**);

void printAllSymbolElements(symbol_table_entry*);

symbol_table_entry* findIdent(char*,symbol_table_entry*);

void printAllSymbolElementsToFile(symbol_table_entry *head, FILE *f);
