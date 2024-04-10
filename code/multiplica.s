@Objetivo:
	@ Realizar la multiplicacion de dos numeros
@Autores:
	@ Bernal Enciso Jocelin Maribel
	@ Díaz Zavala Ximena Michelle
	@ Gonzalez Carrillo Valeri Alexandra
	@ Sánchez Hernández Evelyn Belén


.global multiplicar
.type multiplicar, %function

multiplicar:
    @ Argumentos:
    @   r0 - primer número
    @   r1 - segundo número

    MUL r2, r0, r1  @ Multiplica r0 y r1, resultado en r2
    MOV r0, r2      @ Mueve el resultado de r2 a r0
    BX lr           @ Regresa a la función llamadora
