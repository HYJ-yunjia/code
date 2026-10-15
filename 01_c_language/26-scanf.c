//垃圾字符的处理
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a ;
    char b;

    printf("请输入一个整数：");
    scanf("%d",&a);

    printf("请输入一个字符：");
//使用空格处理一个垃圾字符
#if 0
    scanf(" %c",&b);
#endif 
//使用%*c处理一个垃圾字符
#if 0
    scanf("%*c%c",&b);
#endif 
//使用getchar(),处理一个垃圾字符
#if 0
    getchar();
    scanf("%c",&b);
#endif 
//使用"%*[^\n]"抑制除了\n以外的所有字符，处理多个垃圾字符
#if 1
    scanf("%*[^\n]");//抑制除了\n以外的所有字符
    scanf("%*c");//再抑制一个字符\n
    scanf("%c",&b);
#endif 
    printf("a=%d\n",a);
    printf("b=%c\n",b);
    printf("b=%d\n",b);

    return 0;
}
