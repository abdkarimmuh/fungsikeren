#include<iostream>
using namespace std;

int lelah = 0;
int maksimal = 100;

int masuk();
int keluar();

int main(){
	while (lelah <= maksimal) {
		masuk();
		keluar();
	}

}

int masuk(){
	cout<<"Ahh... masuk"<<endl;
	return lelah++;
}

int keluar(){
	cout<<"Ahh... keluar"<<endl;
	return lelah++;
}
