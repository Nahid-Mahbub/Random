#include<stdio.h>
int main()
{
    int n, a, value, remain;
    int reverse_value = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &value);
        a = value;
        while(a != 0)
        {
            remain = a % 10;
            reverse_value = reverse_value * 10 + remain;          
            a = a / 10;
        }
        if(reverse_value == value)
            printf("case %d: Yes\n", i);
            else
            printf("case %d: No\n", i);
            reverse_value = 0;

    }
    return 0;
}
