#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string nama1, nama2, jk1, jk2;
    cout << "Masukkan nama orang pertama: ";
    cin >> nama1;
    cout << "Jenis kelamin (L/P) pertama: ";
    cin >> jk1;
    cout << "Masukkan nama orang kedua: ";
    cin >> nama2;
    cout << "Jenis kelamin (L/P) kedua: ";
    cin >> jk2;

    int total1 = 0, total2 = 0;
    for (int i = 0; i < nama1.length(); i++) {
        total1 += (toupper(nama1[i]) - 'A' + 1);
    }
    for (int i = 0; i < nama2.length(); i++) {
        total2 += (toupper(nama2[i]) - 'A' + 1);
    }

    cout << "Total bobot nama pertama: " << total1 << endl;
    cout << "Total bobot nama kedua: " << total2 << endl;

    int mod1 = total1 % 4;
    int mod2 = total2 % 4;
    cout << "Hasil modular1 : " << mod1 << endl;
    cout << "Hasil modular2 : " << mod2 << endl;
    cout << "Nilai hasil : " << abs(mod1 - mod2) << endl;
    if (jk1 != jk2) {
        if (mod1 == mod2) {
            if (mod1 == 3) {
                cout << "Pasangan kekasih yang cocok" << endl;
            } else if (mod1 == 0) {
                cout << "Pasangan kekasih yang tidak memiliki masa depan" << endl;
            }
        } else if (mod1 - mod2 == 1 && mod1 - mod2) {
            cout << "Pasangan kekasih yang kadang tidak akur" << endl;
        } else if (mod1 - mod2 == 2 && mod1 - mod2) {
            cout << "Pasangan kekasih yang suka ribut" << endl;
        } else if (mod1 - mod2 == 3 && mod1 - mod2) {
            cout << "Tidak disarankan untuk menjalin hubungan" << endl;
        }
    } else if (jk1 == "L") {
        if (mod1 == mod2) {
            if (mod1 == 3) {
                cout << "Pasangan sahabat dalam kebaikan" << endl;
            } else if (mod1 == 0) {
                cout << "Pasangan sahabat dalam kejahatan" << endl;
            }
        } else if (mod1 - mod2 == 1 && mod1 - mod2) {
            cout << "Pasangan teman yang kadang tidak akur" << endl;
        } else if (mod1 - mod2 == 2 && mod1 - mod2) {
            cout << "Dua teman yang saling curang" << endl;
        } else if (mod1 - mod2 == 3 && mod1 - mod2) {
            cout << "Dua musuh bebuyutan" << endl;
        }
    } else if (jk1 == "L") {
        if (mod1 == mod2) {
            if (mod1 == 3) {
                cout << "Pasangan sahabat dalam kebaikan" << endl;
            } else if (mod1 == 0) {
                cout << "Pasangan sahabat dalam kejahatan" << endl;
            }
        } else if (mod1 - mod2 == 1 && mod1 - mod2) {
            cout << "Pasangan teman yang kadang tidak akur" << endl;
        } else if (mod1 - mod2 == 2 && mod1 - mod2) {
            cout << "Dua teman yang saling curang" << endl;
        } else if (mod1 - mod2 == 3 && mod1 - mod2) {
            cout << "Dua musuh bebuyutan" << endl;
        }
    } else if (jk1 == "P") {
        if (mod1 == mod2) {
            if (mod1 == 3) {
                cout << "Pasangan bestie" << endl;
            } else if (mod1 == 0) {
                cout << "Pasangan bestie kacau baiknya berpisah" << endl;
            }
        } else if (abs(mod1 - mod2 )== 1) {
            cout << "Pasangan teman yang kadang tidak akur" << endl;
        } else if (abs (mod1 - mod2)== 2) {
            cout << "Dua teman yang saling curang" << endl;
        } else if (abs(mod1 - mod2 )== 3) {
            cout << "Dua musuh bebuyutan" << endl;
        }
    }
}
