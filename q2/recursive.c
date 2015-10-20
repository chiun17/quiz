/* FIXME: Implement! */
#include<stdio.h>
#include<stdlib.h>


char smallest_character_r(char str[],char c,char firstStr)
{
    if(*str=='\0')
        return firstStr;
    else if(*str>c){
        return *str;
    }else{
        str++;
        return smallest_character_r(str,c,firstStr);
    }
}

char smallest_character(char str[],char c){
    return smallest_character_r(str,c,str[0]);
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
