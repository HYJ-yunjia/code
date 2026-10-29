#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[6];           //定义一个数组数组名为a,数组中有六个元素。
    printf("a=%p\n",a); //数组名是数组的地址，也就是数组第一个元素的地址

    //计算数组占用内存字数，数组一共有6个元素，每个元素是int类型的变量
    //1个int类型的变量占用4个字节，6*4=24个字节，可以使用sizeof(数组名)计算数组占用内存字节数
    printf("sizeof(a)=%d\n",sizeof(a));

    int x=10;
    int b[x];//c99允许用变量定义数组元素个数
    printf("sizeof(b)=%d\n",sizeof(b));

    //b[1000]=1;
    //c语言不作越界检查使用时要注意，会引发段错误，程序直接结束
    printf("goodbye");

    return 0;
}
