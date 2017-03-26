#include "file.h"
void openFile(char* fileName, FILE **outputFile){
	*outputFile=fopen(fileName,"w");
}

void writeLinetoFile(char* str,FILE *outputFile){
	fprintf(outputFile,"%s",str);
}

void closeFile(FILE *outputFile){
	fclose(outputFile);
}
