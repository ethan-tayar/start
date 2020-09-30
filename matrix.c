#include <stdio.h>
#define M 4

int is_diagonal(int mat[M][M]);
void print_matrix(int rows, int cols, int mat[rows][cols]);


int main()
{
    int mat[M][M] =
	{
		{11,0,0,0},
		{0,0,0,0},
		{0,0,43,0},
		{0,0,0,10}
        
	};

    // = malloc(M*M*sizeof(int));
    print_matrix(M, M, mat);

    int ans = is_diagonal(mat); /* 0 - False, 1 - True */
    if(ans == 1)
    {
        printf("mat is diagonal\n");
    }
    else
    {
        printf("mat is not diagonal\n");
    }

    return 0;
}

int is_diagonal(int mat[M][M])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(i != j && mat[i][j] != 0) // not diagonal!
                return 0; // false
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
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
