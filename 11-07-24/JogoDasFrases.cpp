#include <iostream>
using namespace std;

int main()
{

int tamanhoMaximoVetor = 100; //número de opçãoes que o valor pode ter, ex: do 0 ao 99
int corDaCamisa, diaDoAniversario, mesDoAniversario;
string resultadoCorDaCamisa, resultadoDiaDoAniversario, resultadoMesDoAniversario;

string corCamisa[tamanhoMaximoVetor] = {
"Preto",
"Branco",
"Azul",
"Verde",
"Roxo",
"Vermelho",
"Amarelo",
"Laranja",
"Rosa",
"Vinho",
"Sem camisa"};

string corVetor[tamanhoMaximoVetor] = {
"O Billy Bruto",
"O Hughie Campbell",
"O Capitão Pátria",
"A Luz-Estrela",
"A Rainha Maeve",
"O Francês",
"O Leitinho da Mamãe",
"O Profundo",
"O Black Noir",
"Trem-Bala",
"Kimiko"};

string diaVetor[tamanhoMaximoVetor]={
"Traje Ninja de Black Noir",
"Uniforme do Homelander",
"Uniforme da Starlight",
"Traje do A-Train",
"Uniforme da Queen Maeve",
"Traje Transparente do Translucent",
"Uniforme do The Deep",
"Traje do Stormfront",
"Uniforme do Lamplighter",
"Traje do Billy Butcher",
"Uniforme da Kimiko",
"Traje do Hughie",
"Uniforme do Frenchie",
"Traje do Mother's Milk",
"Uniforme da Becca Butcher",
"Traje da Ashley Barrett",
"Uniforme da Elena",
"Traje da Cindy",
"Uniforme da Victoria Neuman",
"Traje do Stan Edgar",
"Uniforme do Ezekiel",
"Traje do Gecko",
"Uniforme do Mesmer",
"Traje de Black Noir sem Máscara",
"Uniforme do Homelander sem Capa",
"Traje da Starlight sem Máscara",
"Uniforme do A-Train sem Máscara",
"Traje da Queen Maeve sem Armadura",
"Uniforme da The Female",
"Traje do Jonah Vogelbaum",
"Uniforme da Grace Mallory"};

string mesVetor[tamanhoMaximoVetor] = {
 "Lamplighter",
"Becca Butcher",
"Ashley Barrett",
"Elena",
"Cindy",
"Victoria Neuman",
"Stan Edgar",
"Ezekiel",
"Gecko",
"Mesmer",
"Jonah Vogelbaum",
"Grace Mallory"};

cout << "Bem vindo(a) ao criador de frases para aprendizado de loops e vetores!!" << endl;

    cout << "Escolha uma cor de camisa da lista abaixo:" << endl;
    for (int i = 0; i < 11; i++)
    {
        cout << i + 1 << ". " << corCamisa[i] << endl;
    }

    cout << "Digite o número correspondente à cor de sua camisa: ";
    cin >> corDaCamisa;

    if (corDaCamisa >= 1 && corDaCamisa <= 11)
    {
        resultadoCorDaCamisa = corVetor[corDaCamisa - 1];
    }
    else
    {
        cout << "Número inválido para a cor da camisa. Por favor, escolha um número entre 1 e 20." << endl;
        return 1;
    }

    cout << "Digite o dia de seu aniversário (1-31): ";
    cin >> diaDoAniversario;

    if (diaDoAniversario >= 1 && diaDoAniversario <= 31)
    {
        resultadoDiaDoAniversario = diaVetor[diaDoAniversario - 1];
    }
    else
    {
        cout << "Número inválido para o dia do aniversário. Por favor, escolha um número entre 1 e 30." << endl;
        return 1;
    }

    cout << "Digite o mês de seu aniversário (1-12): ";
    cin >> mesDoAniversario;

    if (mesDoAniversario >= 1 && mesDoAniversario <= 12)
    {
        resultadoMesDoAniversario = mesVetor[mesDoAniversario - 1];
    }
    else
    {
        cout << "Número inválido para o mês do aniversário. Por favor, escolha um número entre 1 e 12." << endl;
        return 1;
    }

    cout << "Sua frase é:" << endl;
    cout << "Um dia encontrei " << resultadoCorDaCamisa << " vestindo " << resultadoDiaDoAniversario << " enquanto " << resultadoMesDoAniversario << " Injetava Composto V" << endl;

    return 0;
}

