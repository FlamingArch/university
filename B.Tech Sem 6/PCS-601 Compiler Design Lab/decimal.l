
 // Declaration Section
%{
#include <stdio.h>
%}

 // Rule Section
%%
[0-9]+"."[0-9]+ { printf("\nDecimal\n"); }
[0-9]+ { ECHO; printf("\nInteger\n"); }
%%

// Subroutine Section
int yywrap() { return 1; }

int main(int argc, char** argv) {
  yylex();
  return 0;
}