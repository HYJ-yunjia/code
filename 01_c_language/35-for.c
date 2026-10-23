#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int  i = 0; i < 5; i++)//外层循环控制行数
    {
        for(int j = 0; j < 5 ; j++)//内层循环控制列数
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
