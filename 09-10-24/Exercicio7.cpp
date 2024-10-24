
#include <iostream>
using namespace std;



//BubbleSort
void bubbleSort (int arr[], int size) {
    for (int i = 0; i < size - 1; ++i)
    { for (int j = 0; j < size - i - 1; ++j)
    {
        if (arr[j] < arr[j + 1])
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
if (arr[j]> arr[minIndex]) {
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
    int membros[] = {5, 3, 6, 7, 2, 4, 8, 3, 9, 10, 6, 7, 2, 5, 8, 4, 10, 7, 6, 9, 5, 4, 2, 3, 6, 7, 5, 9, 4, 8};
    int size= 30;

    cout<<"A empresa de K-pop está organizando os fãs em diferentes regiões do mundo para um evento global"<<endl;
    cout<<endl;
    cout << "Número de fãs por região (em milhões):";
    for (int i = 0; i < size; ++i)
    {
        cout << membros[i] << " ";
    }

   cout<<endl;
   cout<<endl;

cout<<"É necessário organizar de forma que a ordem deve ser da região com maior quantidade de fãs para a com menor"<< endl;
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
   


