//Objetivo:
	// Realizar la resta de dos numeros
//Autores:
	// Bernal Enciso Jocelin Maribel
	// Díaz Zavala Ximena Michelle
	// Gonzalez Carrillo Valeri Alexandra
	// Sánchez Hernández Evelyn Belén

#include <stdio.h>

// Prototipo de la función assembly para resta
extern int restar(int a, int b);

int main() {
    int resultado;

    // Llama a la función assembly para restar
    resultado = restar(30, 20);

    printf("El resultado de la resta es: %d\n", resultado);
    return 0;
}
