#include <iostream>

using namespace std;

class sekerMakinesi {
public:
  int toplamSeker, alabilecekSeker, paraUstu;
  int paraKontrol(int);
  void sekerVer(int);
  sekerMakinesi(int);
};

sekerMakinesi::sekerMakinesi(int seker) { toplamSeker = seker; }

int sekerMakinesi::paraKontrol(int para) {
  alabilecekSeker = para / 2;
  if (alabilecekSeker < 1) {
    cout << "Yetersiz para." << endl;
    return 0;
  } else {
    return alabilecekSeker;
  }
}

void sekerMakinesi::sekerVer(int alabilecekSeker) {
  if (toplamSeker == 0) {
    cout << "Makinede hiç şeker yok." << endl;
    cout << alabilecekSeker * 2 << " TL iade edildi." << endl;
  }
  if (alabilecekSeker > toplamSeker) {
    paraUstu = (alabilecekSeker - toplamSeker) * 2;
    cout << toplamSeker << " tane şeker aldınız." << endl;
    cout << "Makinede daha fazla şeker kalmadığı için " << paraUstu
         << " TL iade edildi" << endl;
  } else {
    paraUstu = toplamSeker - alabilecekSeker;
    cout << alabilecekSeker << " tane şeker aldınız" << endl;
    cout << "Makinede toplam " << paraUstu << " tane şeker kaldı.";
  }
}

int main() {
  int para;
  cout << "***1 şeker 2tl***" << endl;
  cout << "Ne kadar para atıcaksınız ?" << endl;
  cin >> para;

  sekerMakinesi makine1(100);//içinde ne kadar şeker olduğunu yaz
  int alabilecekSeker = makine1.paraKontrol(para);
  makine1.sekerVer(alabilecekSeker);
}