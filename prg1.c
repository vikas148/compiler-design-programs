    //program to check given input is keyword or not

    #include<stdio.h>
    #include<conio.h>
    #include<string.h>

    void main(){
        char keyword [32][10]={
            "auto",	"break",	"case",	"char",
    "const",	"continue"	,"default"	,"do",
    "double",	"else",	"enum",	"extern",
    "float"	,"for",	"goto",	"if",
    "int",	"long",	"register",	"return",
    "short",	"signed",	"sizeof"	,"static",
    "struct",	"switch",	"typedef",	"union",
    "unsigned"	,"void"	,"volatile",	"while"
        };
    char strings[10];
    int flag=0,i;

    printf("enter any string: ");
    gets(strings);
    for(i=0;i<32;i++){
    if (strcmp(strings,keyword[i])==0)
    {
        flag=1;
    }

    };
    if (flag==1)
    {
        printf("%s is a keyword",strings);
    }
    else{
        printf("%s is not a string",strings);
    }

    getch();

    }
