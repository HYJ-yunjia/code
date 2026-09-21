/*一个水分子的质量约为3.0*10^-23g,一夸脱的水大约有950g，编写程序
*要求输入水的夸脱数，然后显示这么多水中包含多少个水分子
*/
#include <stdio.h>
#define M 3.0E-23//指数形式的写法
int main(int argc, char const *argv[])
{
    int num = 0;
    printf("请输入水的夸脱数 >:");
    scanf("%d", &num);
    double molecule = M;
    double weight = 950;
    double total_molecule =(weight * num) / molecule;
    printf("%d夸脱水中有%lf个水分子\n", num, total_molecule);

    return 0;
}
