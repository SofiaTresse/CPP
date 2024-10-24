
#include <iostream>
using namespace std;



//BubbleSort Crescente 
void bubbleSortC (int arr[], int size) {
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

//BubbleSort Decrescente
void bubbleSortD (int arr[], int size) {
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

//SelectionSort Crescente
void selectionSortC(int arr[], int size) {
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

//SelectionSortDecrescente
void selectionSortD(int arr[], int size) {
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
    int membros[] = {2023, 2021, 2022, 2023, 2021, 2022, 2020, 2019, 2020, 2021, 2023, 2022, 2019, 2023, 2021, 2022, 2020, 2021, 2019, 2020};
    int size= 30;

    cout<<"A empresa de K-pop precisa organizar as faixas de um álbum por ordem de lançamento"<<endl;
    cout<<endl;
    cout << "Datas de lançamento (ano):";
    for (int i = 0; i < size; ++i)
    {
        cout << membros[i] << " ";
    }

   cout<<endl;
   cout<<endl;

cout<<"É necessário organizar de forma que a ordem deve ser da região com maior quantidade de fãs para a com menor"<< endl;
cout<<"Para isso é possível utilizar duas maneiras de organização"<< endl;
cout<<"1.Bubble Sort-Crescente"<<endl;
cout<<"2.Bubble Sort-Decrescente"<<endl;
cout<<"3.Selection Sort-Crescente"<<endl;
cout<<"4.Selection Sort-Decrescente"<<endl;
cout<<"Digite sua escolha: "<<endl;
cin>>escolha;



switch (escolha){

{
case 1:    
cout << "Grupos organizados usando Bubble Sort Crescente: ";
 bubbleSortC(membros, size);
    break;

case 2:
    cout << "Grupos organizados usando Bubble Sort Decrescente: ";
 bubbleSortD(membros, size);
 break;

 case 3:
    cout << "Grupos organizados usando Selection Sort Crescente: ";
 selectionSortC(membros, size);
 break;

case 4:
    cout << "Grupos organizados usando Selection Sort Decrescente: ";
 selectionSortD(membros, size);
 break;

default:
cout<<"Opção inválida"<<endl;
    break;
}

}

return 0;
}
   


