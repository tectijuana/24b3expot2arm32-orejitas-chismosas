
<!---
   Para comentarios usar este bloque para documentar pendientes, secuencias, etc.
--->


![LogoOrejitas](https://github.com/tectijuana/24b3expot2arm32-orejitas-chismosas/assets/105814833/de2e6f64-3188-447f-b597-796ba6ceefb5)

------

<pre>

	<p align=center>

Tecnológico Nacional de México
Instituto Tecnológico de Tijuana

Departamento de Sistemas y Computación
Ingeniería en Sistemas Computacionales

Semestre:
Febrero - Junio 2022

Materia:
Lenguajes de interfaz

Docente:
M.C. Rene Solis Reyes 

Unidad:
1

Título del trabajo:
Exposición, tema 2; Estructura básica de un programa en Assembly y ciclo de compilación

Estudiante:
Bernal Enciso Jocelin Maribel
Díaz Zavala Ximena Michelle
Gonzalez Carrillo Valeri Alexandra
Sánchez Hernández Evelyn Belén

	</p>

</pre>
------

# Estructura Básica de un Programa en Assembly y Ciclo de Compilación para ARM32

## Introducción

Este documento ofrece una visión detallada de los fundamentos de la programación en Assembly para la arquitectura ARM32, cubriendo desde la estructura típica de un programa hasta el proceso completo de compilación y enlazado. Adicionalmente, se incluye una guía para la creación de un Makefile simple, con el fin de automatizar estas tareas en el desarrollo del software.

## Marco Teórico

### Anatomía de un Programa en Assembly para ARM32

Un programa en Assembly para ARM32 se compone generalmente de varias secciones importantes, cada una con un propósito específico en la ejecución y organización del programa:

- **Sección de Datos (`data`):** Define variables y constantes utilizadas por el programa.
  ```assembly
  section .data
  mensaje db 'Hola, mundo!', 0
  
- **Sección de Código (`text`):** Contiene las instrucciones ejecutables del programa.
  ```assembly
  section .text
  global _start
  _start:
  ; Código para imprimir 'Hola, mundo!' y salir
  
- **Sección BSS (`bss`):** Se utiliza para declarar variables que serán inicializadas a cero al comienzo de la ejecución.
  ```assembly
  section .bss
  reserva resb 50

- **Etiquetas y Símbolos:** Identificadores utilizados para marcar puntos específicos en el código o datos, tales como el inicio de funciones o bucles.
  ```assembly
  inicio:
  ; Inicio del programa o una sección particular

- **Instrucciones:** Comandos que el procesador ARM ejecutará, incluyendo operaciones aritméticas, manipulación de datos, y control de flujo.
  ```assembly
  MOV R0, #1      ; Mueve el valor 1 al registro R0
  ADD R1, R2, R3  ; Suma R2 y R3, resultado en R1

- **Directivas del Ensamblador:** Instrucciones para el ensamblador que ayudan a organizar el proceso de compilación y definir macros.
  ```assembly
  .macro miMacro  ; Inicia definición de macro
  .endm           ; Finaliza definición de macro

- **Comentarios**: Texto que proporciona explicaciones sobre el código, ignorado durante la compilación.
  ```assembly
  ; Esto es un comentario en el código


### Proceso de Compilación y Enlazado en ARM32
1. **Preprocesamiento**: Antes de la compilación real, el preprocesador maneja directivas como `#include`, `#define`, y otras macros. Para el lenguaje ensamblador, esto puede incluir la resolución de macros y la inclusión de archivos de código.
   ```assembly
   ; Ejemplo de una directiva de preprocesador en código ensamblador
   %include "common_macros.inc"

2. **Compilación**: El compilador de ensamblador toma el código fuente y lo convierte en instrucciones de máquina en formato binario. Cada instrucción se traduce a una operación binaria entendida por el procesador ARM. Se produce un archivo objeto (`.o` o `.obj`).
   ```bash
   # Ejemplo de compilación de un archivo de ensamblador ARM
   as -o archivo.o archivo.s

3. **Ensamblado**: Técnicamente, ensamblar es convertir las instrucciones mnemónicas en código de máquina.

4. **Enlazado (Linking)**: El enlazador combina los archivos objeto en un único archivo ejecutable y resuelve las referencias entre símbolos. Integra librerías necesarias en este punto, resultando en un binario ejecutable (`.elf`, `.bin`, etc.).
   ```bash
   # Ejemplo de enlazado de archivos objeto en un ejecutable ARM
   ld -o ejecutable.elf archivo.o

6. **Carga (Loading)**: El último paso es cargar el programa en la memoria de un dispositivo ARM para su ejecución. No es parte del proceso de compilación y enlazado, pero es esencial para la ejecución del programa.


### Creación de un Makefile Simple
Un Makefile es un archivo utilizado por el programa make, una herramienta de automatización de compilación ampliamente utilizada en el desarrollo de software. Define un conjunto de tareas a ser ejecutadas para construir y gestionar proyectos de software. Un Makefile contiene reglas que especifican cómo generar archivos objetivo a partir de archivos fuente. 

Para automatizar el proceso de compilación y enlazado, se utiliza un `Makefile`. A continuación, se presenta un ejemplo de un Makefile básico para un proyecto en ARM32:

```makefile
# Nombre del archivo ejecutable
TARGET = mi_programa

# Archivo fuente
SOURCE = mi_programa.s

# Regla por defecto
all: $(TARGET)

# Cómo construir el ejecutable
$(TARGET): $(SOURCE)
    as -o $(TARGET).o $(SOURCE)
    ld -o $(TARGET) $(TARGET).o

# Limpieza
clean:
    rm -f $(TARGET) $(TARGET).o


