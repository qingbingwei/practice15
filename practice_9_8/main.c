#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    scanf("%d",&n);
    int i = 0; //����
    int flag = 0; //�ж��Ƿ�Ϊ����

    for (i = 1;i <= n;i++)
    {
        for (int j = 2; j <=sqrt(i); j++) //�ж��Ƿ�Ϊ����
        {
            if(i % j == 0)
            {
                flag = 1; //��������
                break;
            }
        }
        //��������
        if(flag == 0 && i != 1)
        {
            printf("%d\n",i);
        }
        flag = 0;
    }
    return 0;
}
