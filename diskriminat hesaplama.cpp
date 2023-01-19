#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;


int main(){
	setlocale(LC_ALL,"Turkish");
	int a;
	int b;
	int c;
	int d = 4;
	int kare;
	int carp;
	int sonuc;
	int karekok;
	int carpma;
	int sonuc2;
	int carpma2;
	int sonuc3;
	
	cout<<"Lütfen sayýlarý sýrasýyla  giriniz"<<endl;
	cout<<"a sayýsý :";
	cin>>a;
	cout<<"b sayýsý :";
	cin>>b;
	cout<<"c sayýsý :";
	cin>>c;
	kare= pow(b,2);
	carp = a*c;
	sonuc =kare-d*carp;
	cout<<"Sonuç  ";
	cout<<sonuc<<endl;
	
	if(sonuc>0){
		karekok = pow(sonuc,2);
		carpma = 2*a;
		sonuc2 = -b-karekok/carpma;
		cout<<sonuc2<<endl;
	}if(sonuc == 0){
		carpma2 = 2*a;
		sonuc3 = -b/carpma;
		cout<<sonuc3<<endl;
	}else{
		cout<<"Reel kökü yok";
	}
}
