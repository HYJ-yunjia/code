#include <stdio.h>
#include <stdlib.h>
int main(int argc,char const *argv[])
{
    int result = system("chcp 65001");   
    char a,b,u,v;
    a = 'F';
    b = 'A'+2;
    u = ' '+'B';//b和B刚好差32位而' '是空格的ASCII码为32
    v = 'b'-32;
    printf("字符a=%d\n",a);
    printf("字符b=%d\n",b);  
    printf("字符u=%d\n",u);
    printf("字符v=%d\n",v);

    return 0; 
}