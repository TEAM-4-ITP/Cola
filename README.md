# Cola
***Programa en donde se hace uso del tipo de Estructura Lineal llamado Cola, elaborado en C++***

------------

El programa que se presenta fue realizado en el lenguaje de programación C++, asimismo el compilador utilizado fue Dev C++, el código fuente esta anexado junto con este archivo, pero aqui mismo se describe gran parte del código fuente, por último, se presenta unas capturas de pantalla de la ejecución del programa para corroborar que efectivamente el programa funciona correctamente.

------------

Concepto de cola en programación:

> Una cola es una estructura de datos que almacena elementos en una lista y permite acceder a los datos por uno de los dos extremos de la lista.

------------


Para continuar, se hizo uso de una estructura a la cual denominanos **nodo**, en ella se declara una variable de tipo entero la cual se hará uso más adelante. Asimismo, contiene un puntero de nombre siguiente y variables de tipo nodo las cuales se utilizarán para almacenar los datos y demás del usuario. El código de la estructura se puede apreciar a continuación:

![imagen](https://user-images.githubusercontent.com/71055467/97519207-7b3abf80-195e-11eb-91e7-8bff8a643802.png)

Las funciones son esenciales en este programa, por ello a continuación de muestra una captura en donde podemos ver cada una de las fuciones que tienen una tarea específica para realizar.

![imagen](https://user-images.githubusercontent.com/71055467/97519252-8ee62600-195e-11eb-92b8-5cbbad6e405a.png)

Las líneas de código que aparecen enseguida se tratan del metodo main o la función principal, en ella se encarga de pedir al usuario que ingrese un número de acuerdo a la opción que desea, una vez hecho esto se procede con una sentencia switch para que pueda ejecutarse la opción seleccionada, para cada caso lo que se hace es llamar a las funciones correspondientes, para que puedan realizar la tarea requerida.

![imagen](https://user-images.githubusercontent.com/71055467/97519312-ade4b800-195e-11eb-94c5-0ca92688fc29.png)
![imagen](https://user-images.githubusercontent.com/71055467/97519349-c0f78800-195e-11eb-8646-5cae139a789b.png)

La primer función que aparece en el código fuente se trata de **inserarNodo**, como su nombrea lo dice, inserta un elemento en la cola. 
Para ello se nstancia el objeto y se pide al usuario que ingrese un dato dicho dato será almacenado en la variable dato de la estructura, despues se configura la cola de modo que el primer dato introducido sea el prirmero en salir.

![imagen](https://user-images.githubusercontent.com/71055467/97519385-cd7be080-195e-11eb-8f8b-7770baa96944.png)

La siguiente función se trata de buscar un nodo, en ella se crea un nuevo nodo la cual se iguala a primero, se declaran variables de tipo bool que se utilizarán mas adelante, despues el usuario ingresa el dato que desea buscar, y mientras el dato que se busca esta en la cola, esta se imprime junto con el mensaje de encontrado. En caso de que no haya un dato similar al que se busca manda un mensaje, y en caso de que la cola está vacia, esta imprime un mensaje diciendo que esta vacía.

![imagen](https://user-images.githubusercontent.com/71055467/97519861-9954ef80-195f-11eb-84d7-453e28320a24.png)

El código que aparece en la captura siguiente se trata de la función **mdificarNodo**, en ella se pide al usuario que ingrese un dato de la cola que desea modificar y en caso de que aparece, el programa pide al usuario un nuevo dato para que sea ingresado y una vez hecho lo anterior, imprime un mensaje por consola para decir que se ha modificado.
En caso de que el dato no se encuentra, el programa simplemente imprime un mensaje diciendo que no se encuentra dicho dato.
Y si la cola esta vacia también imprime un mensaje correspondente al error.

![imagen](https://user-images.githubusercontent.com/71055467/97520361-a3c3b900-1960-11eb-913a-1e05e854f807.png)

La función **desplegarCola**, no hace más que mostrar los elementos de dicha cola, en caso de que no hay elementos simplemente imprime un mensaje diciendo que la cola se encuentra vacia.

![imagen](https://user-images.githubusercontent.com/71055467/97520555-2187c480-1961-11eb-8054-1a463cfbb453.png)

El código fuente siguiente es de la función **anular**, esta parte del programa se encarga de eliminar un dato de la cola, para ello primero pide al usuario un dato para que el programa se encargue de buscarlo, una ves que se haya encontrado, este pasará a ser eliminado con las sentencias correspondientes.
En caso contrario si no se encuentra el dato o la cola esta vacia, simplemente imprime un mensaje correspondiente al resultado de búsqueda.

![imagen](https://user-images.githubusercontent.com/71055467/97520891-e6d25c00-1961-11eb-9011-d0f579bbe555.png)
![imagen](https://user-images.githubusercontent.com/71055467/97520906-f356b480-1961-11eb-81f7-1089d3ab6ef9.png)


El código fuente se presenta en las capturas siguientes:

![imagen](https://user-images.githubusercontent.com/71055467/97521041-492b5c80-1962-11eb-80e1-5d06c07a1339.png)
![imagen](https://user-images.githubusercontent.com/71055467/97521068-5b0cff80-1962-11eb-9d36-a48e005d5446.png)
![imagen](https://user-images.githubusercontent.com/71055467/97521090-6c560c00-1962-11eb-82c1-f03c76d9bcb7.png)
![imagen](https://user-images.githubusercontent.com/71055467/97521121-7c6deb80-1962-11eb-89b7-d29b72ccdffe.png)
![imagen](https://user-images.githubusercontent.com/71055467/97521141-8abc0780-1962-11eb-8900-3189d9488973.png)
![imagen](https://user-images.githubusercontent.com/71055467/97521169-9ad3e700-1962-11eb-9a69-406f4e5f8fa2.png)


------------


Como ya se ha explicado el código fuente del programa, procedemos a mostrar las capturas de pantalla de la ejecución del programa para ver que efectivamente lo explicado anteriormente es correcto.

Al ejecutar el código, aparece un pequeño menu para que el usuario digite una opción.

![imagen](https://user-images.githubusercontent.com/71055467/97521426-2c435900-1963-11eb-945b-40ebccac2de8.png)

Hemos seleccionado la opción 1, por ello nos pedira datos como se muestra a continuación:

![imagen](https://user-images.githubusercontent.com/71055467/97521531-5c8af780-1963-11eb-9f68-7b6917bd967c.png)

Una vez ingresado un dato, nos regresa al menú para ingresar alguna otra opción,en este caso ingresaremos otros dos datos mas de tipo entero:

- Dato  2

![imagen](https://user-images.githubusercontent.com/71055467/97521713-b8ee1700-1963-11eb-82d4-c53aafe34bce.png)

- Dato 3

![imagen](https://user-images.githubusercontent.com/71055467/97521744-d0c59b00-1963-11eb-9865-0e2b7999209e.png)


Una vez ingresado los datos, nos regresa al menú para ingresar alguna otra opción, para ver que en realidad los datos ingresados se hayan guardado, pasaremos a mostrarlos:

![imagen](https://user-images.githubusercontent.com/71055467/97521963-46ca0200-1964-11eb-81a7-a239a9f1054f.png)

Vemos que efectivamente se han ingresado correctamente.

Ahora pasaremos a la opción 4 en donde se eliminará un dato de la cola:

![imagen](https://user-images.githubusercontent.com/71055467/97522111-9ad4e680-1964-11eb-8dd3-213f327d0082.png)

Podemos ver en la captura que primero nos pide un dato para buscar en la cola, luego nos muestra que ha sido encontrado y enseguida lo elimina.

Si queremos ver de nuevo la cola para ver que se ha eliminado simplemente ingresamos la opción 5, como se muestra:

![imagen](https://user-images.githubusercontent.com/71055467/97522230-e6879000-1964-11eb-9eb6-00d4a493111a.png)

Y podemos apreciar que efectivamente se ha eliminado, ahora pasamos a modificar la cola.

![imagen](https://user-images.githubusercontent.com/71055467/97522329-2484b400-1965-11eb-8f4c-5684a76fe37e.png)

En la captura mostrada arriba, primero ingresamos el dato que deseamos modificar, el programa nos dice que lo ha encontrado, ahora nos pide el dato que deseamos reeplazar, y con ello nos muestra un mensaje diciendo que se ha modificado el dato de la cola.

Para mostrar la cola y ver que se ha cambiado ingresamos la opción 1 y vemos que efectivamente el programa funciona bien.

![imagen](https://user-images.githubusercontent.com/71055467/97522513-8cd39580-1965-11eb-912f-2053f0ac55c1.png)

Ahora solo nos queda ingresar la opción dos, en esta parte el programa se encarga de buscar el dato que el usuario ingrese.

![imagen](https://user-images.githubusercontent.com/71055467/97522598-c1475180-1965-11eb-8b98-5e57d5a0e945.png)

Como podemos observar, primero pide al usuario un dato a buscar luego aparece un mensaje diciendo que ha sido encontrado, pero si ingresamos un dato que no se encuentra en la cola, nos muestra un mensaje diciendo que no ha sido encontrado el dato, eso lo podemos ver en la siguiente captura:

![imagen](https://user-images.githubusercontent.com/71055467/97522748-15eacc80-1966-11eb-86f3-5e174176e478.png)

------------


En conclusión, al momento de finalizar con este programa, hemos aprendido muchos conceptos y sobre todo como funciona lógicamente una cola en programación. En la vida real podemos ver ejemplos numerosos de colas: la cola de un autobús, la cola de un cine, una caravana de coches en una calle, etc. En todas ellas el primer elemento (pasajero, coche, etc.) que llega es el primero que sale.
