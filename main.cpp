//Quicksort con archivos;
#include <iostream>
#include <fstream>
using namespace std;
int mitad(int arr[], int pinicial, int pfinal);
void ordenar(int arr[], int pinicial, int pfinal);
ofstream archivo;
int main() {
  archivo.open("Quicksort.txt", ios::app);
  archivo<<"Algoritmo de Ordenamiento Quicksort\n";
  int A[10]={1,2,5,8,-9,4,5,125,124,50};
  archivo<<"Arreglo original\n";
  for(int i=0;i<10;i++){
    archivo<<"|"<<A[i]<<"|";
  }
  ordenar(A,0,9);
  archivo<<"\nArreglo ordenado\n";
  for(int i=0;i<10;i++){
    archivo<<"|"<<A[i]<<"|";  
  }
  archivo.close();

return 0;
}

int mitad(int arr[], int pinicial, int pfinal){
return arr[(pinicial+pfinal)/2];
}

void ordenar(int arr[], int pinicial, int pfinal){
  int i=pinicial;
  int j=pfinal;
  int tem;
  int piv=mitad(arr,pinicial,pfinal);
  do{
    while(arr[i]<piv){
      i++;
    }
    while(arr[j]>piv){
      j--;
    }
    if(i<=j){
      tem=arr[i];
      arr[i]=arr[j];
      arr[j]=tem;
      i++;
      j--;
    }    
  }while(i<=j);
  if(pinicial<j)
    ordenar(arr,pinicial,j);
  if(i<pfinal)
  ordenar(arr,i,pfinal);    
  }


//algoritmo quicksort natural
/*#include <iostream>
using namespace std;
int mitad(int arr[], int pinicial, int pfinal);
void ordenar(int arr[], int pinicial, int pfinal);

int main() {
  int A[10]={1,2,5,8,9,4,5,125,124,50};
  ordenar(A,0,9);
  for(int i=0;i<10;i++){
    cout<<"|"<<A[i]<<"|";  }

return 0;
}

int mitad(int arr[], int pinicial, int pfinal){
return arr[(pinicial+pfinal)/2];
}

void ordenar(int arr[], int pinicial, int pfinal){
  int i=pinicial;
  int j=pfinal;
  int tem;
  int piv=mitad(arr,pinicial,pfinal);
  do{
    while(arr[i]<piv){
      i++;
    }
    while(arr[j]>piv){
      j--;
    }
    if(i<=j){
      tem=arr[i];
      arr[i]=arr[j];
      arr[j]=tem;
      i++;
      j--;
    }    
  }while(i<=j);
  if(pinicial<j)
    ordenar(arr,pinicial,j);
  if(i<pfinal)
  ordenar(arr,i,pfinal);    
  }
*/