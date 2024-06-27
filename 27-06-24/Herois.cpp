#include <iostream>
using namespace std;

int main(){
char letra;
char habilidades;
 cout<<"Digite qual héroi você quer selecionar para te acompanhar na sua batalha!\nM para Mulher Maravilha, B para Batman e S para SuperMan: "<<endl;
 cin>>letra;
 
 switch(letra){
 case 'M':
 cout<<"Você escolheu a Mulher Maravilha!"<<endl;
 break;
 case 'B':
 cout<<"Você escolheu o Batman!"<<endl;
 break;
 case 'S':
 cout<<"Você escolheu o SuperMan!"<<endl;
 break;
 default:
 cout<<"Não há esse super herói😟"<<endl;
 }
 cout<<"\nGostaria de saber suas habilidades? Escolha S ou N."<<endl;
 cin>>habilidades;
   if(habilidades =='S'){
   
   switch(letra){
   case 'M':
       cout<<"Laço da Verdade."<<endl;
       break;
    case 'B':
     cout<<"Ser rico"<<endl;
     break;
     case 'S':
     cout<<"Voar"<<endl;
     break;
     
   }
   cout<<"\nParábens pela sua escolha. Boa sorte na sua batalha!"<<endl;
   }
   else{
      cout<<"Você decidiu não saber suas hablidades, sua batalha será uma surpresa, boa sorte!"<<endl;
   }
    return 0;
   }