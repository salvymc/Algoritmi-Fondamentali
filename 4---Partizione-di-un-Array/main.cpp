/*===================================================================================================
Autore : Salvatore Forino       Matricola: N86001741
Programma : Partizione di un Array
Data : 04/01/2015
To Do:
-----------------------------------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
int i;
int n;
int x;
cout << "Inserisci la dimensione dell'array: " << endl;
cin >>n;

int* Arr = new int[n]; //Allocazione dinamica Array
int Partizione(int Arr[],int n,int x);//Richiamo di funzione
for (i=0;i<n;i++){ //Riempimento Array
    cout << "Inserisci " << i << " numero: " << endl;
    cin >> Arr[i];
}
cout << "Inserisci il numero del discriminante X: " << endl;
cin >> x; //Inserimento discriminante x

Partizione(Arr,n,x); //Richiamo di funzione

//Ciclo di stampa
cout << "L'Array è stato partizionato: " << endl;
cout << endl;
for (i=0;i<n;i++){
    cout << "[" << Arr[i] << "]";
}
}

//Funzione Partizione Array

int Partizione(int Arr[],int n,int x)
{
int i; //Indice Generico
int j;
int tmp;//Variabile Temporanea
i=0; //i si posizione all'inizio dell'array
j= n-1;//Mentre j si posiziona alla fine (n-1)

while(Arr[i]<=x) i++; //Salta i valori minori al discriminante
while(Arr[j]>x) j--; // Salta i valori maggiori al discriminante

while (i<j){ //Se non partizionato il ciclo While scambia i valori
 tmp = Arr[i];
 Arr[i] = Arr[j];
 Arr[j] = tmp;

 while(Arr[i]<=x) i++;
 while(Arr[j]>x) j-- ;
}
}
