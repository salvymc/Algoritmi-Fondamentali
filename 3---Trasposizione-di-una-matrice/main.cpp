/*===================================================================================================
Autore : Salvatore Forino       Matricola: N86001741
Programma : Trasposizione Matrice
Data : 02/01/2015
To Do:
-----------------------------------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
int colonne;
int righe;
int v1[100][100];
int i;
int j;
void Trasposizione(int v1[100][100],int colonne,int righe);
cout << "Inserisci il numero di righe e colonne della matrice quadratica" << endl;
cin >> colonne;
righe = colonne;

for (i=0;i<righe;i++){
    for (j=0;j<colonne;j++){
     cout << "Inserisci il valore della cella " << "[" << i << "]" << " [" << j << "]" << endl;
     cin >> v1[i][j];
    }
}
cout << endl;
cout << "Matrice Inserita: " <<endl;
for (i=0;i<righe;i++){
        cout << endl;
    for (j=0;j<colonne;j++){
        cout << "[" << v1[i][j] << "]" << "\t";
    }
}
cout << endl;
Trasposizione(v1,colonne,righe);
cout << endl;
}

//Funzione trasposizione matrice
void Trasposizione(int matrice[100][100],int colonne,int righe)
{
int i;
int j;
int app;
int matrice_t[righe][colonne];
for (i=0;i<colonne;i++){
    for (j=0;j<righe;j++){
            matrice_t[j][i] = matrice[i][j];
    }
}
cout << endl;
cout << "Matrice Transposta:" << endl;
for (i=0;i!=colonne;i++){
        cout << endl;
    for (j=0;j!=righe;j++){
        cout << "[" << matrice_t[i][j] << "]" << "\t";
    }
}
}
