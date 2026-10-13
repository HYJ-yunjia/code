#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 1, y = 0,z = 0;
    int ret = (x>0 && !(y==3) ||z>5);//&&的优先级大于||
    printf("1 : ret = %d\n",ret);

    ret = (!(x+1>0) && y==0 || z>0);//&&的优先级大于||
    printf("2 : ret = %d\n",ret);

    ret = (x<0 || y==0 && z>0);//&&的优先级大于||
    printf("3 : ret = %d\n",ret);

    ret = (x+= y == z ,y=x+2 , z=x+y+z>0);//,优先级最低   +=优先级低于==
    printf("x=%d,y=%d,z=%d\n",x,y,z);

    return 0;
}
