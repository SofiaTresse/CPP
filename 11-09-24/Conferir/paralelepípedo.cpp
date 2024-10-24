#include <iostream>
 #include <string>

using namespace std;
// Função para solicitar as dimensões do paralelepipedo
void solicitarDimensoes (double &comprimento, double &Largura, double &altura)
{

cout << "Digite o comprimento do paralelepípedo em metros: "; 
cin >> comprimento;

cout << "Digite a Largura do paralelepipedo em metros: ";
 cin >> Largura;

cout << "Digite a altura do paralelepipedo em metros: ";
cin >> altura;
}
// Função para calcular o volume do paralelepipedo
double calcularVolume (double comprimento, double Largura, double altura)
{
return comprimento * Largura * altura;

}
int main()
{
// Variáveis para armazenar o nome e as dimensões do paralelepipedo string nomeParalelepipedo;
 string nomeParalelepipedo;
 double comprimento, largura, altura;

 
// Solicita ao usuário que insira o nome do paralelepipedo 
cout << "Digite o nome do paralelepípedo: ";
getline(cin, nomeParalelepipedo);

// Chama a função para solicitar as dimensões do paralelepípedo 
solicitarDimensoes (comprimento, largura, altura);
// Calcula o volume do paralelepipedo
double volume = calcularVolume (comprimento, largura, altura);

// Exibe o resultado
cout << "O volume aproximado do paralelepípedo "
<< nomeParalelepipedo << " é de " << volume << " metros cúbicos." << endl;

return 0;
}
