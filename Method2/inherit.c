#include <stdio.h>

typedef struct
{
    int age;
} Base;

typedef struct
{
    Base base;
    int nr;
} Derieved;

void printbase(Base *base)
{
    printf("Base Age : %d\n", base->age);
}

int main(void)
{
    Derieved d;
    d.base.age = 50;
    d.nr = 10;
    Base *b = (Base *)&d;

    printbase(b);
    printbase((Base *)&d);

    printf("%p : %d, nr=%d\n", &d.base, d.base.age, d.nr);
    printf("%p : %d\n", &(*b), b->age);
}
/*
Base Age : 50
Base Age : 50
000000000065FE10 : 50, nr=10
000000000065FE10 : 50
*/
