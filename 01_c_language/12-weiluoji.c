#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned char x =0x17,y,z;
    y = ~x;
    printf("y=%#x\n",y);//#x=16进制

    x = 0x56,y = 0xac;
    z = x&y;
    printf("z=%#X\n",z);

    x = 0x3e,y = 0x89;
    z = x|y;
    printf("z=%#X\n",z);

    x = 0x4b,y = 0x7b;
    z = x^y;
    printf("z=%#X\n",z);
    printf("z=%#o\n",z);//#o=8进制

    return 0;
}
