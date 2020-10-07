#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nbr, i, j, k;
    int *tab2 = malloc(30 * sizeof(int));
    if (tab2 == NULL)
    {
        fprintf(stderr, "malloc failed\n");
        return -1;
    }
    printf(" Choose the number of element in your arrayy : \n");
    scanf("%d", &nbr);

    printf(" Enter the element in the array: ");
    for (i = 0; i < nbr; i++)
        scanf("%d", &tab2[i]);

    for (i = 0; i < nbr; i++)
    {
        for (j = i + 1; j < nbr;)
        {
            if (tab2[j] == tab2[i])
            {
                for (k = j; k < nbr; k++)
                {
                    tab2[k] = tab2[k + 1];
                }
                nbr--;
            }
            else
                j++;
        }
    }
    
    printf(" array without doubles: \n");
    for (i = 0; i < nbr; i++)
    {
        printf("%d \n", tab2[i]);
    }

    return 0;
}

