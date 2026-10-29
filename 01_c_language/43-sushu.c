#include <stdio.h>

int main(int argc, char const *argv[])
{
    for(int i = 2;i<100;i++)
    {
        if(i==2)
        {
            printf("%d\n",i);
        }
        for (int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                break;
            }
            if (j>(i / 2))//如果一个整数除到这个数的1/2还没有被整除就说明这个数就是素数
            {
                printf("%d\n",i);//输出素数
                break;
            }
        }
        
    }

    return 0;
}
