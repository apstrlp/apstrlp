#include <stdio.h>
void main()
{
    char s[100] = "TotoLoulou";
    while ( strchr(s, 'o') != NULL ) strcpy(strchr(s, 'o'), strchr(s, 'o')+1 );
    printf("s = %s",s);
}

