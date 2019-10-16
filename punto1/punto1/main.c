#include <stdio.h>
#include <stdlib.h>

void reverse();//prototipo de la funcion

int main()
{
    printf("Digite la Cadena que quiere invertir\n");
    reverse();
    printf("\n");
    return 0;
}

void reverse()//funcion para invertir
{
    char c= getchar();
    if(c=='\n')
    {
        return;
    } else
    {
        reverse();
        putchar(c);
    }
}
