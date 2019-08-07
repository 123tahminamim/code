#include <stdio.h>

void main()
{  int numberofrows;

printf("number of rows to be printed\n");
scanf("%d",&numberofrows);
int row,colspace,colstar;
for(row=1;row<=numberofrows;row++){
    for(colspace=numberofrows-row;colspace>=1;colspace--){
        printf(" ");

    }
    for(colstar=1;colstar<=(row*2)-1;colstar++){
        printf("*");
    }
    printf("\n");
}
    return 0;
}
