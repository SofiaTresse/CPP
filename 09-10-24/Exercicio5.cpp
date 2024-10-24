
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

//InsertionSort
void insertionSort(int arr[], int size){
for (int i = 1; i< size; ++i) {
int key = arr[i];
int j = i - 1;

while(j >= 0 && arr[j] < key){
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


void ImprimirVetor(int arr[], int size){
for(int i = 0; i< size; i++) {
cout<< arr[i]<<" ";

}
cout<<endl;
}


int main(){
    int escolha;
    int membros[] = {40, 25, 30, 55, 60, 35, 70, 45, 50, 65, 40, 60, 55, 30, 45, 35, 50, 65, 70, 75, 40, 55, 50, 60, 45, 70, 75, 60, 35, 30};
    int size= 30;

    cout<<"A plataforma de K-pop está organizando os grupos de K-pop por número de fãs no mundo"<<endl;
    cout<<endl;
    cout << "Número de fãs (em milhões)";
    for (int i = 0; i < size; ++i)
    {
        cout << membros[i] << " ";
    }

   cout<<endl;
   cout<<endl;

cout<<"É necessário organizar de forma que os grupos com mais fãs apareçam primeiro"<< endl;
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
    cout << "Grupos organizados usando Insertion Sort: ";
 insertionSort(membros, size);
 break;

default:
cout<<"Opção inválida"<<endl;
    break;
}

}

return 0;
}
   


