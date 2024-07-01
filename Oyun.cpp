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
	cout<<"Oyunumuza Hoþgeldiniz..(Sayýlarýmýz 1 ile 10 arasýndadýr)"<<endl;
	for(int i=0;i<10;i++){
	cout<<"Sayýmýz: "<<a1<<endl<<"Bir sonraki sayýmýz  bu sayýdan büyükse:1 küçükse:2 eþitse de :3 e basýnýz..";
	cin>>secenek;
	switch(secenek){
		case 1:
			if(a2>a1){
				 cout<<"Doðru bildiniz.."<<endl<<"Sayýmýz:"<<a2<<" çýktý."<<endl;
				 cout<<"\n";
			}
			else{
				cout<<"Yanlýþ bildiniz!!!"<<endl<<"Sayýmýz:"<<a2<<" çýktý."<<"Elendiniz!!"<<endl;
				cout<<"Puanýnýz:"<<i;
				exit(0);
				cout<<"\n";
			}
			break;
			
		case 2:
			if(a2<a1){
				cout<<"Doðru bildiniz.."<<endl<<"Sayýmýz:"<<a2<<" çýktý."<<endl;
				cout<<"\n";
			}
			else{
				cout<<"Yanlýþ bildiniz!!!"<<endl<<"Sayýmýz:"<<a2<<" çýktý."<<"Elendiniz!!"<<endl;
				cout<<"Puanýnýz:"<<i;
				exit(0);
				cout<<"\n";
			}
			break;
			
		case 3:
			if(a2=a1){
				cout<<"Doðru bildiniz.."<<endl<<"Sayýmýz:"<<a2<<" çýktý."<<endl;
				cout<<"\n";
			}
			else{
				cout<<"Yanlýþ bildiniz!!!"<<endl<<"Sayýmýz:"<<a2<<" çýktý."<<"Elendiniz!!"<<endl;
				cout<<"Puanýnýz:"<<i;
				exit(0);
				cout<<"\n";
			}
			break;
	}
	a1=a2;
	a2=rand()%10;
}
return 0;}
