/*===================================================================================================
Autore : Salvatore Forino       Matricola: N86001741
Programma : Insertion Sort
Data : 02/01/2015
To Do:
-----------------------------------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

int main()
{
int Insertion_Sort(int arr[],int n);
int n;
int i;
cout << "Immettere dimensione Array" << endl;
cin >> n;
int* p1 = new int[n];
for (i=0;i<n;i++){
    cout << "Inserisci il " << i << " numero" << endl;
    cin >> p1[i];
}

Insertion_Sort(p1,n);


i=0;
while(i<n){
    cout << "[" << p1[i] << "]";
    i++;
}
}

//InsertionSort
int Insertion_Sort(int p1[],int n)
{
int i;
int j;
int tmp;
for (i=1;i<=n-1;i++){
     j = i;
while (j > 0 && p1[j-1]>p1[j]){
       tmp = p1[j];
       p1[j] = p1[j-1];
       p1[j-1] = tmp;
       j--;
    }
}
}
