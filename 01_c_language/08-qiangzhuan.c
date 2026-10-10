#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a=2,b=0;
    float c=4.8,d=3.3;
    b = (int)(a + c + d);//显式类型转换
    printf("1:b=%d\n",b);
    b = a + c + d;
    printf("2:b=%d\n",b);//隐式类型转换
    return 0;
}
