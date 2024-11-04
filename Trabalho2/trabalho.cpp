#include <iostream>
using namespace std;

// Função BubbleSort: usada para ordenar listas entre 21 e 30 elementos
void bubbleSort (float arr[], int size) {
    // Loop para iterar pelo array
    for (int i = 0; i < size - 1; ++i) { 
        // Comparação e troca dos elementos adjacentes
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }   
        }   
    }
    
    // Exibe o array ordenado
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Função InsertionSort: usada para ordenar listas com até 20 elementos
void insertionSort(float arr[], int size) {
    // Loop para inserir cada elemento na posição correta
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Move elementos maiores que a chave uma posição para frente
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    
    // Exibe o array ordenado
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Função SelectionSort: usada para ordenar listas com mais de 30 elementos
void selectionSort(float arr[], int size) {
    // Loop para selecionar o menor elemento e colocá-lo na posição correta
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;

        // Busca o menor elemento restante
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Troca o menor elemento com o elemento atual
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // Exibe o array ordenado
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Constante para o tamanho máximo do array
    const int MAX_TAMANHO = 100;
    float vetor[MAX_TAMANHO]; // Declaração do array de elementos
    cout << "Selecione o número de elementos que há em seu conjunto de dados" << endl;

    // Recebe o número de elementos do usuário
    int tamanho;
    cin >> tamanho;

 // Loop para entrada dos valores do array
    cout << "Agora você irá colocar os elementos desse conjunto" << endl;
    for (int i = 0; i < tamanho; ++i) {
        
        cin >> vetor[i];
    }

    // Exibe o array original
    cout << "Esse é o seu conjunto sem estar organizado por um dos métodos: " << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    // Seleciona o algoritmo de ordenação com base no número de elementos
    if (tamanho <= 20) {
        cout << "Conjunto de elementos organizados usando InsertionSort: ";
        insertionSort(vetor, tamanho);
    } else if (tamanho > 20 && tamanho <= 30) {
        cout << "Conjunto de elementos organizados usando Bubble Sort: ";
        bubbleSort(vetor, tamanho);
    } else {
        cout << "Conjunto de elementos organizados usando Selection Sort: ";
        selectionSort(vetor, tamanho);
    }

    return 0;
}
