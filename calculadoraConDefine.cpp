#include <iostream>
#include <stdlib.h>


#define sum(a,b) a+b
#define res(a,b) a-b
#define mul(a,b) a*b
#define div(a,b) a/b


using namespace std;


int main()
{
    int res = 0;
    int x = 0;
    int y = 0;

	cout<<"1. Sumar"<<endl;
	cout<<"2. Restar"<<endl;
	cout<<"3. Multiplicar"<<endl;
	cout<<"4. Dividir"<<endl;
	cin>>res;
    system("clear");
	switch(res){
    case 1:
        cout<<"Primer elemento: ";
        cin>>x;
        cout<<"Segundo elemento: ";
        cin>>y;
        cout<<sum(x,y);
        break;
    case 2:
        cout<<"Primer elemento: ";
        cin>>x;
        cout<<"Segundo elemento: ";
        cin>>y;
        cout<<res(x,y);
        break;
    case 3:
        cout<<"Primer elemento: ";
        cin>>x;
        cout<<"Segundo elemento: ";
        cin>>y;
        cout<<mul(x,y);
        break;
    case 4:
        cout<<"Primer elemento: ";
        cin>>x;
        cout<<"Segundo elemento: ";
        cin>>y;
        cout<<div(x,y);
        break;
    default:
        main();
	}
	cin.get();
}
