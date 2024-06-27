#include <iostream>
using namespace std;
int main(){
char letra;
cout<<"Você está numa missão para destruir um anel mágico, porém precisa tomar uma decisão que mudará o destino do jogo!\nO seu grupo de hérois se depara com dois caminhos, cada uma deles haverá uma consequência.\nQual caminho você escolherá?"<<endl;
cout<<"\nDigite F para ir para a Floresta Encantada, ou escolha M para ir pelas Montanhas do Destino:"<<endl;
cin>>letra;

switch (letra){
case 'F':
cout<<"O seu grupo decidiu ir para a Floresta Encantada\nPorém encantado só tem o nome, vocês se deparam com um grande monstro!";
cout<<"\nA batalha travou o destino de sua vida, você e o seu grupo morreram";
break;
case 'M':
cout<<"O seu grupo decidiu ir para as Montanhas do Destino\nCaminho certo! Você e seu grupo encontraram o anel";
cout<<"\nA destruição do anel foi um sucesso, parabéns heróis!";
break;
default:
cout<<"Nenhuma das opções? Os hérois desistiram da batalham e se renderam ao cansaço.\nVocês morreram de fome";
break;


}

    return 0;
}
