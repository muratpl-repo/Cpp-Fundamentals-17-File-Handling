#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    //Tek satirda tek kelime alma!
    ifstream dosya("C:\\Users\\murat\\Desktop\\C++ DERSLERÝ\\Dosya Okuma Islemleri\\Ogrenciler.txt");
    int sayi;
    //dosya>>sayi; //Ilk sayiyi getirir sadece!
    //cout << sayi;

    while(dosya>>sayi)
        cout<<sayi<<endl; // Her satiri tek tek dondurur...


    //Satirdaki cumleleri alma (Kelimelerin arasi bosluklu...)


    ifstream dosya2("C:\\Users\\murat\\Desktop\\C++ DERSLERÝ\\Dosya Okuma Islemleri\\takimlar.txt");
    int kurulusTarihleri[4];
    string takimIsmi[4];
    string stadyumIsmi[4];

    int i=0;
    while(dosya2){
        dosya2>>kurulusTarihleri[i]>>takimIsmi[i]>>stadyumIsmi[i];
        i++;
    }

    for(i=0;i<3;i++){
        cout<<"Kurulus tarihi: "<<kurulusTarihleri[i]<<"    ";
        cout<<"Takim Ismi: "<<takimIsmi[i]<<"   ";
        cout<<"Stadyum Ismi: "<<stadyumIsmi[i]<<endl;
    }


    return 0;
}
