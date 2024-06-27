#include <iostream>
using namespace std;
int main(){
char letra;
cout<<"Você está em um mundo pós apocalítipco, há zumbis atrás de você e há uma decisão a tomar"<<endl;
cout<<"\nEscolha P para abrir uma porta mistériosa ou T para adentrar um túrnel escuro "<<endl;
cin>>letra;
 if(letra == 'P'){
    cout<<"Atrás da porta havia mais zumbis a sua espera, voce foi mordido! a vida de comer cérebros te espera!\nVocê virou um zumbi! ";
 }
 else if(letra == 'T'){
    cout<<"Você entra rápidamente no túnel, e com dificuldade se esgueira por ele, evitando os zumbis.\nVocê avista uma luz no fim do turnel e consegue finalmente escapar, deixando os zumbis presos.\nParabéns!Você sobreviveu! ";

 }
 else{
cout<<"Você demora muito para tomar sua decisão e é devorado por zumbis! Precisa usar mais o seu cérebro na próxima vez em vez de dar como fastfood para os zumbis!";

 }

    return 0;
}
