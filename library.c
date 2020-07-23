#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "library.h"
int string_ln(char*str)
 {

   int count = 0;
   while (*str++)
    {
      count++;
   }
   return count;
}

void reverseString(char* str,int l)
{
    int  i;
    char *begin_ptr, *end_ptr, ch;
    begin_ptr = str;
    end_ptr = str;
    for (i = 0; i < l - 1; i++)
        end_ptr++;
    for (i = 0; i < l / 2; i++)
        {
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;
        begin_ptr++;
        end_ptr--;
    }
}
void findcharacter(char *str,int count,char *ch, int *f)
{
    int i,l;
    //f=0;
l=strlen(str);
for(i=1;i<=l;i++)
{
    str++;
if(i == count)
{
*ch=*(str-1);
*f=1;
}
}
}
void findindex(char *str,char c,int *indx, int *g)
{
int i,len;
len=strlen(str);

for(i=0;i<len;i++)
{
if(*str==c)
{
    *indx=i+1;
    *g=1;
}
 str++;
}
}
