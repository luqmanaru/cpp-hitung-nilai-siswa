#include <iostream>
using namespace std;

int main()
{
    cout <<"PROGRAM HITUNG NILAI AKHIR"<<endl;
    string namasiswa;
    int nilaikeaktifan, nilaitugas, nilaiujian, hasilakhir, a, b, c;

    cout<<"Nama Siswa \t: "; cin>>namasiswa;
    cout<<"Nilai keaktifan \t: "; cin>>nilaikeaktifan;
    cout<<"Nilai Tugas \t: "; cin>>nilaitugas;
    cout<<"Nilai Ujian \t: "; cin>>nilaiujian;

    a=(nilaikeaktifan*20)/100;
    b=(nilaitugas*30)/100;
    c=(nilaiujian*50)/100;
    hasilakhir=(a+b+c);

    cout<<endl;
    cout<<"Siswa yang bernama "<<namasiswa<<endl;
    cout<<"Dengan Nilai Persentasi Yang dihasilkan : "<<endl;
    cout<<"Nilai Keaktifan : "<<a<<endl;
    cout<<"Nilai Tugas     : "<<b<<endl;
    cout<<"Nilai Ujian     : "<<c<<endl;
    cout<<endl;
    cout<<"Jadi siswa yang bernama "<<namasiswa<<" memperoleh nilai akhir sebesar "<<hasilakhir<<endl;

    return 0;
}
