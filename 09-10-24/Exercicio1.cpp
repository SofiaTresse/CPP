
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


void ImprimirVetor(int arr[], int size){
for(int i = 0; i< size; i++) {
cout<< arr[i]<<" ";

}
cout<<endl;
}


int main(){
    int escolha;
    int membros[] = {24, 18, 30, 21, 25, 22, 26, 28, 19, 27, 23, 20, 29, 31, 24, 22, 25, 26, 20, 27, 18, 21, 19, 25, 22, 24, 30, 28, 29, 23};
    int size= 30;

    cout<<"A agência de K-pop precisa organizar os membros de um grupo pelo tempo de treinamento antes do grande show"<<endl;
    cout<<endl;
    cout << "Tempo de Treinamento dos grupos: ";
    for (int i = 0; i < size; ++i)
    {
        cout << membros[i] << " ";
    }

   cout<<endl;
   cout<<endl;

cout<<"É necessário organizar os grupos em ordem crescente por tempo de treinamento."<< endl;
cout<<"Para isso é possível utilizar duas maneiras de organização"<< endl;
cout<<"1.Bubble Sort"<<endl;
 cout<<"2.Selection Sort"<<endl;
cout<<"Digite sua escolha: "<<endl;
cin>>escolha;

switch (escolha){
{
case 1:    
cout << "Grupos organizados usando Bubble Sort: ";
 bubbleSort(membros, size);
    break;

case 2:
    cout << "Grupos organizados usando Selection Sort: ";
 selectionSort(membros, size);
 break;

default:
cout<<"Opção inválida"<<endl;
    break;
}

}

return 0;
}
   


