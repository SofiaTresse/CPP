#include <iostream>
#include <string>

using namespace std;
int main(){

// variáveis
string nomeDinossauro;
string especie;

// Solicita ao usuário o nome do dinossauro
cout << "Digite o nome do dinossauro:";
getline(cin, nomeDinossauro);

// Verifica o nome do dinossauro e atribui uma espécie
 if (nomeDinossauro == "Tyrannosaurus Rex") {
    especie="Carnívoro";
} else if (nomeDinossauro == "Velociraptor") {
    especie="Carnívoro";
} else if (nomeDinossauro =="Triceratops") {
    especie=="Herbívoro";
} 
 else if (nomeDinossauro=="Brachiosaurus") {
    especie=="Herbívoro";
} 
else {
especie = "Espécie não identificada";
}
// Exibe a espécie correspondente na tela
cout << "A espécie do dinossauro " << nomeDinossauro <<" é: " << especie << endl;
return 0;
}