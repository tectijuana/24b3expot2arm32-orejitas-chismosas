
<!---
   Para comentarios usar este bloque para documentar pendientes, secuencias, etc.
--->


![LogoOrejitas](https://github.com/tectijuana/24b3expot2arm32-orejitas-chismosas/assets/105814833/de2e6f64-3188-447f-b597-796ba6ceefb5)


Borrar y modificar README

# Utilizar los dos directorios

- code  - ahi depositar sus programas los ***archivos extensión *.s****  (Source File) algunos autores en x86 de ponen .asm y en otras plataformas ARM compatibles la extension *.s
- Todo programa lleva su comentario en la parte de arriba, objetivo y nombre del programador minimo, como templete
- images  - de haber algo de pantallas ahi se presentaran, su busca documentarlas en MARKDOWN el código es:

``` ![](images/---archivo.jpg---) recordar que no lleva espacios```

<!---
  Los nombres de las imagenes no deben cambiar de preferenci el nombre del programa como:  KIOSKO.cpp (su pantallas serian KISOCO.jpg, KIOSCO-1.jpg, KIOSCO-2.jpg ... )
  Y asi procurar estar agrupados.
--->



- Programa en MarkDown es inicia con tres tildes * (`) sin espacio, seguido de el lenguaje de programacion, al final del codigo se poner otra vez los mismos tilder..

No se usan espacios en nombres de archivos, usar los nombres estilo camelCase (primera palabra minusculas, mayuscula solo la 1ra letra de cada palabra subsecuente):  ejemplo: sensorHumo, etc.

Suerte.



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

<pre>

	<p align=left>

Repositorio en el cual se desarrollaron distintos ejercicios en el lenguaje de 
programacion c++, tomados del libro "Problemas para resolver con computadora" 
1ra edicion (1985), por el autor Donald D. Spencer. 

Los ejercicios corresponden al capitulo 6 del libro, entre las paginas 77 a 86.
Se realizaron 25 problemas debido a la entrega fuera del limite de tiempo.

CONDICIONES:

	EXTEMPORÁNEOS DE LA FECHA DE ENTREGA, despues del 25 de marzo y 1 segundo:

	-Solo 25 problemas a resolver y están en aleatorio las condiciones de uso, 
		algunos simples otros de recordar, etc. CAPITULO 6 en adelante.

	-Agregar las indicaciones de los criterios de la rùbrica
	
RÚBRICA:

        Todo problema es necesario siga el templete OBLIGATORIO para entregar el 
		problema codificado, usted puede correr sus programas con su estilo 
		pero ya que este funcionando, debe arreglarlo a presentación para su 
		evaluación.

        MODIFICAR LA PORTADA CON MARKDOWN Y ACTUALIZARLA, esta libre de cambiar 
		todo.
        Los archivos deben tener su extensión .CPP (no .txt, etc.)

	Los problemas están en la relación siguiente:
	
	- 100% Sigue el templete proporcionado por el docente y corren 10 
		Problemas (o si incremento en programas por supuesta dificultad) 
		completamente en GITHUB Classroom (no repositorio personal),  los 
		archivos deben tener su extensión .CPP (no .txt, .EXE, etc.) acomodados 
		en dentro de un directorio  (sin acentos o simbolos) SOLO FUENTES, y 
		modifica el README.md que sea una portada.
	- 80% Sigue el templete proporcionado por el docente y corre 8 Problemas 
		(o si incremento en programas por supuesta dificultad) completamente 
		en GITHUB Classroom (no repositorio personal), los archivos deben 
		tener su extensión .CPP (no .txt, etc.) acomodados en dentro de un 
		directorio (sin acentos o simbolos) SOLO FUENTES, y modifica el 
		README.md que sea una portada.
	- 70% Sigue el templete proporcionado por el docente y corre 7 Problemas 
		(o si incremento en programas por supuesta dificultad) completamente 
		en GITHUB Classroom (no repositorio personal), los archivos deben 
		tener su extensión .CPP (no .txt, etc.) acomodados en dentro de un 
		directorio (sin acentos o simbolos) SOLO FUENTES, y modifica el 
		README.md que sea una portada.
	- 50 % EVITA Y NO USA el templete proporcionado por el docente sus Problemas 
		(o si incremento en programas por supuesta dificultad) completamente 
		en GITHUB Classroom (no repositorio personal) con mas de 7 problemas 
		resueltos, los archivos NO tener su extensión .CPP y  puede o no estar 
		acomodados en dentro de un directorio (sin acentos o simbolos) 
		SOLO FUENTES, y modifica el README.md que sea una portada.

ENTREGA:

	URL del GitHub Classroom, y recuerde arreglar la PORTADA, quitar todos los 
		elementos extras del templete, acomodarlo bien para su presentación 
		solo lo necesario.

	</p>

</pre>
# Estructura Básica de un Programa en Assembly y Ciclo de Compilación para ARM32

## Introducción

Este documento ofrece una visión detallada de los fundamentos de la programación en Assembly para la arquitectura ARM32, cubriendo desde la estructura típica de un programa hasta el proceso completo de compilación y enlazado. Adicionalmente, se incluye una guía para la creación de un Makefile simple, con el fin de automatizar estas tareas en el desarrollo del software.

## Marco Teórico

### Anatomía de un Programa en Assembly para ARM32

Un programa en Assembly para ARM32 se compone generalmente de varias secciones importantes, cada una con un propósito específico en la ejecución y organización del programa:

- **Sección de Datos (`data`):** Define variables y constantes utilizadas por el programa.
- **Sección de Código (`text`):** Contiene las instrucciones ejecutables del programa.
- **Sección BSS (`bss`):** Se utiliza para declarar variables que serán inicializadas a cero al comienzo de la ejecución.

#### Componentes Clave

- **Etiquetas:** Identificadores utilizados para marcar puntos específicos en el código o datos.
- **Instrucciones:** Comandos que el procesador ARM ejecutará, incluyendo operaciones aritméticas, manipulación de datos, y control de flujo.

### Proceso de Compilación y Enlazado en ARM32

El desarrollo de software en Assembly para ARM32 sigue un proceso de compilación y enlazado para transformar el código fuente en un ejecutable:

1. **Compilación:** Traduce el código Assembly a código máquina, generando archivos objeto.
2. **Enlazado:** Combina los archivos objeto en un archivo ejecutable, resolviendo referencias a librerías y otros módulos.

### Creación de un Makefile Simple

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


