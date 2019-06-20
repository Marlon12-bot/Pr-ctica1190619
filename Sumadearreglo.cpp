#include <iostream>>
using namespace std;
int suma=0;
int numeros[7];
class Arreglo{
public :	
int Arreglos(){
for(int i=0;i<7;i++){ 
 cout<<"Digite un numero: ";
 cin>>numeros[i];
 suma += numeros[i];
}
}
void Resultado(){
 cout<<suma;
}
};
int main(){
	Arreglo Marlin;
	Marlin.Arreglos();
	Marlin.Resultado();
}
