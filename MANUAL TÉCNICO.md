# MANUAL TÉCNICO

## Introducción

**Nombre del Proyecto:** Sistema de Gestión del Aeropuerto Alfonso Bonilla Aragón.

**Objetivo:** Desarrollar un sistema completo para administrar diferentes aspectos del aeropuerto, incluyendo vuelos, pasajeros, tripulación, aeronaves y puertas de embarque.

## Descripción del Aeropuerto

**Nombre del Aeropuerto:** Alfonso Bonilla Aragón.

**Ubicación:** [Ubicación geográfica del aeropuerto].

**Características:** [Breve descripción del aeropuerto y su importancia].

## Requisitos del Proyecto

### Gestión de Aeronaves:

- Registro de diferentes tipos de aeronaves: aviones, helicópteros y jets privados.
- Detalles de las aeronaves: marca, modelo, capacidad de pasajeros, velocidad máxima, autonomía, año de fabricación y estado.
- Atributos específicos para cada tipo de aeronave.

### Gestión de Ubicación de Aeronaves:

- Reporte constante de ubicación de las aeronaves a la torre de control.
- Compartir información de ubicación para evitar colisiones.

### Gestión de Vuelos:

- Programación y registro de vuelos.
- Restricciones de vuelo para aeronaves.
- Detalles de vuelos, incluyendo número de identificación, fecha y ciudades de origen y destino.

### Gestión de Pasajeros:

- Registro de pasajeros con información personal.
- Datos de nacionalidad, maletas y resumen de información médica.

### Gestión de Tripulación:

- Asignación de tripulación a vuelos.
- Detalles de la tripulación, incluyendo experiencia y horas de trabajo.

### Gestión de Puertas de Embarque:

- Asignación de puertas de embarque a vuelos.
- Control de disponibilidad y hora de embarque.

## Funcionalidades Destacadas

- Registro y administración de aeronaves, vuelos, pasajeros y tripulación.
- Seguimiento en tiempo real de la ubicación de las aeronaves.
- Verificación de disponibilidad y compra de vuelos por parte de los pasajeros.
- Asignación de puertas de embarque de manera eficiente.

## Desafíos Técnicos

- Implementación de las diferentes clases en un mismo sistema.

## Conclusiones

Este proyecto busca crear un sistema completo y robusto para la gestión eficiente del aeropuerto Alfonso Bonilla Aragón. Esperamos que esta solución mejore la coordinación y operación del aeropuerto, proporcionando una experiencia más segura y eficiente tanto para pasajeros como para las aeronaves.

## Cómo funciona

El programa permite la gestión y simulación de operaciones aeroportuarias, incluyendo la gestión de aeronaves, vuelos, pasajeros y tripulantes, y la comunicación entre estas entidades para administrar de manera eficiente el tráfico aéreo y la información relacionada con vuelos y aeronaves en un aeropuerto ficticio.

## Clase Aeronave

Esta clase define las propiedades generales de una aeronave, como la marca, el modelo, la capacidad de pasajeros, la velocidad máxima, la autonomía, el año de fabricación, la ubicación y el estado. La clase contiene funciones para recibir mensajes de ubicación de otras aeronaves y ver esas ubicaciones. También incluye un estado de vuelo (volar), que puede ser activado o desactivado.

## Clase Avion

Esta clase hereda de la clase Aeronave y agrega atributos específicos de aviones, como la altitud máxima, la cantidad de motores y la categoría. Tiene una función mostrarInfo() para mostrar información detallada sobre el avión.

## Clase Helicoptero

Similar a la clase Avion, esta clase hereda de Aeronave y agrega atributos específicos de helicópteros, como la cantidad de rotores, la capacidad de elevación y el uso específico. Tiene una función mostrarInfo() para mostrar información detallada sobre el helicóptero.

## Clase JetPrivado

También hereda de Aeronave y agrega atributos específicos de jets privados, como el propietario, los servicios a bordo y los destinos frecuentes. Tiene una función mostrarInfo() para mostrar información detallada sobre el jet privado.

## Clase Vuelo

Esta clase representa un vuelo específico y contiene información sobre el código de vuelo, el origen, la fecha, el destino y la aeronave asociada. Puede agregar pasajeros y tripulantes al vuelo, mostrar información sobre el vuelo y los pasajeros, y ajustar la disponibilidad de asientos.

## Clase Pasajero

Esta clase define un pasajero y sus atributos, como nombre, apellidos, dirección, fecha de nacimiento, etc.

## Clase Tripulación

Similar a la clase Pasajero, esta clase define a los miembros de la tripulación y sus atributos específicos, como el puesto y la experiencia.

## Clase TorreDeControl

Esta clase representa una torre de control y puede registrar aeronaves y enviar ubicaciones a las aeronaves registradas.

## Clase Aeropuerto

Esta clase representa un aeropuerto y puede agregar o quitar vuelos, aeronaves y pasajeros de vuelos, y mostrar información sobre vuelos y aeronaves.

## Diagrama UML del Proyecto

**Estructura de Clases**
(https://drive.google.com/file/d/1farPKGcO_LWixUpQTSbvjDLNZ5-wh5Vf/view?usp=sharing)

Este diagrama UML ilustra la estructura de clases del proyecto de gestión de aeropuerto. Proporciona una visión general de cómo las diferentes clases se relacionan entre sí y cómo interactúan en el sistema. En el diagrama, podrás ver las clases clave, sus atributos y métodos, así como las relaciones entre ellas. Esta representación visual te ayudará a comprender mejor la arquitectura del sistema y cómo se organiza la información.

## Ejecución del Programa

**Paso 1:** Abre la Terminal o el Símbolo del Sistema. Asegúrate de estar en la ubicación donde se encuentra tu código fuente del proyecto.

**Paso 2:** Ejecuta el Comando de Compilación. Utiliza el compilador g++ para compilar todos los archivos fuente del proyecto en un único ejecutable. Ejecuta el siguiente comando:

## Compilación del Proyecto

Para compilar el proyecto de gestión de aeropuerto, sigue estos pasos:

**Paso 1:** Abre la Terminal o el Símbolo del Sistema.

Abre una terminal en tu sistema operativo. En Windows, utiliza el Command Prompt; en macOS y Linux, utiliza la Terminal. Asegúrate de estar en la ubicación donde se encuentra tu código fuente del proyecto.

**Paso 2:** Ejecuta el Comando de Compilación.

Utiliza el compilador g++ para compilar todos los archivos fuente del proyecto en un único ejecutable. Ejecuta el siguiente comando:


g++ aeronave.cpp aeronaveFactory.cpp torreDeControl.cpp avion.cpp helicoptero.cpp jets.cpp main.cpp vuelo.cpp pasajero.cpp tripulacion.cpp aeropuerto.cpp persona.cpp -o main.exe

Este comando compilará todos los archivos fuente del proyecto y generará un archivo ejecutable llamado "main.exe".

Paso 3: Ejecuta el Programa

Una vez que hayas compilado el proyecto de gestión de aeropuerto siguiendo los pasos mencionados anteriormente, puedes ejecutarlo fácilmente. Aquí te indicamos cómo hacerlo:

Paso 4: Abre la Terminal o el Símbolo del Sistema

Abre una terminal en tu sistema operativo (Command Prompt en Windows o Terminal en macOS y Linux). Asegúrate de estar en la misma ubicación donde compilaste el proyecto y donde se encuentra el archivo ejecutable ("main.exe").

Paso 5: Ejecuta el Programa

Para ejecutar el programa, simplemente escribe el siguiente comando y presiona Enter:
./main.exe

Esto iniciará la aplicación de gestión de aeropuerto, y verás la interfaz del programa en la terminal o ventana de comandos. Desde aquí, podrás interactuar con el sistema y realizar diferentes operaciones, como la administración de aeronaves, vuelos, pasajeros y más, según lo diseñado en el proyecto.


