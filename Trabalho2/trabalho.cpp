
#include <iostream>
using namespace std;



//BubbleSort 
void bubbleSort (int arr[], int size) {
    for (int i = 0; i < size - 1; ++i)
    { for (int j = 0; j < size - i - 1; ++j)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr [j];
            arr[j] = arr[j + 1];
            arr [j + 1] = temp;
        }   
    }   
    }
      
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

}

//InsertionSort
void insertionSort(int arr[], int size){
for (int i = 1; i< size; ++i) {
int key = arr[i];
int j = i - 1;

while(j >= 0 && arr[j] > key){
arr[j + 1] = arr[j];
j = j - 1;
}
arr[j + 1] = key;
}
      
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

}


//SelectionSort 
void selectionSort(int arr[], int size) {
for(int i = 0; i <size - 1; ++i){
int minIndex = i;

for(int j = i + 1; j < size; ++j){
if (arr[j]< arr[minIndex]) {
minIndex = j;
}
}
int temp = arr[i];
arr[i] = arr[minIndex];
arr[minIndex] = temp;
}

for(int i = 0; i <size; ++ i){
cout<<arr[i]<<" ";
}
cout<<endl;
}



int main(){




const int MAX_TAMANHO = 100 ;
float vetor[MAX_TAMANHO];  
cout<<"Selecione o número de elementos que há em seu conjunto de dados"<< endl;    
int tamanho;
cin >> tamanho;
for (int i = 0; i < tamanho; ++i) {
    cout<<"Agora você irá colocar os elementos desse conjunto"<< endl;  
   cin >> vetor[i];
}
 cout <<"Esse é o seu conjunto sem estar organizado por um dos métodos: "<<endl;
 cout << vetor[] << " ";


 if (tamanho<=20)
    {
       cout << "Conjunto de elementos organizados usando InsertionSort: ";
 insertionSort(vetor, tamanho);
    }
else  if (tamanho > 20 && tamanho <=30)
    {
        cout << "Conjunto de elementos organizados usando Selection Bubble Sort: ";
 bubbleSort(vetor, tamanho);
    }
    else{
        cout << "Conjunto de elementos organizados usando Selection Selection Sort: ";
 selectionSort(vetor, tamanho);
    }

return 0;
}
   

