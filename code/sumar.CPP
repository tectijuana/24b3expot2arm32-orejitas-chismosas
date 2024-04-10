//Objetivo:
	// Realizar la suma de dos numeros
//Autores:
	// Bernal Enciso Jocelin Maribel
	// Díaz Zavala Ximena Michelle
	// Gonzalez Carrillo Valeri Alexandra
	// Sánchez Hernández Evelyn Belén

#include <stdio.h>

// Prototipo de la función assembly
extern int sumar(int a, int b);

int main() {
    int resultado;

    // Llama a la función assembly
    resultado = sumar(10, 20);

    printf("El resultado es: %d\n", resultado);
    return 0;
}
