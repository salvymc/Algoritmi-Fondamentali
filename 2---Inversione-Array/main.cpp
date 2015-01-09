/*===================================================================================================
Autore : Salvatore Forino Matricola: N86001741
Programma : Inversione di un array
Data : 02/01/2015
To Do:
-----------------------------------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
int n; //Grandezza Array
int i; //Indice Generico
int sta=1; //Indice per la stampa
int Inverti(int* p1,int* p2,int n); //Funzione di inversione
cout << "Inserisci la dimensione dell'array: " << endl;
cin >> n;
int* p1 = new int[n]; //Allocazione dinamica //Array da invertire
int* p2 = new int[n]; //Allocazione dinamica// Array di supporto
for (i=1;i<=n;i++){
    cout << "Inserisci il " << i << " numero" << endl;
    cin >> p1[i];
    }

Inverti(p1,p2,n); //Richiamo la funzione e passo i parametri

while (sta<=n){ //Ciclo di stampa
    cout << "[" << p2[sta] << "] ";
    sta++;
}
}
//Funzione "Inverti Array"
int Inverti(int array1[], int array2[],int n)
{
int k = n;
int j;
for (j=1;j<=n;j++){
      array2[j] = array1[k];
      if (k!=0){
      k--;
      }
}
return array2[n];
}
