/*
This file contains useful function in C
*/

#include <stdio.h>
#include <string.h>

void read_line(char *buf, int size)
{
    fgets(buf, size, stdin);
    int len = strlen(buf);
    buf[len - 1] = 0;
}

void print_matrix(int rows, int cols, int mat[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void print_array(int length, int array[length])
{
    printf("[");
    for (int i = 0; i < length; i++)
    {
        printf("%d", array[i]);
        if (i != length - 1)
            printf(", ");
    }
    printf("]\n");
}

int main()
{
    /*
    sizeof(int) - 4 
    sizeof(char) - 1
    sizeof(int*) - 4
    sizeof(int**) - 4
    sizeof(long) - 8

    */
    char buf[20] = "";

    printf("Please enter a string: ");
    read_line(buf, 20);
    printf("buf = %s\n", buf);
    printf("DONE\n");
    return 0;
}