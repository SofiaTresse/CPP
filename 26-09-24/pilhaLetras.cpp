#include <iostream>
#include <stack>
using namespace std;

int main () 
{
stack<char> pilhaLetras;

pilhaLetras.push('a');
pilhaLetras.push('b');
pilhaLetras.push('c');
pilhaLetras.push('d');

cout<< "Topo da pilha:"<< pilhaLetras.top()<<endl;

while(!pilhaLetras.empty())
{
cout<<"Desempilhando:"<<pilhaLetras.top() << endl;
pilhaLetras.pop();
}
pilhaLetras.push('a');
pilhaLetras.push('b');
pilhaLetras.push('c');
pilhaLetras.push('d');

pilhaLetras.pop();
pilhaLetras.pop();
pilhaLetras.push('e');

cout<<"Topo da pilha:"<<pilhaLetras.top() <<endl;

while(!pilhaLetras.empty())
{
cout<<"Desempilhando:" <<pilhaLetras.top()<<endl;
pilhaLetras.pop();
}
return 0;


}