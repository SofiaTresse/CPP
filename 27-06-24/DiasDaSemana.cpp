#include <iostream>
using namespace std;

int main(){
int dia;
cout<<"Digite o número do dia da semana de 1 a 7:";
cin>>dia;

switch(dia){
case 1:
cout<<"Domingo"<<endl;
break;
case 2:
cout<<"Segunda-feira"<<endl;
break;
case 3:
cout<<"Terça-Feira"<<endl;
break;
case 4:
cout<<"Quarta-Feira"<<endl;
break;
case 5:
cout<<"Quinta-Feira"<<endl;
break;
case 6:
cout<<"Sexta-Feira"<<endl;
break;
case 7:
cout<<"Sábado"<<endl;
break;
default:
cout<<"Dia inválido"<<endl;
break;
}
return 0;
}
