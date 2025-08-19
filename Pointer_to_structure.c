
#include<stdio.h>

struct rectangle
{
    int length;
    int breadth;

};

int main()
{
    struct rectangle r={10,5};
    
    printf("%d , %d\n", r.length, r.breadth );

    printf("trying pointer\n");

    struct rectangle *p = &r;
    printf("%d\n",p->length);
    printf("%d\n",p->breadth);
    return 0;
}