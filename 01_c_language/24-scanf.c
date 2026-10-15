#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a,b;
    printf("请输入四个字符：");
    scanf("%3c%c",&a,&b);//%3c的意思是:占位宽度是三，但是只要一个
    printf("a=%c,b=%c\n",a,b);

    long c;
    printf("请输入一个long类型的整数：");
    scanf("%ld",&c);
    printf("c=%d\n",c);

    double d;
    printf("请输入一个double类型的实数：");
    scanf("%lf",&d);
    printf("d=%lf\n",d);

    return 0;
}
