#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m,n;
    printf("请输入两个整数：");
    scanf("%d%d",&m,&n);
    printf("m=%d n=%d\n",m,n);

    //最小公倍数
    int max,min;
    max = (m>n)?m:n;
    int i = max;
    while(1)
    {
        i++;
        if(i%m==0 &&(i%n==0))
        {
            printf("最小公倍数：%d\n",i);
            break;
        }
    }
    //最大公约数
    min = (m<n)?m:n;
    int j = min;
    while(1)
    {
        j--;
        if(m%j==0 &&(n%j==0))
        {
            printf("最大公约数：%d\n",j);
            break;
        }
    }

    
    return 0;
}
