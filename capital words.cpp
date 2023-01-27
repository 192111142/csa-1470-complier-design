%{
	#include<stdio.h>
%}

%%
[A-Z]+[\t\n ] { printf("%s",yytext); }
.  ;
%%

int main( ) 
{
	printf("Enter the input string:\n");
	yylex();
}

int yywrap( )
{
	return 1;
}