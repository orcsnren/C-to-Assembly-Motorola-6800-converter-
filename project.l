%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
int linenum;
%}
%%
main return MAIN;
#include+" "+<stdio.h> return INCLD;
int return INTRSW; 
else return ELSE;
if return IF;
"{"	return OPNBRCKT;
"}" 	return CLSBRCKT;
"return" return RTN;
,	return COMMA;
"<" return LESS;
">" return BIGGER;
== return EQUAL;

"echo" return ECHOSTMT;
[0-9]+	{yylval.string = strdup(yytext);return INTEGER;}
\-	return MINUSOP;
\+	return PLUSOP;
\(	return OPENPAR;
\)	return CLOSEPAR;
\/	return DIVIDEOP;
\*	return MULTOP;

";" return SEMICOLON;
=	return ASSIGNOP;
[a-zA-Z]([a-zA-Z]|[0-9])*	{yylval.string = strdup(yytext);return VARIABLE;}
\n	linenum++;
[ \t]+
%%
