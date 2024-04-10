@Objetivo:
	@ Realizar la division de dos numeros
@Autores:
	@ Bernal Enciso Jocelin Maribel
	@ Díaz Zavala Ximena Michelle
	@ Gonzalez Carrillo Valeri Alexandra
	@ Sánchez Hernández Evelyn Belén

.global dividir
.type dividir, %function

dividir:
    @ Argumentos:
    @   r0 - dividendo (81 en este caso)
    @   r1 - divisor (9 en este caso)
    
    SDIV r2, r0, r1  @ Divide r0 por r1, resultado en r2
    MOV r0, r2       @ Mueve el resultado de r2 a r0
    BX lr            @ Regresa a la función llamadora
