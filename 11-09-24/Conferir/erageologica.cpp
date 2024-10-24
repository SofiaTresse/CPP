#include <iostream>
 #include <string>
using namespace std;
int main() {
// Variáveis para armazenar o nome do dinossauro e sua data de extinção

string nomeDinossauro;
int dataExtincao; // Alterado para double para Lidar com números decimai
// Solicita ao usuário o nome do dinossauro
cout << "Digite o nome do dinossauro:";
getline(cin, nomeDinossauro);
// Solicita ao usuário a data de extinção do dinossauro em milhões de an 
cout << "Digite a data de extinção do dinossauro (em milhões de anos atrás";
cin >> dataExtincao;
// Variável para armazenar a era geológica do dinossauro
string eraGeologica;
// Determina a era geológica do dinossauro com base na data de extinção
if (dataExtincao <= 66 && dataExtincao <= 145) {
    cout<<"O dinossauro viveu na era Mesozoica."<< endl;
}
else if (dataExtincao >= 145 && dataExtincao <=251) {
     cout<<"O dinossauro viveu na era Paleozoica."<< endl;
}
else if (dataExtincao <=66) {
     cout<<"O dinossauro viveu na era Cenozoica."<< endl;
} else{
    cout<<"O dinossauro viveu na era Pré-Cambriano"
}
return =0
}

