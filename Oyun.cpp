#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int a1;
int a2;
int main(){
	setlocale(LC_ALL,"Turkish");
	srand(time(0));
	a1=rand()%10;
	a2=rand()%10;
	int secenek;
	cout<<"Oyunumuza Ho�geldiniz..(Say�lar�m�z 1 ile 10 aras�ndad�r)"<<endl;
	for(int i=0;i<10;i++){
	cout<<"Say�m�z: "<<a1<<endl<<"Bir sonraki say�m�z  bu say�dan b�y�kse:1 k���kse:2 e�itse de :3 e bas�n�z..";
	cin>>secenek;
	switch(secenek){
		case 1:
			if(a2>a1){
				 cout<<"Do�ru bildiniz.."<<endl<<"Say�m�z:"<<a2<<" ��kt�."<<endl;
				 cout<<"\n";
			}
			else{
				cout<<"Yanl�� bildiniz!!!"<<endl<<"Say�m�z:"<<a2<<" ��kt�."<<"Elendiniz!!"<<endl;
				cout<<"Puan�n�z:"<<i;
				exit(0);
				cout<<"\n";
			}
			break;
			
		case 2:
			if(a2<a1){
				cout<<"Do�ru bildiniz.."<<endl<<"Say�m�z:"<<a2<<" ��kt�."<<endl;
				cout<<"\n";
			}
			else{
				cout<<"Yanl�� bildiniz!!!"<<endl<<"Say�m�z:"<<a2<<" ��kt�."<<"Elendiniz!!"<<endl;
				cout<<"Puan�n�z:"<<i;
				exit(0);
				cout<<"\n";
			}
			break;
			
		case 3:
			if(a2=a1){
				cout<<"Do�ru bildiniz.."<<endl<<"Say�m�z:"<<a2<<" ��kt�."<<endl;
				cout<<"\n";
			}
			else{
				cout<<"Yanl�� bildiniz!!!"<<endl<<"Say�m�z:"<<a2<<" ��kt�."<<"Elendiniz!!"<<endl;
				cout<<"Puan�n�z:"<<i;
				exit(0);
				cout<<"\n";
			}
			break;
	}
	a1=a2;
	a2=rand()%10;
}
return 0;}
