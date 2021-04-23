#include<iostream>
#include<string.h>
using namespace std;
char asal[100];
char hasil[100];
int kata;

void enskripsi() {
	int key = 7;
	int i;
	for (i = 0; i < kata; i+= 1) {
		if (int(asal[i]) > 115) {
			asal[i] = (asal[i] + key) - 26;
		}
		else {
			asal[i] = (asal[i] + key);
		}
	}
}

class dekripsi {
public:
	void dek() {
		int key = 7;
		int i;
		for (i = 0; i < kata; i += 1) {
			if (int(asal[i]) < 103) {
				asal[i] = (asal[i] + 19);
			}
			else {
				asal[i] = (asal[i] - key);
			}
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
	cout << "3.Keluar" << endl;
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
		cout << endl;
		goto menu;
	case 3:
		cout << "Terimakasih telah menggunakan program ini";
		break;
	default:
		cout << "Nomor yang anda masukkan salah. Coba lagi"<<endl;
		goto menu;
	}
}
