#include <iostream>
using namespace std;

int main(){
char lado;
char alternativa;

cout<<"Nesse castelo há 5 andares com labirintos, quanto mais baixo, maior o seu nível de dificuldade.\nVocê começara no 5º andar, e se conseguir achar a saída, descerá a escada até o próximo nível. Pronto? ";

cout<<"\nVocê deverá escolher entre dois lados Esquerda E ou Direita D ";
cout<<"\nPara qual lado deseja ir?: ";
cin>>lado;

switch(lado){
case 'E':
cout<<"Muito bem!Você virou para a direita";
break;
case 'D':
cout<<"Você trombou uma parede";
break;
}
if(lado == D){
cout<<"Deseja voltar? S ou N";
cin>>alternativa
}
return 0;
}