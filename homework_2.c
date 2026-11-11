#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int total = 0;
    for(int i = 1; i <= n; i++)
    {
        int temp = 0;
        for(int j = 1; j <= i; j++)
        {
            temp += j;
        }
        total += temp;
    }
    printf("sum = %d", total);
    return 0;
}
