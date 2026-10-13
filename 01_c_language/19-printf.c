#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("hello world\n");//普通字符原样输出
    
    int x = 10,y = 20, z = 30;
    printf("x=%d\n",x);
    printf("x=%d,y=%d,z=%d\n",x,y,z);

    int a= 571;
    printf("a=%d\n",a);//dec带符号的十进制整数,a以整数形式输出
    printf("a=%i\n",a);//dec带符号的十进制整数,a以整数形式输出 int
    printf("a=%x\n",a);//hex带符号的十六进制整数,a以整数形式输出
    printf("a=%X\n",a);//HEX带符号的十六进制整数,a以整数形式输出
    printf("a=%o\n",a);//oct带符号的八进制整数,a以整数形式输出
    printf("a=%u\n",a);//unsigned不带符号的十进制整数,a以整数形式输出

    a ='Y';
    printf("a=%c\n",a);//char输出一个字符,a以字符形式输出，等价于putchar
    printf("a=%s\n","goodbye");//string输出一个字符串，表示a以字符形式输出

    float c = 567.789;
    printf("c=%e\n",c);//指数形式输出。小写的e
    printf("c=%E\n",c);//指数形式输出。大写的E
    printf("c=%f\n",c);//小数形式输出。
    printf("c=%g\n",c);//e和f较短的一种

    printf("c=%p",c);//&c是变量的地址，输出地址要使用%p，以地址形式输出
    printf("%%\n");//使用%% 输出百分号本身

    return 0;
}
