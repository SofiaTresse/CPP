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
float arr[]= {24, 49, 73, 48, 59, 19, 62, 72, 43, 2, 48, 85, 35, 49, 2, 7, 58, 74, 56, 6};
int size = sizeof(arr) / sizeof(arr[0]);

cout<<"Experiencia de combate das tropas: ";
for(int i = 0; i < size; ++i) {
cout<<arr[i]<<" ";
}
cout<<endl;

insertionSort(arr, size);

cout<<"Experiencia de combate das tropas em ordem crescente: ";
for(int i = 0; i < size; ++i) {
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}
