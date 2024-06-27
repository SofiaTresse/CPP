#include <iostream>
using namespace std;

int main (){

float nota;
cout<<"Digite sua nota:"<<endl;
cin>>nota;

if(nota == 100){
    cout<<"Nota máxima!😀";
}
else if (nota<=99&&nota>=60){
    cout<<"Você passou!🙂";
}
else if(nota<=59&&nota>=40){
cout<<"Você está de recuperação😟";
}
else{
    cout<<"Você reprovou😰";
}
return 0;
}