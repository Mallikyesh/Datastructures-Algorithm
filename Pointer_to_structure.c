
#include<stdio.h>

struct rectangle
{
    int length;
    int breadth;
    int car;

};

int main()
{
    struct rectangle r={10,5,100};
    
    printf("%ld bytes\n", sizeof(r));
    return 0;
}