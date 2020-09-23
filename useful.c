/*
This file contains useful function in C
*/

#include <stdio.h>
#include <string.h>

void read_line(char *buf, int size)
{
    fgets(buf, size, stdin);
    int len = strlen(buf);
    buf[len-1] = 0;
}

int main()
{
    char buf[20] = "";

    printf("Please enter a string: ");
    read_line(buf, 20);
    printf("buf = %s\n", buf);
    printf("DONE\n");
    return 0;
}