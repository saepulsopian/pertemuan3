#include <iostream>
  
using namespace std;

  
int main() {

    int a,b, temp;
	
	//proses membaca
	cout << "Masukan nilai A : ";
	cin>> a;
	cout << "Masukan nilai B : ";
	cin>> b;
	
	//proses tukar
	temp = b;
	b = a;
	a = temp;
	
	//proses tampil
	cout << "=================="<<endl;
	cout << "Nilai A sekarang : " <<a<< endl;
	cout << "Nilai A sekarang : " <<b;
	
	return 0;
	
	}
	
		