
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
- **Sección de Código (`text`):** Contiene las instrucciones ejecutables del programa.
- **Sección BSS (`bss`):** Se utiliza para declarar variables que serán inicializadas a cero al comienzo de la ejecución.
- **Etiquetas y Símbolos:** Identificadores utilizados para marcar puntos específicos en el código o datos, tales como el inicio de funciones o bucles.
- **Instrucciones:** Comandos que el procesador ARM ejecutará, incluyendo operaciones aritméticas, manipulación de datos, y control de flujo.
- **Directivas del Ensamblador:** Instrucciones para el ensamblador que ayudan a organizar el proceso de compilación y definir macros.
- **Comentarios**: Texto que proporciona explicaciones sobre el código, ignorado durante la compilación.

### Proceso de Compilación y Enlazado en ARM32

El desarrollo de software en Assembly para ARM32 sigue un proceso de compilación y enlazado para transformar el código fuente en un ejecutable:

1. **Compilación:** Traduce el código Assembly a código máquina, generando archivos objeto.
2. **Enlazado:** Combina los archivos objeto en un archivo ejecutable, resolviendo referencias a librerías y otros módulos.

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


