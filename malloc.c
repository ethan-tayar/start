#include <stdlib.h>
#include <stdio.h>

int main()
{
    int c = 171;
    printf("%c\n", c);
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("sizeof(char) = %ld\n", sizeof(char));
    printf("sizeof(long) = %ld\n", sizeof(long));
    printf("sizeof(char*) = %ld\n", sizeof(char*));
}