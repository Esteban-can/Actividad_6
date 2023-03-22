#include <iostream>
using namespace std;
main()
{
int fil=0,col=0,**pm_notas;
cout<<"Ingrese la cntidad de Estudinates: ";
cin>>fil;
cout<<"Ingrese la cantidad de Notaspor estuduante: ";
cin>>col;
pm_notas = new int *[fil];
for (int i=0;i<fil;i++)
{
	pm_notas[i] = new int [col];
}
for (int i=0;i<fil;i++)
{
	cout<<"_______________Estudiante___________"<<i<<endl;
	for (int ii=0;ii<col;ii++)
	{
	cout<<"Nota: "<<ii<<":";	
	cin>>*(*(pm_notas+i)+ii);
	}
	cout<<"_______________________________________________________"<<endl;
	
}
cout<<"---------Mostrar Notas ----------"<<endl;
for (int i=0;i<fil;i++)
{
	for (int ii=0;ii<fil;ii++)
	{
	cout <<"Nota: "<<ii<<":";
	cout <<*(*(pm_notas+i)+ii)<<endl;	
	}
	cout<<"_______________________________________________________"<<endl;
}

for (int i=0;i<fil;i++)
{
	delete[]pm_notas;
}

	system("pause");
}