#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned char x = 0xe4,y;
    y = x<<3;
    printf("y=%#X\n",y);

    y = x>>3;
    printf("y=%#X\n",y);

    char a = -10,b;
    b = a>>3;
    //-10存放到a中，存储的是补码，原码是10
    //0b 0000 1010
    //~ ob 1111 0101
    //+1 ob 1111 0110
    //>>3
    //因为1是代表负数开头,删除最右边110在最左边添1 ob 1111 1110
    //ox fe 
    printf("b=%#X\n",b);
    printf("b=%d\n",b);

    return 0;
}
