#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 10; i++)//外层循环控制行数
    {
        for (int j = 1; j < i+1; j++)//内层循环
        {
            printf("%d x %d = %-2d ",j,i,i*j);
        }
        printf("\n");
    }
    
    return 0;
}
