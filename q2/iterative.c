/* FIXME: Implement! */
#include<stdio.h>
#include<stdlib.h>
char smallest_character(char str[], char c){
    char firstStr = *str;
    
    while(*str!='\0')
     {
         if(*str>c)
           return *str;
      str++;
      }
    return firstStr;
}


int main()
    {
        char test[]="cfjpv";
        char test2[] ="cck";

        printf("%c\n",smallest_character(test,'a'));
        printf("%c\n",smallest_character(test,'c'));
        printf("%c\n",smallest_character(test,'z'));
        printf("%c\n",smallest_character(test2,'f'));


        return 0;
    }

