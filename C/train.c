#include <stdio.h>

int main()
{
    int amount, bom_train, pre_train, post_train, survive = 0;
    scanf("%d", &amount);
    scanf("%d", &bom_train);
    if (1 <= amount && amount <= 2000000000 && 1 <= bom_train && bom_train <= 2000000000 )
    {
        pre_train = bom_train - 1;
        post_train = bom_train + 1;
        for (int i = 1; i <= amount; i++)
        if (i != pre_train && i != bom_train && i != post_train )
        {
                printf("%d ", i);
                survive++;
        }
    }
    if (survive == 0)
        printf("DIE");
    return (0);
}