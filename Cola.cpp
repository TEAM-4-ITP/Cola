# include  <iostream>//Libreria importada para utilizar la entrada y salida de datos

using namespace std;//Util para usar las palabras reservadas cout y cin

struct  nodo {//Inicio de la declaración de la estructura considerada en este caso como un nodo de la cola
	int dato;	//Variable declarada dentro de la estructura
	nodo * siguiente;//apuntador a nodo_alum
} * primero, * ultimo, *anterior;//variables de nodos de la pila
	//Fin de la declaración de la estructura

//Inicio de la Declaración de funciones necesarios para interactuar con la cola 
void insertarNodo(); 
void anular();
void buscarNodo();
void desplegarCola();
void modificarNodo();
//Fin de la Declaración de funciones

//Inicio de la función principal 
int  main () {	
	int opcion_menu = 0 ;
	
	do{
		//Imprime por consola las opciones que tiene el usuario
		cout << endl << " | -----------------------------------------------| " ;
		cout << endl << " |                    ° COLA °                    | " ;
		cout << endl << " | -----------------------|-----------------------| " ;
		cout << endl << " | 1. Insertar a la cola  | 4. Eliminar de la cola| " ;
		cout << endl << " | 2. Buscar dato         | 5. Mostrar cola       | " ;
		cout << endl << " | 3. Modificar cola      | 6. Salir              | " ;
		cout << endl << " |------------------------|-----------------------| " ;
		cout << endl << endl << " Escoja una Opcion: " ;
		cin >> opcion_menu;//La opión se almacena en la variable opcion_menu
		
		//Inicio de la condicional switch
		switch(opcion_menu) {
			case  1 :
				cout << endl << endl << " INSERTA DATO EN LA COLA " << endl << endl;
				insertarNodo ();//Se manda a llamar la función insertarNodo
				break ;
			case  2 :
				cout << endl << endl << " BUSCAR UN DATO EN LA COLA " << endl << endl;
				buscarNodo ();//Se manda a llamar la función buscarNodo
				break ;
			case  3 :
				cout << endl << endl << " MODIFICAR UN DATO DE LA COLA " << endl << endl;
			    modificarNodo();//Se manda a llamar la función modificarNodo
				break ;
			case  4 :
				cout << endl << endl << " ELIMINAR UN DATO DE LA COLA " << endl << endl;
				anular();//Se manda a llamar la función anular
				break ;
			case  5 :
				cout << endl << endl << " MOSTRAR COLA " << endl << endl;
				desplegarCola ();//Se manda a llamar la función desplegarCola
				break ;
			case  6 :
				cout << endl << endl << " Programa finalizado ... " << endl << endl;
				break ;
			    default :
				cout << endl << endl << " Opcion No Valida " << endl << endl;
			}//Fin de la condicional switch
	} while (opcion_menu != 6 );
	return  0 ;//Retorno de la función main
}//Fin de la función principal
               
//inicio de la función insertarNodo
void  insertarNodo () {
	nodo * nuevo = new nodo ();//Se crea un nuevo nodo
	cout << " Ingrese el nuevo dato a la cola: " ;
	cin >> nuevo-> dato ;//Se almacena el valor en la variable dato  que apunta a nuevo

	if (primero == NULL ) {//Si primero es igaul a nulo se ejecuta las lineas dentro del if
		primero = nuevo;//primero es igual a nodo
		primero-> siguiente = NULL ;//El apuntador siguiente apunta a primero como nulo
		ultimo = primero;//ultimo es igual a nulo
	}else{//Si la condición anterior no se cumple se precede con lo siguiente
		ultimo-> siguiente = nuevo;
		nuevo-> siguiente = NULL ;
		ultimo = nuevo;
	}
	cout << endl << " Dato Ingresado " << endl << endl;
	
	system("cls");
	system("pause");
}//Fin de la función insertarNodo

//inicio de la función buscarNodo
void  buscarNodo () {
	nodo * actual = new nodo ();
	actual = primero;
	bool encontrado = false ;
	int nodoBuscado = 0 ;
	cout << " Ingrese el dato a Buscar: " ;
	cin >> nodoBuscado;
	if (primero!=NULL ) {
		while (actual!=NULL && encontrado!=true ) {
			
			if (actual-> dato == nodoBuscado) {
				cout <<" \n Dato ( " << nodoBuscado << " ) Encontrado " ;
				encontrado=true ;
					system("pause");
			}
			
			actual = actual-> siguiente ;
		}
		if (! encontrado) {
			cout << "\n Dato No Encontrado " ;
		    	system("pause");
		}
	}else{
		cout << endl << " La cola se encuentra Vacia " << endl << endl;
	}	
	system("cls");
	system("pause");
}//Fin de la función buscarNodo

//inicio de la función modificarNodo
void modificarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato de la cola que quiere Modificar: ";
	cin >> nodoBuscado;
	if(primero != NULL){
		while(actual!=NULL && encontrado != true){
			
			if(actual->dato == nodoBuscado){
				cout << "\n Dato ( " << nodoBuscado << " ) Encontrado";
				cout << "\n Ingrese el nuevo dato para este espacio: ";
				cin >> actual -> dato;
				cout << "\n Dato Modificado\n\n";
				encontrado = true;
				system("\npause");
			}
			
			actual = actual->siguiente;
		}
		if(!encontrado){
			cout << "\n Dato No Encontrado\n\n";
			system("pause");
		}
	}else{
		cout << endl << " La cola se encuentra Vacia " << endl << endl;
	}
	system("cls");
	system("pause");		
}//Fin de la función modificarNodo


//inicio de la función desplegarCola
void  desplegarCola () {
	nodo * actual = new nodo ();
	actual = primero;
	if (primero!=NULL ) {
		while (actual!=NULL ) {
			cout << endl << "  " << actual-> dato ;
			actual = actual-> siguiente ;
		}
		cout << endl;
		system("\n\tpause");
	}else{
		cout << endl << " La cola se encuentra Vacia " << endl << endl;
		system("pause");
	}
	system("cls");
	system("pause");
}//Fin de la función desplegarCola

//inicio de la función anular
void anular(){
		nodo *actual = new nodo ();
	actual = primero;
	nodo *anterior = new nodo ();
	anterior=NULL;
	bool encontrado = false ;
	int nodoBuscado = 0 ;
	cout << " Ingrese el dato a Buscar: " ;
	cin >> nodoBuscado;
	if (primero!=NULL ) {
		while (actual!=NULL && encontrado!=true ) {
			
			if (actual-> dato == nodoBuscado) {
				cout << " \n Dato ( " << nodoBuscado << " ) Encontrado " ;
			
			    if(actual==primero){
			    	primero=primero->siguiente;
				}
			    else if(actual==ultimo){
			    	anterior->siguiente=NULL;
			    	ultimo=anterior;
				}
				else{
					anterior->siguiente=actual-> siguiente;
					
				}
				cout << " \n Dato eliminado " ;
				encontrado=true ;
			}
			anterior=actual;
			actual = actual-> siguiente ;
			system("pause");
		}
		if (! encontrado) {
			cout << "\n Dato No Encontrado " ;
		system("pause");
		}
	}else{
		cout << endl << " La cola se encuentra Vacia " << endl << endl;
	system("pause");
	}
	
	system("cls");
	system("pause");
}//Fin de la función anular

