#include <iostream> // Biblioteca para entrada e saída de dados em C++
using namespace std;

// Função para adicionar usuarios ao estoque
void adicionarUsuario(string usuarios[], string telefones[], int tamanho, string usuario, string telefone)
{
    usuarios[tamanho] = usuario;       // Adiciona o usuario ao final do array de usuariostring telefones[tamanho] = telefone; // Adiciona a telefone correspondente ao usuario
}

// Função para exibir o estoque atual
void exibirUsuario(string usuarios[], int tamanho, string telefones[], string usuario, string telefone)
{
    cout << "Usuario atual:\n";  // Exibe cabeçalho
   int i = 0;
   while(i < tamanho && usuarios[i] != usuario)
   {
i++;
   }
   if(i<tamanho){
cout<<"Contato:"<<usuario<<"\nTelefone:"<<telefone<<endl;

   }
}

int main()
{
    const int maxUsuarios = 100;       // Define o tamanho máximo do array de usuarios
    string usuarios[maxUsuarios]; // Array para armazenar os usuarios
    string telefones[maxUsuarios];      // Array para armazenarstring telefones disponíveis
    int tamanho = 0;                   // Variável para controlar o tamanho atual dos arrays

    // Adiciona usuarios inicialmente ao estoque
    adicionarUsuario(usuarios, telefones, tamanho, "Coringa", "111-11");
    tamanho++;
    adicionarUsuario (usuarios, telefones, tamanho, "Duas Caras", "999-99");
    tamanho++;
    adicionarUsuario (usuarios, telefones, tamanho, "Arlequina", "666-66");
    tamanho++;

    // Exibe o estoque inicial
    exibirUsuario(usuarios, tamanho,telefones,  "Coringa", "111-11");


    // Exibe o estoque após as vendas
    exibirUsuario(usuarios, tamanho,telefones, "Duas Caras", "999-99");

    return 0;
}