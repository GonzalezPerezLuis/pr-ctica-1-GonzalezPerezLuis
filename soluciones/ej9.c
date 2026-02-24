
#include <stdio.h>
int main()
{
    int a[5];

    printf("&a[-1] = %p\n", &a[-1]);   //Imprime una direccion de memoria antes del arreglo
    printf("&a[5]  = %p\n", &a[5]);    //Imprime una direccion de memoria despues del arreglo

    return 0;
}
