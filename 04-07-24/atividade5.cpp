#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> emprestimoLivros; // Fila para armazenar as tarefas

    // Adiciona algumas tarefas à lista inicialmente
    emprestimoLivros.push("Percy Jackson");
    emprestimoLivros.push("Harry Potter");
    emprestimoLivros.push("O povo do ar");

    // Exibe a lista de afazeres inicial
    cout << "Lista de emprestimos:\n";
    stack<string> listaCopia = emprestimoLivros; // Copia a fila para exibição sem alterar a original
    while (!listaCopia.empty())
    {
        cout << listaCopia.top() << endl; // Exibe cada tarefa da lista
        listaCopia.pop();                             // Remove a tarefa exibida da fila
    }

    // Marca algumas tarefas como concluídas
    if (!emprestimoLivros.empty())
    {
        cout << "\nLivro entregue: " << emprestimoLivros.top() << endl;
        emprestimoLivros.pop();
    }
    else
    {
        cout << "Lista de emprestimos vazia!\n";
    }

    if (!emprestimoLivros.empty())
    {
        cout << "Livro entregue: " << emprestimoLivros.top() << endl;
        emprestimoLivros.pop();
    }
    else
    {
        cout << "Lista de emprestimos vazia!\n";
    }

      emprestimoLivros.push("Biblioteca da Meia Noite");
    emprestimoLivros.push("Feitos de Sol");
    emprestimoLivros.push("Daisy Jones & The Six");

    // Exibe a lista de afazeres após as conclusões
    cout << "\nLista de livros emprestados apos algumas entregas::\n";
    listaCopia = emprestimoLivros; // Copia a fila novamente para exibição
    while (!listaCopia.empty())
    {
        cout << listaCopia.top() << endl;
        listaCopia.pop();
    }

    return 0;
}