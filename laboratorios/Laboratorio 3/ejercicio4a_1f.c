/* Ejercicio 4 */
#include <stdio.h>

int pedir_entero(char name)
{
	int entero;
	printf("Ingrese un valor para la variable %c: ", name);
	scanf("%d", &entero);
	return entero;
}

int main(void)
{
    /* programa 1.f */
    int x, y;
    x = pedir_entero('x');
    y = pedir_entero('y');
    
    if (x >= y)
    {
        x = 0;
    }
    else if (x <= y)
    {
        x = 2;
    }

    printf("x: %d, y: %d\n", x, y);

    return 0;
}