#include <iostream>
using namespace std;

int main()
{
	int anaPara;
	int faiz;
	int yil;
	int faiz_Para;
	int bakiye;

	cout << "Lütfen anaparanizi girin:" << endl;
	cin >> anaPara;
	cout << "Lütfen faiz oranini girin (% olarak):" << endl;
	cin >> faiz;
	cout << "Lütfen süresini (yıl olarak) girin:" << endl;
	cin >> yil;

	// Faiz gelirini hesaplama
	faiz_Para = (anaPara * faiz * yil) / 100;

	// Faiz geliri ile yeni bakiye hesaplama
	bakiye = anaPara + faiz_Para;

	cout << "Faiz geliriyle birlikte toplam bakiyeniz: " << bakiye << endl;
	cout << "Faiz geliriniz: " << faiz_Para << endl;

	return 0;
}
