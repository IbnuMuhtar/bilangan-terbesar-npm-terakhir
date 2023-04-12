//#include <iostream>
//using namespace std;

//NPM : 2217051140

//int kali(int y,int x){
//	if (y == 0){
//		return 0;
//	}
//	else {
//		return x + kali (x , y-1);
//	}
//}

//int main(){
//	int y = 0, x = 4;
//	cout<<kali(y,x);
//}

#include<iostream>

using namespace std;

   int main() {
      cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
      cout << "----------------------------------------------Mencari nilai Terbesar dan Terkecil---------------------------------------" << endl;
      cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

       int angka, jumlah, max, min;

       cout << "masukkan jumlah angka: ";
       cin >> jumlah;
       cout << endl;

       for (int i = 1; i <= jumlah; i++) {

       cout << "Masukkan Angka       : "; cin >> angka;

       if ( i == 1 ) {
             min = angka;
             max = angka;
            }
            else if ( min > angka ) {
               min = angka;
            }
            else if ( max < angka) {
               max = angka;
           }
           else {}
           }

       cout << endl;
       cout << "Nilai terkecil           : " <<  min << endl;
       cout << "Nilai terbesar           : " <<  max << endl;

    return 0;
    }
