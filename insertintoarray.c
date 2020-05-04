#include <stdio.h>
#define max 1
int main()
{
    int p[max], n, i, k, j;

    printf("Enter length of array:");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Bye.\n\n\n");
        return 0;
    }
    

    printf("Enter %d elements of array\n", n);
    for (i = 0; i <= n - 1; i++)
        scanf("%d", &p[i]);

    printf("\nThe array is:\n");
    for (i = 0; i <= n - 1; i++)
        printf("%d\n", p[i]);

    printf("\nEnter position where to insert:");
    scanf("%d", &k);
    /*The position is always one value higher than the subscript,
    so it is decremented by one*/
    k--;
    /* Shifting all the elements of the array one position down from
    the location of insertion */
    for (j = n - 1; j >= k; j--)
        p[j + 1] = p[j];

    printf("\nEnter the value to insert:");
    scanf("%d", &p[k]);
    printf("\nArray after insertion of element: \n");
    for (i = 0; i <= n; i++)
        printf("%d\n", p[i]);
    
    return 0;
}