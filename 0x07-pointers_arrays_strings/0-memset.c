#include "main.h"
/**
 *_memset - fill a block of memory with a specific value
 *@s: starting address of memory to be filled
 *@b: the desired value
 *@n: number of bytes to be changed
 *
 *Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
    int i;
    for(i=0; *s[i] != '\0' ; i++ )
    {
        if(i < n)
        {
            s[i] = b ;
        }
    }
    s[i] = '\0';
    return (s); 
}
