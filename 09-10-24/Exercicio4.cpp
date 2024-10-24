
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
    int membros[] = {120, 85, 150, 100, 90, 95, 130, 75, 140, 100, 120, 110, 115, 95, 135, 80, 100, 130, 140, 150, 120, 115, 105, 125, 90, 110, 135, 100, 120, 145};
    int size= 30;

    cout<<"A plataforma de streaming está organizando os vídeos mais populares de um grupo de K-pop pelo número de visualizações"<<endl;
    cout<<endl;
    cout << "Número de visualizações (em milhões):";
    for (int i = 0; i < size; ++i)
    {
        cout << membros[i] << " ";
    }

   cout<<endl;
   cout<<endl;

cout<<"É necessário organizar os vídeos mais populares pelo número de visualizações."<< endl;
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
   


