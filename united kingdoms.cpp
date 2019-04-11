#include<iostream>
using namespace::std;

struct ipk {int uts, uas, tugas, kehadiran, jumlah;
float kuts, kuas, kt, kk;};
ipk i;
void inputan(){

    cout<<" Masukan Nilai UTS       : ";cin>>i.uts;
    cout<<" Masukan Nilai UAS       : ";cin>>i.uas;
    cout<<" Masukan Nilai Tugas     : ";cin>>i.tugas;
    cout<<" Masukan Nilai Kehadiran : ";cin>>i.kehadiran;
}
void rumus(){

    i.kuts=i.uts*20/100;
    i.kuas=i.uas*30/100;
    i.kt=i.tugas*35/100;
    i.kk=i.kehadiran*15/100;
    i.jumlah=i.kuts+i.kuas+i.kt+i.kk;
}
void tampilan(){

cout<<" UTS       : "<<i.kuts<<endl;
cout<<" UAS       : "<<i.kuas<<endl;
cout<<" Tugas     : "<<i.kt<<endl;
cout<<" Kehadiran : "<<i.kk<<endl;
cout<<" Total     : "<<i.jumlah<<endl;
}
void nilai(){
if (i.jumlah>=81)
    cout<<" Nilai yang didapat: A";
else if (i.jumlah>=61)
    cout<<" Nilai yang didapat: B";
else if (i.jumlah>=41)
    cout<<" Nilai yang didapat: C";
else if (i.jumlah>=21)
    cout<<" Nilai yang didapat: D";
else
    cout<<" Nilai yang didapat: E";
}
void doa()
{
    cout<<"\nBismillahirohmanirrohim\n";
}
main(){
doa();
inputan();
rumus();
tampilan();
nilai();
}
