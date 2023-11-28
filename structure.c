#include <stdio.h>

struct tag_point
{
    int x;
    int y;
    int z;
};

int main(void)
{
    struct tag_point pt;

    pt.x = 1;
    pt.y = 2;
    pt.z = 3;

    printf("%d\n %d\n %d\n", pt.x,pt.y,pt.z);
    return 0;
}