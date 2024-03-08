#include <iostream>
using namespace std;

int a[20];			//Deklarasi array a dengan ukuran 20
int n;				//Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {		//procedur untuk input
	while (true) {	//looping
		cout << "Masukkan banyaknya elemen pada array: ";	//output ke layar
		cin >> n;	//input dari pengguna
		if (n <= 20)	//jika n kurang dari atau sama dengan 20
			break;		//keluar dari loop
		else {		//jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";	//output ke layar
		}
	}
	cout << endl;								//Output baris kosong
	cout << "=====================" << endl;	//Output ke layar
	cout << "Masukkan Elemen Array" << endl;	//Output ke layar
	cout << "=====================" << endl;	//Output ke layar

	for (int i = 0; i < n; i++) {		//looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": ";	//Output ke layar
		cin >> a[i];

	}
}
