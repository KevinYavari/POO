# MANUAL DE USUARIO

## Introducción

Bienvenido al Manual de Usuario del Sistema de Gestión de Aeropuerto. Este documento tiene como objetivo proporcionarte una guía detallada sobre cómo utilizar y operar eficazmente el sistema diseñado para gestionar el Aeropuerto Alfonso Bonilla Aragón. El sistema ha sido diseñado teniendo en cuenta las operaciones clave de un aeropuerto, incluyendo la administración de aeronaves, vuelos, pasajeros, tripulación y puertas de embarque.

## Objetivo del Manual

Este manual está diseñado para ayudarte a familiarizarte con todas las características y funcionalidades del sistema. A través de esta guía, podrás aprender cómo:

- Registrar y administrar diferentes tipos de aeronaves, como aviones, helicópteros y jets privados, incluyendo detalles como marca, modelo, capacidad de pasajeros y más.
- Programar vuelos para las aeronaves, asignar tripulación y puertas de embarque, y llevar un registro de los vuelos programados.
- Registrar y gestionar información de pasajeros, asignar pasajeros a vuelos y validar opciones de vuelo.
- Gestionar la tripulación, controlando sus horas de trabajo y asignándola a vuelos específicos.
- Administrar puertas de embarque, asignarlas a vuelos y mantener un historial de asignaciones pasadas.
- Utilizar la interfaz de usuario en línea de comandos para realizar diversas operaciones y consultas.

## Estructura del Manual

El manual está organizado de manera lógica, dividiendo las instrucciones en secciones temáticas para facilitar su consulta. A continuación, te proporcionamos un resumen de las secciones principales:

- **Introducción y Objetivo:** Esta sección proporciona una visión general del manual y su propósito.
- **Requisitos del Sistema:** Aquí encontrarás información sobre los requisitos técnicos necesarios para ejecutar el sistema en tu entorno.
- **Instalación y Configuración:** Instrucciones detalladas para instalar y configurar el sistema en tu computadora.
- **Iniciar el Sistema:** Cómo ejecutar el programa y acceder a la interfaz de usuario.
- **Registrar y Gestionar Aeronaves:** Aprenderás a registrar aeronaves y realizar operaciones relacionadas con ellas.
- **Programar y Gestionar Vuelos:** Instrucciones para programar vuelos, asignar tripulación y puertas de embarque.
- **Administrar Pasajeros:** Cómo registrar pasajeros, validar opciones de vuelo y asignar pasajeros a vuelos.
- **Gestionar Tripulación:** Aprenderás a gestionar la tripulación, controlar sus horas de trabajo y asignarla a vuelos.
- **Administrar Puertas de Embarque:** Instrucciones para asignar puertas de embarque y gestionar su disponibilidad.
- **Interfaz de Usuario en Línea de Comandos:** Una descripción detallada de cómo utilizar la interfaz de usuario basada en comandos.

## Cómo Utilizar Este Manual

Este manual está diseñado para ser una referencia práctica y completa. Puedes consultar las secciones según tus necesidades específicas y seguir las instrucciones detalladas para cada tarea. Si tienes alguna pregunta o necesitas ayuda adicional, no dudes en utilizar la sección de "Solución de Problemas" o buscar en la "Referencia Rápida".

Esperamos que esta guía te ayude a aprovechar al máximo el Sistema de Gestión de Aeropuerto y te facilite la administración eficiente del Aeropuerto Alfonso Bonilla Aragón.

¡Comencemos!

## Requisitos del Sistema

Antes de comenzar a utilizar el Sistema de Gestión de Aeropuerto, asegúrate de que tu sistema cumple con los siguientes requisitos:

- Sistema operativo compatible (por ejemplo, Windows, macOS o Linux).
- Compilador de C++ (por ejemplo, g++) instalado en tu sistema.
- Espacio suficiente en disco para almacenar el programa y los datos relacionados.

## Instalación y Configuración

A continuación, se detallan los pasos para instalar y configurar el Sistema de Gestión de Aeropuerto en tu computadora. Asegúrate de tener acceso a una terminal de línea de comandos para ejecutar los comandos necesarios.

### Paso 1: Descargar el Código Fuente

Para obtener el código fuente del sistema, puedes descargarlo desde el repositorio correspondiente o solicitarlo al equipo de desarrollo. Asegúrate de guardar el código fuente en una ubicación accesible en tu sistema.

### Paso 2: Compilar el Programa

El siguiente paso es compilar el programa utilizando un compilador de C++. Abre una terminal de línea de comandos y navega hasta la ubicación donde se encuentra el código fuente del sistema.

Ejecuta el siguiente comando para compilar el programa:


g++ aeronave.cpp aeronaveFactory.cpp torreDeControl.cpp avion.cpp helicoptero.cpp jets.cpp main.cpp vuelo.cpp pasajero.cpp tripulacion.cpp aeropuerto.cpp persona.cpp -o main.exe
Este comando compilará todos los archivos fuente y generará un archivo ejecutable llamado "main.exe".

### Paso 3: Ejecutar el Programa

Una vez que el programa se haya compilado con éxito, puedes ejecutarlo utilizando el siguiente comando en la terminal:


./main.exe

Esto iniciará el programa y te llevará a la interfaz de usuario en línea de comandos.

## Iniciar el Sistema

Una vez que hayas ejecutado el programa, serás recibido por la interfaz de usuario en línea de comandos del Sistema de Gestión de Aeropuerto. Aquí, podrás interactuar con el sistema utilizando comandos específicos.

La interfaz proporcionará instrucciones y menús para navegar y realizar diversas tareas, como registrar aeronaves, programar vuelos, gestionar pasajeros y más.

Para comenzar, sigue las instrucciones en pantalla y selecciona las opciones que mejor se adapten a tus necesidades. Puedes elegir entre las distintas funcionalidades proporcionadas por el sistema.

## ¡Disfruta de la gestión eficiente del Aeropuerto Alfonso Bonilla Aragón con el Sistema de Gestión de Aeropuerto!

## Solución de Problemas

### Interfaz de Usuario

El Sistema de Gestión de Aeropuerto presenta una interfaz de usuario en línea de comandos que te permitirá interactuar con el sistema de manera eficiente. Al ejecutar el código, serás recibido por una serie de opciones múltiples, donde puedes seleccionar entre ser un "Usuario" o un "Empleado". Cada rol tiene funciones y opciones específicas.

## Opciones de Usuario y Empleado

### Opción 1: Usuario

Cuando seleccionas la opción "Usuario", accedes a un conjunto de funcionalidades diseñadas para los pasajeros y clientes del aeropuerto. Estas funcionalidades incluyen:

- **Crear Usuario:** Permite a un pasajero crear su perfil proporcionando información personal.

- **Mostrar Vuelos:** Proporciona una lista de vuelos disponibles para reservar.

- **Comprar Vuelo:** Permite a los pasajeros reservar asientos en un vuelo específico.

### Opción 2: Empleado

Si seleccionas la opción "Empleado", tendrás acceso a un conjunto más amplio de funcionalidades destinadas a los empleados y personal de gestión del aeropuerto. Las funciones disponibles para los empleados incluyen:

- **Gestión de Vuelos:** Permite administrar y supervisar información relacionada con los vuelos, pasajeros y tripulación.

- **Gestión de Aeronaves:** Permite realizar un seguimiento de las aeronaves y actualizar su estado.

- **Torre de Control:** Permite gestionar la torre de control del aeropuerto y enviar ubicaciones a las aeronaves.

- **Salir del Programa:** Cierra la sesión actual y finaliza el programa.

Al seleccionar una de estas opciones, podrás acceder a las funcionalidades correspondientes. Cada función se explica en detalle en las secciones posteriores de este manual.

## Solución de Problemas

### Interfaz de Usuario

El Sistema de Gestión de Aeropuerto presenta una interfaz de usuario en línea de comandos que te permitirá interactuar con el sistema de manera eficiente. Al ejecutar el código, serás recibido por una serie de opciones múltiples, donde puedes seleccionar entre ser un "Usuario" o un "Empleado". Cada rol tiene funciones y opciones específicas.

Si encuentras problemas durante la instalación, compilación o ejecución del programa, aquí tienes algunos consejos para solucionarlos:

- **Errores de Compilación:** Verifica que tengas un compilador de C++ instalado y que los archivos fuente estén en la ubicación correcta. Asegúrate de que no haya errores de sintaxis en los archivos fuente.

- **Problemas de Ejecución:** Si el programa no se ejecuta correctamente, revisa los mensajes de error en la terminal para obtener pistas sobre el problema. Verifica que todos los archivos necesarios estén presentes.

- **Requisitos del Sistema:** Asegúrate de cumplir con los requisitos del sistema mencionados anteriormente.

- **Contacto de Soporte:** Si no puedes resolver un problema por ti mismo, contacta al equipo de soporte técnico o desarrollo para obtener asistencia adicional.

Para cualquier consulta o asistencia adicional, no dudes en comunicarte al número 3014639338.

