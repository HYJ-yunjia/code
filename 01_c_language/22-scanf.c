#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a , b , c;
    float d;
    printf("请输入一个整数：");
    scanf("%d",&a);//从终端的键盘中读取一个十进制的整数
    printf("a=%d\n",a);

    printf("请输入三个整数：");
    //从终端中输出三个十进制整数，遇到空格，tab，回车，通过指定宽度，会结束一次输入
    //结束之后整个scanf需要使用回车来结束
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d,b=%d,c=%d\n",a,b,c);

    printf("请输入一个八进制整数：");
    scanf("%o",&a);
    printf("a=%d\n",a);

    printf("请输入一个十六进制整数：");
    scanf("%x",&a);
    printf("a=%d\n",a);

    printf("请输入一个小数形式的实数：");
    scanf("%f",&d);
    printf("d=%f\n",d);

    printf("请输入一个指数形式的实数：");
    scanf("%e",&a);
    printf("d=%e\n",d);

    return 0;
}
