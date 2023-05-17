#include <stdio.h>
//Number of Deminationss
int main()
{
    int notes, amount;
    printf("Enter amount : ");
    scanf("%d", &amount);
    int deminations[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        notes = amount / deminations[i];
        if (notes != 0)
        {
            amount = amount % deminations[i];
            printf("%d * %d = %d\n", notes, deminations[i], notes * deminations[i]);
        }
    }
    return 0;
}