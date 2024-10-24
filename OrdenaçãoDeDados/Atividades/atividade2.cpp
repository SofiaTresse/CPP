#include <iostream>
using namespace std;

void insertionSort(float arr[], int size){
for (int i = 1; i< size; ++i) {
int key = arr[i];
int j = i - 1;

while(j >= 0 && arr[j] > key){
arr[j + 1] = arr[j];
j = j - 1;
}
arr[j + 1] = key;
}

}

int main(){
float arr[]= {12.5, 45.7, 23.1, 8.9, 33.2, 6.4, 44.6, 22.0, 15.3, 51.8, 16.7, 39.0, 47.2, 18.5, 12.3, 7.6, 3.2, 9.8, 2.5, 40.9};
int size = sizeof(arr) / sizeof(arr[0]);

cout<<"Série de rochas não organizadas: ";
for(int i = 0; i < size; ++i) {
cout<<arr[i]<<"";
}
cout<<endl;

insertionSort(arr, size);

cout<<"Peso das rochas(em quilogramas) em ordem crescente são: ";
for(int i = 0; i < size; ++i) {
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}
