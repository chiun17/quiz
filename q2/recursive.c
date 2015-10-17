/* FIXME: Implement! */
#include<stdio.h>
#include<stdlib.h>


char smallest_character(char str[],char c)
{
    if(*str=='\0')
        return *str;
    else if(*str>c){
        return *str;
    }else{
        str++;
        return smallest_character(str,c);
    }
}



int main()
    {
        char test[] = "cfjpv";
        char test2[] = "cck";
        printf("%c\n",smallest_character(test,'a'));
        printf("%c\n",smallest_character(test,'c'));
        printf("%c\n",smallest_character(test,'z'));
        printf("%c\n",smallest_character(test2,'f'));
        return 0;
    }
