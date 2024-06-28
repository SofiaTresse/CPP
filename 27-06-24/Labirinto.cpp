#include <iostream>
using namespace std;

int main() {
    // Variáveis
    char lado;
    char alternativa;

    // Introdução
    cout << "Nesse castelo há 5 andares com labirintos, quanto mais baixo, maior o seu nível de dificuldade.\n";
    cout << "Você começará no 5º andar, e se conseguir achar a saída, descerá a escada até o próximo nível. Pronto?\n";
    cout << "\nVocê deverá escolher entre dois lados: E para Esquerda ou D para Direita.";

//5°Andar

    do {
        cout << "\nPara qual lado deseja ir?: ";
        cin >> lado;


        // Opções 
        switch(lado) {
            case 'E':
                cout << "\nMuito bem! Você virou para a esquerda e achou a escada descendo para o próximo nível!\n";
                break;

            case 'D':
                cout << "\nVocê trombou em uma parede.";
                cout << "\nVocê deseja voltar? S ou N: ";
                cin >> alternativa;

                if (alternativa == 'S') {
                    cout << "Você voltou à posição anterior.";
                    // Continua o loop para permitir nova escolha
                } else if (alternativa == 'N') {
                    cout << "Você desistiu e esperou a morte vir te buscar.\nVocê morreu de fome." << endl;
    
                }
                break;

            default:
                cout << "\nVocê não foi para nenhuma das opções e esperou a morte";
                break;
        }
    } while (lado =='D');
    
    //4°Andar
    
    cout << "\nVocê está agora no 4° andar.\n";
 do {
        cout << "\nPara qual lado deseja ir?: ";
        cin >> lado;


        // Opções 
        switch(lado) {
            case 'D':
                cout << "\nMuito bem! Você virou para a direita e achou a escada descendo para o próximo nível!\n";
                
      
                break;

            case 'E':
                cout << "\nVocê trombou em uma parede.";
                cout << "\nVocê deseja voltar? S ou N: ";
                cin >> alternativa;
              

                if (alternativa == 'S') {
                    cout << "Você voltou à posição anterior.";
                    // Continua o loop para permitir nova escolha
                } else if (alternativa == 'N') {
                    cout << "Você desistiu e esperou a morte vir te buscar.\nVocê morreu de fome." << endl;
          
                }
                break;

            default:
                cout << "\nVocê não foi para nenhuma das opções e esperou a morte";
                break;
        }
    } while (lado == 'E');
    
    //3°Andar
    
     cout << "\nVocê está agora no 3° andar.\n";
 do {
        cout << "\nPara qual lado deseja ir?: ";
        cin >> lado;


        // Opções 
        switch(lado) {
            case 'D':
                cout << "\nMuito bem! Você virou para a direita e achou a escada descendo para o próximo nível!\n";
                
      
                break;

            case 'E':
                cout << "\nVocê trombou em uma parede.";
                cout << "\nVocê deseja voltar? S ou N: ";
                cin >> alternativa;
              

                if (alternativa == 'S') {
                    cout << "Você voltou à posição anterior.";
                    // Continua o loop para permitir nova escolha
                } else if (alternativa == 'N') {
                    cout << "Você desistiu e esperou a morte vir te buscar.\nVocê morreu de fome." << endl;
          
                }
                break;

            default:
                cout << "\nVocê não foi para nenhuma das opções e esperou a morte";
                break;
        }
    } while (lado == 'E');
    
     //2°Andar
    
     cout << "\nVocê está agora no 2° andar.\n";
 do {
        cout << "\nPara qual lado deseja ir?: ";
        cin >> lado;


        // Opções 
        switch(lado) {
            case 'E':
                cout << "\nMuito bem! Você virou para a esquerda e achou a escada descendo para o próximo nível!\n";
                
      
                break;

            case 'D':
                cout << "\nVocê trombou em uma parede.";
                cout << "\nVocê deseja voltar? S ou N: ";
                cin >> alternativa;
              

                if (alternativa == 'S') {
                    cout << "Você voltou à posição anterior.";
                    // Continua o loop para permitir nova escolha
                } else if (alternativa == 'N') {
                    cout << "Você desistiu e esperou a morte vir te buscar.\nVocê morreu de fome." << endl;
          
                }
                break;

            default:
                cout << "\nVocê não foi para nenhuma das opções e esperou a morte";
                break;
        }
    } while (lado == 'D');
     
     
     //1°Andar
    
     cout << "\nVocê está agora no 1° andar.\n";
 do {
        cout << "\nPara qual lado deseja ir?: ";
        cin >> lado;


        // Opções Parte 1
        switch(lado) {
            case 'E':
                cout << "\nMuito bem! Você virou para a esquerda e achou outro caminho!\n";
                
      
                break;

            case 'D':
                cout << "\nVocê trombou em uma parede.";
                cout << "\nVocê deseja voltar? S ou N: ";
                cin >> alternativa;
              

                if (alternativa == 'S') {
                    cout << "Você voltou à posição anterior.";
                    // Continua o loop para permitir nova escolha
                } else if (alternativa == 'N') {
                    cout << "Você desistiu e esperou a morte vir te buscar.\nVocê morreu de fome." << endl;
          
                }
                break;

            default:
                cout << "\nVocê não foi para nenhuma das opções e esperou a morte";
                break;
        }
    } while (lado == 'E');

    return 0;
}
