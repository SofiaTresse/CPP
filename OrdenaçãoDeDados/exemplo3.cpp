#include <iostream>

void merde(int arr[], int left, int middle, int right){
int leftSize = middle - left + 1, rightSize = right - middle;
int leftArr[leftSize], rightArr[rightSize];

for(int i = 0; i < leftSize; i++) leftArr[i] = arr[left + i];
for (int i = 0; i < rightSize; i++) rightArr[i] =arr[middle + 1 + i];

int i = 0, j = 0, k = left;
while (i<leftSize && j<rightSize) {
if (leftArr[i] <= rightArr[j]) arr[k++] = leftArr[i++];
else arr[k++] = rightArr[j++]; 
}
while(i < leftSize) arr[k++] = leftArr[i++];
while (j<rightSize) arr[k++] = rightArr[j++];     /* code */
}

void mergeSort(int arr[], int left, int right) {
    if(left<right){
int middle = left+ (right - left) / 2;
mergeSort(arr, left, middle);
mergeSort(arr, middle + 1, right);
merge(arr, left, middle, right);
    }    /* code */
}

int main() {
int arr[] = {5, 2, 9, 1, 5};
int size = sizeof(arr) / sizeof(arr[0]);

cout<<"Original: ";
for(int i = 0; i <size; ++i) cout<<arr[i]<<" ";
cout<<"\nSorted: ";
 
 mergeSort(arr, 0, size - 1);

 for(int i = 0; i< size; ++i) cout<<arr[i]<<" ";
 cout<<endl;

return 0;
}