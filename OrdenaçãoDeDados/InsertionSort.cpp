#include <iostream>
using namespace std;

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

}

int main(){
int arr[]= {5, 2, 9, 1, 5};
int size = sizeof(arr) / sizeof(arr[0]);

cout<<"Array original: ";
for(int i = 0; i < size; ++i) {
cout<<arr[i]<<"";
}
cout<<endl;

insertionSort(arr, size);

cout<<"Array ordenado usando Insertion Sort: ";
for(int i = 0; i < size; ++i) {
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}
