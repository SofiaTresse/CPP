
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
    int membros[] = {80, 75, 90, 85, 70, 95, 60, 80, 85, 90, 70, 75, 80, 95, 60, 85, 90, 70, 80, 75, 95, 85, 70, 80, 75, 95, 70, 90, 60, 85};
    int size= 30;

    cout<<"A agência de K-pop está organizando os membros do grupo pelo nível de habilidades de dança"<<endl;
    cout<<endl;
    cout << "Nível de habilidade de dança (em pontos):";
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
cout<<"4.Selection Sort-decrescente"<<endl;
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
   


