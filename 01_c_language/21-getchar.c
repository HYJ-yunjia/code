#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    while(1)//ctrl +c 结束程序
    {
        ch = getchar();
        if((ch>='a')&&(ch<='z'))//判断ch是一个小写字符
        {
            ch = ch - ' ';//小写转大写
        }
        else if((ch>='A')&&(ch<='Z'))
        {
            ch = ch +' ';//大写转小写
        }
        printf("%c------->%d",ch,ch);
    }
    return 0;
}
