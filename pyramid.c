#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t height;
    printf("Enter the height: ");
    scanf("%d", &height);

    for(int i = 1; i <= height; i++)
    {
        printf("%d ", i);
        for (int j = i - 1; j > 0; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}