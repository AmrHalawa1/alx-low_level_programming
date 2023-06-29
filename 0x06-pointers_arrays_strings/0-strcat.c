#include "main.h"
//this function appends the second string(*src) to destination string (*dest)

char *_strcat(char *dest, char *src)
{
    int len1 =0 ;
    int len2 =0 ;
    int i;
    while(*dest != '\0')
    {
        dest++;
        len1++;
    }
    while (*src!= '\0')
    {
        src++;
        len2++;
    }
    for(i = 0;i <= len2 ; i++)
    {
        dest[len1+i] = src[i] ;
    }
    return(dest);
}
