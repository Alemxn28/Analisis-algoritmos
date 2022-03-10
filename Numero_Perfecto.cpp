//librerias
#include<iostream>
#include<cstdlib>
using namespace std;
//Prototipos de funciones
bool perfecto(int n,int,int *ct);
void MostrarPerfectos(int n,int,int *ct);
//Funcion principal
int main(){
	
int suma_cont=0,ct;
			
		MostrarPerfectos(5,suma_cont,&ct);//Llamada a la funcion que muestra a los perfectos
		//perfecto(6,suma_cont,&ct);
	
	
	
}

bool perfecto(int n,int suma_cont,int *ct){
	*ct=0;//inicio de contador de pasos 
	suma_cont=0; (*ct)++;//Inicio de contador de que guarda la suma de los divisores
	(*ct)++;
	for(int i=1;i<n;i++){//inicio de ciclo
		(*ct)++;
		(*ct)++;
		if(n%i==0){//Condicion que encuentra divisores de n
			suma_cont += i;(*ct)++;//guarda la suma de los divisores
		}
	}(*ct)++;
	if(suma_cont == n){(*ct)++;//Condicion que valida si el numero es perfecto
			(*ct)++;			
			return true; //Retorna verdad
		
			}
	else{
		
		return false;
	}
	
}

void MostrarPerfectos(int n,int suma_cont,int *ct){
	*ct=0;//Inicio de contador de pasos
	int con=0;(*ct)++;//Contador que aumenta, cuando encuentra perfecto
	int i=1;(*ct)++;
		while(con!=n){ //ciclo que para cuando se alcanza el numero de perfectos deseado
				(*ct)++;
			if(true==perfecto(i,suma_cont,ct)){//condicion que valida si se encontro un numero perfecto
			(*ct)++;
				cout<<"es un numero perfecto: "<<i<<endl;(*ct)++;
				con++;(*ct)++;//
				cout<<"Pasos:  "<<*ct<<endl;
			}
			i++;(*ct)++;
			
		}
		(*ct)++;
}
