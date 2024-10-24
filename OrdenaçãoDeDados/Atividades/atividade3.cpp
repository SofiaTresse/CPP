#include <iostream>
using namespace std;

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
} 

int main(){
int arr[] = {82, 17, 62, 21, 17, 24, 79, 27, 9, 29, 41, 19, 80, 61, 45, 16, 2, 38, 34, 29};
int size = sizeof(arr)/ sizeof(arr[0]);

cout<<"Sacos de alimentos: ";
for(int i = 0; i < size; ++i) {
cout<< arr[i]<< " ";
}
cout<<endl;

selectionSort(arr, size);

cout<<"Sacos de alimentos organizados em ordem crescente: ";
for(int i = 0; i <size; ++ i){
cout<<arr[i]<<" ";
}
cout<<endl;
}