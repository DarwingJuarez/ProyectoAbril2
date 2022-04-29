/*La tarea de esta semana sería, crear un vector de notas y que 
se pueda calcular el promedio*/

#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int notas[4];
	int n=5;
	int suma = 0 , promedio;
	
	for(int i=1; i<n; i++){
    cout<<"Ingrese las 4 notas finales: "; 
    cin>>notas[i];
    
    suma += notas[i];
	}
	
	promedio = (suma)/4;
	if (promedio > 60){
		cout<<"Su promedio es de: "<<promedio;
		cout<<"\nFELICIDADES APROBO EL AÑO";
	}
	else
	{
		cout<<"Su promedio es de: "<<promedio;
		cout<<"\nREPROBO EL AÑO";	
	}
	getch();
	return 0;
}

