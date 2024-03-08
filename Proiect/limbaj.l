%{
#include <stdio.h>
#include <cstring>
#include <string>

#include "limbaj.tab.h"
%}
%option noyywrap
%%
"_int"|"_float"|"_char"|"_string"|"_bool" {yylval.strval = strdup(yytext);return TYPE;}

"typedef" {return CLASSSTART;}
"typedef_stop" {return CLASSSTOP;}

"constantin" {return CONST;}

"endf" {return ENDF;}

"begin" {return BGIN;}
"end" {return END;}

"if" {return IF;}
"endif" {return ENDIF;}
"else" {return ELSE;}
"while" {return WHILE;}
"endwhile" {return ENDW;}
"for" {return FOR;}
"endfor" {return ENDFOR;}

"adevarat" {return ADEV;}
"fals" {return FALS;}

"||" {return OR;}
"&&" {return AND;}

"TypeOf" {return TYPEOF;}
"Eval" {return EVAL;}

"Data: " {return DATA;}
"Metode: " {return METODE;}
"Init: " {return INIT;}

[a-zA-Z][a-zA-Z0-9]* {yylval.strval = strdup(yytext); return ID;}
"=" {return ASSIGN;}
[0-9]+ {return NR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

