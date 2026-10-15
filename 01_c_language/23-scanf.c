#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("请输入一个字符：");
    scanf("%c",&ch);
    printf("a=%c\n",ch);

    char str[100] = {0};
    printf("请输入一个字符串：");
    scanf("%s",str);
    //数组名就是数组的首地址，就不需要再对str取地址了
    //输入字符串时，中间不能有空格，如果有空格会当成多个字符串
    printf("str=%s\n",str);

    return 0;
}
