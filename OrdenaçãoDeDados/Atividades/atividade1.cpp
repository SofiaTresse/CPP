#include <iostream>
using namespace std;

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
   
}

int main () {
    int arr[] = { 175, 165, 185, 190, 175, 160, 170, 180, 172, 178, 168, 176, 182, 174, 169, 185, 168, 172, 183, 177};
    int size = sizeof(arr) / sizeof(arr [0]);

    bubbleSort(arr, size);

    cout << "As alturas dos legionários em ordem crescente são: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
   
}