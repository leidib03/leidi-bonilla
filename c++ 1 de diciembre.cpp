#include<iostream>
using namespace std;
main()
{
int a,b,c; 
cout<<endl<<endl<< "      ordenamiento de numeros ";	
cout<<endl<<"      ingrese los tres numeros: ";
cout<<endl<<endl<<" ingrese el primer numero y oprima la tecla enter";
cout<<endl<<endl<<"      xxxxxxxxxxxxxxxxxxxxxxxxx";
cout<<endl<<"                                      ";
cin>>a;
cout<<"                   xxxxxxxxxxxxxxxxxxxxxxxxx";
cout<<endl<<endl<<endl<<"   ingrese el segundo numero y oprima la tecla enter";
cout<<endl<<endl<<"     xxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
cout<<endl<<"                                        ";
cin>>b;
cout<<"                xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
cout<<endl<<endl<<endl<<" ingrese el tercer numero y oprima la tecla enter";
cout<<endl<<endl<<"     xxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
cout<<endl<<"                                        ";
cin>>c;
cout<<"         xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
cout<<endl<<endl<<endl<<" el primer numero ingresado fue: ";
cout<<endl<<" el segundo numero ingresado fue "<<b;
cout<<endl<<"   el tercer numero ingresado fue  "<<c<<endl;
if(a==3)
{
	cout<<"    tenga cuidado con ese numero ";
	
}
	else
	{
	}
	cout<<endl;
	if((a>b) && (a>c) && (c<b))
	{
	

	cout<<" el numero mayor es"<<a<< "el numero medio es "<<b<<" el numero menor es"<<c<<endl;
}
else
	if((a<b) && (a<c) && (c>b))
	{
			cout<<" el numero mayor es"<<c<< "el numero medio es "<<b<<" el numero menor es"<<a<<endl;
	}
else 
	if((a<b) && (b>c) && (a<c))
	{
			cout<<" el numero mayor es"<<b<< "el numero medio es "<<c<<" el numero menor es"<<a<<endl;
	}
else
	if((a>b) && (b<c) && (a>c))
	{
			cout<<" el numero mayor es"<<a<< "el numero medio es "<<c<<" el numero menor es"<<b<<endl;
	}
	else 
	if((a<b) && (b>c) && (a>c))
	{
		cout<<" el numero mayor es"<<b<< "el numero medio es "<<a<<" el numero menor es"<<c<<endl;
	}
	else
	if((a>b) && (b<c) && (a<c))
	{
		cout<<" el numero mayor es"<<b<< "el numero medio es "<<a<<" el numero menor es"<<c<<endl;
	}
	
	else 
	{
		cout<<"   no  lo he pensado ";
		
	}
cout<<endl<<endl<<endl;





}
	
	
	
	
	
	

