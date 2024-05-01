#include <stdio.h>
#include <stdlib.h>

struct tag_vector {
    double x;
    double y;
};
int main()
{
    struct tag_vector* prt_v = malloc(sizeof(struct tag_vector ));
    prt_v->x = 2.3;
    prt_v->y = 2.3;

    printf("x = %2.f, y = %2.f", prt_v->x,prt_v->y);
    
    free(prt_v);
}