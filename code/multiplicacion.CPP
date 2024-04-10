//Objetivo:
	// Realizar la multiplicacion de dos numeros
//Autores:
	// Bernal Enciso Jocelin Maribel
	// Díaz Zavala Ximena Michelle
	// Gonzalez Carrillo Valeri Alexandra
	// Sánchez Hernández Evelyn Belén

#include <stdio.h>

// Prototipo de la función assembly para multiplicar
extern int multiplicar(int a, int b);

int main() {
    int resultado;

    // Llama a la función assembly para multiplicar
    resultado = multiplicar(4, 5);

    printf("El resultado de la multiplicación es: %d\n", resultado);
    return 0;
}
