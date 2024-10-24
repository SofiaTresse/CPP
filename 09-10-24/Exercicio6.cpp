
#include <iostream>
using namespace std;



//BubbleSort
void bubbleSort (float arr[], int size) {
    for (int i = 0; i < size - 1; ++i)
    { for (int j = 0; j < size - i - 1; ++j)
    {
        if (arr[j] < arr[j + 1])
        {
            float temp = arr [j];
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
void insertionSort(float arr[], int size){
for (int i = 1; i< size; ++i) {
float key = arr[i];
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
    float membros[] = {89.0651, 95.4805, 94.0230, 86.3919, 96.7627, 83.6630, 96.2819, 90.8391, 81.4960, 83.8841, 82.5377, 99.6183, 97.6745, 97.8607, 87.5581, 85.3594, 92.1513, 83.8347, 95.3876, 83.0570, 87.5763, 89.0502, 83.3633, 80.0361, 83.0502, 81.5310, 82.7322, 84.4340, 84.8335, 82.7916, 88.1666, 95.5569, 82.0760, 87.3993, 88.2708, 84.4348, 85.2470, 99.4255, 85.2060, 88.1903, 80.8430, 94.1189, 94.4674, 83.0433, 92.6951, 97.2446, 97.9635, 96.4502, 94.4477, 86.4615};
    int size= 30;

    cout<<"A crítica especializada está organizando os álbuns mais populares de K-pop por pontuação"<<endl;
    cout<<endl;
    cout << "Pontuação de Crítica (de 0 a 100):";
    for (int i = 0; i < size; ++i)
    {
        cout << membros[i] << " ";
    }

   cout<<endl;
   cout<<endl;

cout<<"É necessário organizar de forma que os álbuns com maiores pontuações devem aparecer primeiro"<< endl;
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
   


