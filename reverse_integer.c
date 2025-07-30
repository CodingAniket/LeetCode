#include <stdio.h>
int reverse(int x)
{
    int res = 0;
    if (x > 0)
    {
        while (x > 0)
        {
            int mod = x % 10;
            res = res * 10 + mod;
            x = x / 10;
        }
        return res;
    }
    else
    {
        x = -x;
        while (x > 0)
        {
            int mod = x % 10;
            res = res * 10 + mod;
            x = x / 10;
        }
        return -res;
    }
}
int main()
{
    int num = -123, result;
    result = reverse(num);
    printf("%d", result);
    return 0;
}