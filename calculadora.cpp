#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int sum(){
	int sumandos = 0;
	int suma[] = {};
	int resultado = 0;
	cout<<"Cuantos sumandos? " << endl;
	cin>>sumandos;
	if (sumandos < 2 || cin.fail()){
        sum();
	}else{
        for (int i = 0; i < sumandos; i++){
            cout<<"Introduce sumando " << i+1 << endl;
            cin>>suma[i];
            if (cin.fail() && cin.rdstate()){
                cout<<"Introduce un numero!" << endl;
                break;
            }else{
            resultado += suma[i];
            }
        }
        cout<<"Resultado: "<<resultado;
	}
}
/*

int resta(int x, int y){
	int result = x - y;
	return result;
}

int mult(int x, int y){
	int result = x * y;
	return result;
}

int div(int x, int y){
	int result = x / y;
	return result;
}

int pot(int x, int y){
	int result = pow(x, y);
	return result;
}

int raiz(int x, int y){
	int result = sqrt(x, y);
	return result;
}
*/
int main()
{
    string res;
	cout<<"Escribe \"suma\" para sumar"<<endl;
	cin>>res;
	if (res == "suma"){
        sum();
	}else{
        main();
	}
	return 0;
}
