
 // Declaration Section
%{
#include <stdio.h>    
#include <string.h>   
int words = 0;
%}

 // Rule Section
%%
([a-zA-Z0-9]*)  { words++; }
"\n" { printf("%d\n", words); }
%%

// Subroutine Section
int yywrap(void) { }    // Wrapping RegEx

int main() {
    yylex();        // Generate C Code
    return 0;
}