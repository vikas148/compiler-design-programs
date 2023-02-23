%{
#include<stdio.h>
}%

%%
[1-9][0-9]{9}{printf("valid mobile no")}
.*{printf("invalid mobile no")}
%%

innt yywrap()

{
    return 1;
}

int main()
{
    printf("Enter the mobile no")
    yylex();
    printf("\n");
    return  0
}

to execute it 
save as prg1.l
 then in cmd use flex prg1.l
 now use gcc lex.yy.c
 then a.exe
 