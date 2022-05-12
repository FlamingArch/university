%{
#include <stdio.h>
%}

%%
"<h1>" { printf("h1 Valid"); }
"<h2>" { printf("h2 Valid"); }
"<h3>" { printf("h3 Valid"); }
"<h4>" { printf("h4 Valid"); }
"<h5>" { printf("h5 Valid"); }
"<h6>" { printf("h6 Valid"); }
"<p>" { printf("p Valid"); }
%%
  
int yywrap(void) { return 0; }

int main()
{
    extern FILE *yyin = fopen("index.html", "r");
    yylex();
    return 0;
}