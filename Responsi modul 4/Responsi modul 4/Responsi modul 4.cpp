#include<iostream>
#include<string.h>
using namespace std;
char asal[100];
char hasil[100];
string huruf = "abcdefghijklmnopqrstuvwxyz";
int kata;

void enskripsi() {
	int key = 7;
	int i;
	for (i = 0; i < kata; i+= 1) {
		asal[i] = (asal[i] + key);
	}
}

class dekripsi {
public:
	void dek() {
		int key = 7;
		int i;
		for (i = 0; i < kata; i += 1) {
			asal[i] = (asal[i] - key);
		}
	}
};

int main() {
	int i;
	int pilihan;
	menu:
	cout << "Selamat datang di program enkripsi dan dekripsi kaya" << endl;
	cout << "Silahkan pilih menu dibawah ini: " << endl;
	cout << "1.Enkripsi kata" << endl;
	cout << "2.Dekripsi kata" << endl;
	cout << "Masukkan nomor: ";
	cin >> pilihan;
	switch (pilihan) {
	case 1:
		cout << "Berapa kata: ";
		cin >> kata;
		cout << "Masukkan kata: " << endl;
		cin >> asal;
		cout << "Akan menjadi kata: " << endl;
		enskripsi();
		for (i = 0; i < kata; i += 1) {
			cout << asal[i];
		}
		cout << endl;
		goto menu;
	case 2:
		cout << "Berapa kata: ";
		cin >> kata;
		cout << "Masukkan kata: " << endl;
		cin >> asal;
		cout << "Akan menjadi kata: " << endl;
		dekripsi myObj;
		myObj.dek();
		for (i = 0; i < kata; i += 1) {
			cout << asal[i];
		}
		goto menu;
	}
}
