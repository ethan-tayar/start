#include <stdio.h>
#include <stdlib.h>

int *removedup(int length, int tab[length]);
void print_array(int length, int array[length]);

int main()
{
    int length = 8;
    int tab2[] = {1, 1, 2, 2, 3, 3, 4, 4};
    print_array(length, tab2);

    int *ans = removedup(length, tab2);
    print_array(length, ans);
    free(ans);
    return 0;
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

int is_contains(int length, int ans[length], int el)
{
    for (int i = 0; i < length; i++)
    {
        if (ans[i] == el)
        {
            return 1;
        }
    }
    return 0;
}

int *removedup(int length, int tab[length])
{
    int *ans = (int *)malloc(length * sizeof(int)); // {1,2,3,4}
    int i;
    int idx_ans = 0;
    for (i = 0; i < length; i++)
    {
        if (is_contains(length, ans, tab[i]) == 0)
        {
            ans[idx_ans] = tab[i];
            idx_ans++;
        }
    }

    /* code to remove zeros - remove_zeros */

    return ans;
}

// homework:
// code gets a string, and string to_remove
// and creates (malloc) new strings without to_remove
// example: str = 'foog'
// to_remove = 'fg'
// you return: new string in memory 'oo'