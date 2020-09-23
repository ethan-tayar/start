/*
This file contains useful function in C
*/

#include <stdio.h>

void read_line(char *buf)
{
    scanf("%s", buf);
}

int main()
{
    char buf[20] = "";

    printf("Please enter a string: ");
    read_line(buf);
    printf("buf = %s\n", buf);
    printf("DONE\n");
    return 0;
}