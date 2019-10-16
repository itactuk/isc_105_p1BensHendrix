#include <stdio.h>
#include <math.h>

struct complex
{
    float real;
    float imag;
};

void input(struct complex*);
void display(struct complex);
struct complex sum(struct complex, struct complex);
struct complex product(struct complex, struct complex);
struct complex div(struct complex,struct complex);
struct complex resta(struct complex,struct complex);

int main()
{
    struct complex c1, c2, c3, c4,c5,c6;
    printf("\nDigite el numero complejo 1: \n");
    input(&c1);
    printf("\nDigite el numero complejo 2: \n");
    input(&c2);
    printf("\n\nDigite el numero complejo 1 ");
    display(c1);
    printf("\n\nDigite el numero complejo 2 ");
    display(c2);
    c3 = sum(c1, c2);
    printf("\n\nLa suma de los numeros complejos es: = ");
    display(c3);
    c4 = product(c1, c2);
    printf("\n\nEl producto de los numeros complejos es: = ");
    display(c4);
    c5= div(c1,c2);
    printf("\n\nLa division de los numeros complejos es: = ");
    display(c5);
    c6= resta(c1,c2);
    printf("\n\nLa diferencia de los numeros complejos es:");
    display(c6);
    return 0;
}

void input(struct complex *t)
{
    printf("\nDigite los valores\n");
    printf("parte real : ");
    scanf("%f", &t->real);
    printf("parte imaginaria : ");
    scanf("%f", &t->imag);
}

void display(struct complex c)
{
    printf("\n%0.2f + %0.2f i", c.real, c.imag);
}

struct complex sum(struct complex t1, struct complex t2)
{
    struct complex t;
    t.real = t1.real + t2.real;
    t.imag = t1.imag + t2.imag;
    return t;
}

struct complex product(struct complex t1, struct complex t2)
{
    struct complex t;
    t.real = t1.real * t2.real - t1.imag * t2.imag;
    t.imag = t1.real * t2.imag + t1.imag * t2.real;
    return t;
}
struct complex div(struct complex t1, struct complex t2)
{

     struct complex t;
     t.real=(((t1.real)*(t2.real))+((t1.imag)*(t2.imag)))/(pow(t2.real,2)+pow(t2.imag,2));
     t.imag=(((t2.real)*(t1.imag))-((t1.real)*(t2.imag)))/(pow(t2.real,2)+pow(t2.imag,2));
     return t;


   // struct complex t;
    //t.real = (t1.real*t2.real + t1.imag*t2.imag)/(t2.real*t2.real+t2.imag*t2.imag);
    //t.imag = (t1.imag*t2.real - t1.imag*t2.imag)/(t2.real*t2.real + t2.imag*t2.imag);
   // return t;
}

struct complex resta(struct complex t1,struct complex t2)
{
    struct complex t;
      t.real = t1.real - t2.real;
      t.imag = t1.imag - t2.imag;

    return t;

}


