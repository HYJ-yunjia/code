//垃圾字符的产生
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a ;
    char b;

    printf("请输入一个整数：");
    scanf("%d",&a);

    printf("请输入一个字符：");
    scanf("%c",&b);
    printf("a=%d\n",a);
    printf("b=%c\n",b);
    printf("b=%d\n",b);
    /**
     * 垃圾字符的产生，再输入整数100 回车
     * 100被scanf("%d",&a)赋值给a，回车被残留到了终端里面
     * 之后程序又执行了scanf("%c",&b);%c把键盘上的输入都作为有效输出
     * 回车（“10”，\n）被赋值给b，b的值就是回车的值
     */

    return 0;
}
