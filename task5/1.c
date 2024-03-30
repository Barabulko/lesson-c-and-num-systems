#include <stdio.h>

int chesscalc(int square)
{
    int res=1;
    for (int i=1; i<square; i++)
    {
        res*=2;
    }
    return res;
}

int main()
{
    int a;
    printf("Номер клетки: ");
    scanf("%d", &a);
    printf("%d зерен риса", chesscalc(a));
    return 0;
}
