#include <stdio.h>
/*
*这是多行注释
*文件名是02-sum.c
*功能：计算1到10的和（累加1-10的和）
*/
int main(int argc,  char const *argv[])
{
    int sum = 0;
    //size_t <=> typedef unsigned int size_t;
    for(int i = 0 ; i <= 10 ; i++)//控制循环控制
    {
        sum = sum + i; //累加求和
    }
    printf("Sum = %d\n", sum);//输出sum的值

    return 0;
}