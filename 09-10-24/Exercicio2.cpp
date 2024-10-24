
#include <iostream>
using namespace std;



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


void ImprimirVetor(int arr[], int size){
for(int i = 0; i< size; i++) {
cout<< arr[i]<<" ";

}
cout<<endl;
}


int main(){
    int escolha;
    int membros[] = {500, 600, 400, 700, 750, 800, 650, 550, 620, 680, 710, 690, 800, 640, 580, 660, 730, 750, 540, 710, 700, 690, 630, 670, 720, 680, 690, 650, 710, 660};
    int size= 30;

    cout<<"A produtora de K-pop está organizando os maiores hits de um grupo de K-pop com base no número de vendas."<<endl;
    cout<<endl;
    cout << "Número de vendas (em mil unidades):";
    for (int i = 0; i < size; ++i)
    {
        cout << membros[i] << " ";
    }

   cout<<endl;
   cout<<endl;

cout<<"É necessário organizar as músicas pelo número de vendas"<< endl;
cout<<"Para isso é possível utilizar duas maneiras de organização"<< endl;
cout<<"1.Selection Sort:"<<endl;
 cout<<"2.Insertion Sort"<<endl;
cout<<"Digite sua escolha: "<<endl;
cin>>escolha;

switch (escolha){
{
case 2:    
cout << "Músicas organizados usando Insertion Sort ";
 insertionSort(membros, size);
    break;

case 1:
    cout << "Músicas organizados usando Selection Sort: ";
 selectionSort(membros, size);
 break;

default:
cout<<"Opção inválida"<<endl;
    break;
}

}

return 0;
}
   


