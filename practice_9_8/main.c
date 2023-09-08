#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    scanf("%d",&n);
    int i = 0; //数字
    int flag = 0; //判断是否为质数

    for (i = 1;i <= n;i++)
    {
        for (int j = 2; j <=sqrt(i); j++) //判断是否为质数
        {
            if(i % j == 0)
            {
                flag = 1; //不是质数
                break;
            }
        }
        //不是质数
        if(flag == 0 && i != 1)
        {
            printf("%d\n",i);
        }
        flag = 0;
    }
    return 0;
}
