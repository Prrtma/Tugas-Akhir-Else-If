#include<iostream>
#include<stdio.h>
using namespace std;

int main(void)
{
	int code;
	cout<<"Masukan Kode Hari: ";
	cin>>code;
	
	if(code==1){
		cout<<"Hari Senin";
	}
	
	else if(code==2){
		cout<<"Hari Selasa";
	}
	
	else if(code==3){
		cout<<"Hari Rabu";
	}
	
	else if(code==4){
		cout<<"Hari Kamis";
	}
	
	else if(code==5){
		cout<<"Hari Jum'at";
	}
	
	else if(code==6){
		cout<<"Hari Sabtu";
	}
	
	else if(code==7){
		cout<<"Hari Minggu";
	}
	
	else{
		cout<<"eror";
		cout<<"\nKode Salah";
		cout<<"\nKode 1 Hari Senin";
		cout<"\nKode 2 Hari Selasa";
		cout<<"\nKode 3 Hari Rabu";
		cout<<"\nKode 4 Hari Kamis";
		cout<<"\nKode 5 Hari Jumat";
		cout<<"\nKode 6 Hari Sabtu";
		cout<<"\nKode 7 Hari Minggu";
	}
}
