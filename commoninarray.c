#include <stdio.h>
#define max 10

typedef enum
{
    false,
    true
} bool;

int main()
{
    int p[max], q[max], r[max];
    int m, n;
    int i, j, k;
    k = 0;

    printf("Enter the length of the first array:\n");
    scanf("%d", &m);

    printf("Enter %d elements of the first array\n", m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("Enter the length of the second array\n");
    scanf("%d", &n);

    printf("Enter %d elements of the second array\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &q[i]);
    }

    k = 0;
    bool exists;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; i++)
        {
            if (p[i] == q[j])
            {
                exists = false;
                for (int l = 0; l < k; l++)
                {
                    if (r[l] == p[i])
                    {
                        exists = true;
                        break;
                    }
                }
                if (!exists)
                {
                    r[k] = p[i];
                    k++;
                }
            }
        }
    }
    if (k > 0)
    {
        printf("\nThe common elements in the two arrays are:\n");
        for (i = 0; i < k; i++)
        {
            printf("%d\n", r[i]);
        }
    }
    else
    {
        printf("There are no common elements in the two arrays\n");
    }
}