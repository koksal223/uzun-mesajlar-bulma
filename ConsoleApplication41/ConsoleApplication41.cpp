#include <iostream>
using namespace std;
class eposta {
    int sayi;
    string* kelimeler,alan,yollayan;
public:
    static int adet;
    eposta(){}
    eposta(int _Sayi) :sayi(_Sayi) {
        kelimeler = new string[sayi];
    }
    void oku(string a, string s) {
        alan = a;
        yollayan = s;

    }

};
int eposta::adet = 0;
int main()
{
    eposta a[3];
    int s;
    string alan, send;
    string* mesaj;
    
    
   
   
    for (int i = 0; i < 3; i++)
    {
        cout << "alanin ve gonderenin soyadini gir : " << endl;
        cin >> alan >> send;
        a[i].oku(alan, send);
        cout << "mesajdaki kelime sayisini giriniz : ";
        cin >> s;
        a[i] = { s };
        mesaj = new string[s];
        cout << "mesaji giriniz :";
        
        for (int i = 0; i < s; i++)
        {
            cin >> mesaj[i];
        }
        if (s>10)
        {
            a[i].adet++;
        }
 
    }
    cout << "10 kelimeden uzun mesajlarin sayisi :" << a[1].adet << endl;
  
   
}
