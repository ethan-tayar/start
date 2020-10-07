#include <stdio.h>
#define M 4
int verif_shriruti(int mat[M][M]);
int is_diagonal(int mat[M][M]);
void print_matrix(int rows, int cols, int mat[rows][cols]);

int main()
{
    int mat[M][M] =
        {
            {11, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 43, 0},
            {0, 0, 0, 10}

        };
    int mat2[M][M] =
        {
            {12, -7, 10, 23},
            {56, 11, 0, 5},
            {25, -2, 37, -1},
            {-13, 0, 18, 0}};
    // = malloc(M*M*sizeof(int));
    print_matrix(M, M, mat);

    int ans = is_diagonal(mat); /* 0 - False, 1 - True */
    if (ans == 1)
    {
        printf("mat is diagonal\n");
    }
    else
    {
        printf("mat is not diagonal\n");
    }
    print_matrix(M, M, mat2);
    verif_shriruti(mat2);
    return 0;
}

int is_diagonal(int mat[M][M])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i != j && mat[i][j] != 0) // not diagonal!
                return 0;                 // false
        }
    }
    return 1; // true
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
int verif_shriruti(int mat[M][M])
{
    int i = 0;
    int j = 0;
    int flag1 = 1;
    int flag2 = 1;
    int flag3 = 1;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (i > j && mat[i][j] == 0)
                flag1 = 0;

            if (i == j && mat[i][j] == 0)
                flag2 = 0;

            if (i < j && mat[i][j] == 0)
                flag3 = 0;
        }
    }

    if (flag1 == 0 && flag2 == 0 && flag3 == 0)
    {
        printf("Shriruti \n");
    }
    else
    {
        printf("Is not shriruti");
    }
}
