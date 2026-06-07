#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float n;
	float f,s;
	int C,C1,C2,A[100];
	C2=0;
	cout<<"Enter the number:";
	cin>>n;
	cout<<"you want integer Enetr 1:";
	cin>>C1;
	if(C1==1)
	{
	cout<<"Are want f2-f1 if yes enetr 1:";
	cin>>C;
}
	if(C==1 && C1==1)
	{
	for(int i=0;i<=100;i++)
	A[i]=0;
		cout<<"counter f2-f1 if yes enter 1:";
	cin>>C2;	
	}
	s=0;
	if(n>1)
	{
	for(int k=1;k<=n;k++)
	{
	f=(99.0*k+n-100.0)/(n-1);
	if(C1==1)
	{
f=int(f);
}
	cout<<"f("<<k<<")="<<f;
		if(C==1)
	{
	s=f-s;
	cout<<"\t\t"<<"f("<<k<<")-f("<<k-1<<")="<<s<<endl;
	if(C2==1)
	A[int(s)]=A[int(s)]+1;
	s=f;	
	}
	else
	{
		cout<<endl;
	}
	};		
}
	if(C2==1)
	for(C=0;C<=100;C++)
	{
		cout<<"show number "<<C<<" is "<<A[C]<<endl; 
	}
}
