#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10,b = 8;
    a += b;
    printf("a=%d\n",a);

    a = 10,b = 8;
    a -= b;
    printf("a=%d\n",a);

    a = 10,b = 8;
    a *= b;
    printf("a=%d\n",a);

    a = 10,b = 8;
    a /= b;
    printf("a=%d\n",a);

    a = 10,b = 8;
    a %= b;
    printf("a=%d\n",a);

    a = 10,b = 8;
    a &= b;
    printf("a=%d\n",a);

    a = 10,b = 8;
    a |= b;
    printf("a=%d\n",a);

    a = 10,b = 8;
    a ^= b;
    printf("a=%d\n",a);

    a = 10,b = 8;
    a <<= b;//左移相当于乘以2的移位数
    printf("a=%d\n",a);

    a = 10,b = 8;
    a >>= b;//右移动相当于除以2的移位数（2 的 n次方）
    printf("a=%d\n",a);

    return 0;
}
