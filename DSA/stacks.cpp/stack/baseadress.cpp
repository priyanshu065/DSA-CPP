#include <stdio.h>

int main()
{
    int a[3][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };

    int i, j;
    char *base;
    char *theoretical;

    printf("Enter Row Index: ");
    scanf("%d", &i);

    printf("Enter Column Index: ");
    scanf("%d", &j);

    base = (char *)&a[0][0];

    theoretical = base + ((i * 3) + j) * sizeof(int);

    printf("\nBase Address        = %p\n", (void *)base);
    printf("Actual Address      = %p\n", (void *)&a[i][j]);
    printf("Theoretical Address = %p\n", (char *)theoretical);

    return 0;
}