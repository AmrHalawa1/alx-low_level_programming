#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    int i ;
    for(i =0; s[i] != '\0' && accept[i] != '\0'; i++)
    {
        return(i);
    }
}
