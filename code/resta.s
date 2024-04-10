@Objetivo:
	@ Realizar la resta de dos numeros
@Autores:
	@ Bernal Enciso Jocelin Maribel
	@ Díaz Zavala Ximena Michelle
	@ Gonzalez Carrillo Valeri Alexandra
	@ Sánchez Hernández Evelyn Belén


.global restar
.type restar, %function

restar:
    @ Argumentos:
    @   r0 - primer número
    @   r1 - segundo número
    
    SUB r0, r0, r1  @ Resta r1 de r0, resultado en r0
    BX lr           @ Regresa a la función llamadora
