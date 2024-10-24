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
    int arr[] = {15, 99, 50, 60, 71, 58, 63, 99, 58, 86, 44, 100, 63, 38, 48, 7, 35, 59, 52, 7};
    int size = sizeof(arr) / sizeof(arr [0]);

    bubbleSort(arr, size);

    cout << "Quantidades de mercadorias nos estoques em ordem crescente:";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
   
}