//Librerias
#include<iostream>
#include <cstdlib>
#include<fstream>
//Prototipo de funciones de funciones
unsigned long long fibonacci(int n,unsigned long *cp);
void caso_prueba(int n,unsigned long *cp);
unsigned long long fibonacci_itera(int n,unsigned long *cp);
void caso_prueba2(int n,unsigned long *cp);
using namespace std;
//Funcion Principal
int main(){

unsigned long *cp,con=0;
	int n=100;
	cp=&con;
	cout<<"Primer fibo"<<endl;
	caso_prueba(n,cp);//Llamada a la funcion prueba de fibonacci iterativa
	cout<<"segundo fibo"<<endl;
	caso_prueba2(50,cp);//Llamada a la funcion prueba de fibonacci recursivo
	
	return 0;
	
}
/*
unsigned long long fibonacci(int n,int *cp)
Descripción:Funcion que genera el numero n de la sucession de fibonacci solicitado 
Recibe: Un entero que el numero que se requiere de la sucession y un puntero contador de pasos
Devuelve:El numero solicitado de la sucession
Observaciones: Ninguna
*/
unsigned long long fibonacci(int n,unsigned long *cp){
	*cp=0;//inicio de contador
	unsigned long long x=0,y=0,z=1;(*cp)++;(*cp)++;(*cp)++;//declaracion de variables
	(*cp)++;
	for(int i=1;i<n;i++){ //ciclo que llega hasta el numero deseado
		(*cp)++;
		x = z;(*cp)++;//asignacion de valores
		z = x + y;(*cp)++; 
		y = x;(*cp)++;
		(*cp)++;
	}
	(*cp)++;
	return z;//retorno de valor
}
void caso_prueba(int n,unsigned long *cp){
	ofstream archivo;//Declaracion de archivo
	archivo.open("grafica_fibo.csv",ios::out);//Creacion de archivo csv
	int p;
	//Inicio de algoritmo
	for(int i=1;i<n;i++){//Numero de pruebas
		//p=rand()% 100;	
		cout<<fibonacci(i,cp)<<",";//Impresion en pantalla del valor retornado por la funcion
		cout<<*cp<<endl;//Impresion en pantalla del contador de pasos
		archivo<<fibonacci(i,cp)<<",";//Impresion en archivo csv
		archivo<<*cp<<endl;
		
	}	
	archivo.close();//Cierre del archivo csv
}

unsigned long long fibonacci_itera(int n,unsigned long *cp){
	//Inicio de algoritmo
	if( n == 1 || n == 2){//condicional que se cumple si n es igual a 1 o 2
		(*cp)++;
		(*cp)++;
		(*cp)++;
		return 1; //retorna 1
	}else{
	
		(*cp)++;
		(*cp)++;
		(*cp)++;
		return(fibonacci_itera(n-1,cp) + fibonacci_itera(n-2,cp));//comienza la recursion y manda a llamar a la funcion
																  // dos veces y suma el resultado
	}
}
void caso_prueba2(int n,unsigned long*cp){
	ofstream archivo;//Declaracion  de archivo
	archivo.open("grafica_fibo2.csv",ios::out);//Creacion de archivo csv
	int p;
	for(int i=1;i<n;i++){//Numero de pruebas
		//p=rand()% 100;
		*cp=0;	
		cout<<fibonacci_itera(i,cp)<<",";//Impresion en pantalla del valor retornado por la funcion
		cout<<*cp<<endl;//Impresion en pantalla del contador de pasos
		archivo<<fibonacci(i,cp)<<",";//Impresion en archivo csv
		archivo<<*cp<<endl;
		
	}	
	archivo.close();//Cierre del archivo csv
}
