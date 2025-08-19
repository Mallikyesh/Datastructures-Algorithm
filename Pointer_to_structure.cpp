#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;

};

int main()
{
    rectangle r={10,5};
    
    //to print
    cout<<r.length<<endl;    //10
    cout<<r.breadth<<endl;   //5

    cout<<"trying with pointer"<<endl;
    rectangle *p = &r;

    //method 1 , (*p).length
    cout<<(*p).length<<endl;  //10

    //when we have a pointer pointing to a structure, we use arrow
    //method 2 , p->length
    cout<<p->breadth<<endl;  //5
    cout<<p->length<<endl;  //10

    cout<<"end"<<endl;


    return 0;
}