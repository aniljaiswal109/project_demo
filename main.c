#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"
int main()
{
    //DECLARATION AND INITIALIZATION
    char * str,*str1;
    char c,ch;
    int len,count,f=0,g=0,indx;
    str= (char*)malloc(10*sizeof(char));
    printf("\nENTER A STRING: ");
    gets(str);
    strcpy(str1,str);

    printf("\n-> STRING IS: %s\n",str);


    //LENGTH OF STRING
    len= string_ln(str);
    printf("->LENGTH OF STRING IS: %d",len);


    //REVERSE OF THE STRING
    reverseString(str1,len);
    printf("\n\n->REVERSE OF THE STRING IS: %s\n",str1);


    //FIND CHARACTER THROUGH GIVEN INDEX
    printf("\nEnter a index to find its Character:");
    scanf("%d",&count);
    findcharacter(str,count,&ch, &f);
    if(f==1)
    {
    printf("\n->Character at given position is:\t%c \n",ch);
    }
    else
        printf("No Character at given position");

    //FIND INDEX THROUGH GIVEN CHARACTER

    printf("\nEnter a character to find its position:");
    scanf("%s",&c);
    findindex(str, c, &indx, &g);
    if(g==1)
       {
        printf("->Character position is:\t%d\n \n",indx);
       }
        else
        printf("invalid position:");




//FIND TWO POSITION GIVEN TWO CHARACTER


}

