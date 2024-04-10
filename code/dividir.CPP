//Objetivo:
	// Realizar la division de dos numeros
//Autores:
	// Bernal Enciso Jocelin Maribel
	// Díaz Zavala Ximena Michelle
	// Gonzalez Carrillo Valeri Alexandra
	// Sánchez Hernández Evelyn Belén

#include <stdio.h>

// Prototipo de la función assembly para dividir
extern int dividir(int a, int b);

int main() {
    int resultado;

    // Llama a la función assembly para dividir
    resultado = dividir(81, 9);

    printf("El resultado de la división es: %d\n", resultado);
    return 0;
}