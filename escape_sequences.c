/*
#include <stdio.h>

int main() {
    printf("She said: \"Hello!\"\n");   // double quotes inside string
    printf("Path: C:\\Users\\Admin\\\n"); // backslashes in file path
    return 0;
}

#include<stdio.h>
int main()
{
    float f = 3.14159265;
    double d = 3.14159265;
    printf("%f\n",f);
    printf("%.9f\n",f);         //max correct until 6-7 digits and then loses precision
    printf("%.9f\n",d);         //max correct until 12-13 digits
    printf("%.2lf\n",d);
    return 0;
}

#include <stdio.h>

int main() {
    int x = 4200;  //42 gives correct answer however 4200 does not. meaning since its char type, it reads just 1 byte
    int *p;      //pointer type must match to the data type of the content its trying to read. 
    p=&x;
    printf("Pointer: %d\n", *p);   // Prints memory address
    return 0;
}


#include <stdio.h>
int main() {
    int x = 42;  //42 gives correct answer however 4200 does not. meaning since its char type, it reads just 1 byte
    float *p;  //this uses the IEEe 754 FLOATING POINT REPRESENTATION FORMAT THAT YIELDS IN A VERY SMALL VALUE
    p=&x;      //pointer type must match to the data type of the content its trying to read.
    printf("Pointer: %f\n", *p);   // Prints memory address
    return 0;
}


#include<stdio.h>
int main()
{   int a=10;
    int *p;
    p=&a;
    printf("a is %d\n",a); // a value is displayed
    printf("a is %d\n",*p); // value of a is displayed by p using dereferencing operator - *  the asterisks is called the dereferencing operator.
    printf("&a is %p and p is %p\n",&a, p); // both must be the same
return 0;
}



#include<stdio.h>
int main()
{       int a=10;
        int *p;
        p=&a;
        float c = 3.34;
        float *f = &c;
        char e ='t';
        char *d = &e;
        printf("size of p is %d\n",sizeof(int));
        printf("size of f is %lu\n",sizeof(f));
        printf("size of d is %lu\n",sizeof(d));
        printf("%lu %u %lu\n",sizeof(int*), sizeof(char*), sizeof(double*));
    return 0;
}
size of int is 4 bytes, char is 1 byte, float is 4 bytes. 
however size of pointer is 8 bytes



#include <stdio.h>
void stringcopy(char *, char *);
int main( ) {
    char a[30] = "@#Hello world!";
    stringcopy(a,a+2);
    printf("%s\n", a);
    return 0;
}
void sringcopy(char *s, char *t) {
    while(*t)
        *s++ = *t++;
}

*/