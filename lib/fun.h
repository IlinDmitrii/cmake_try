#pragma once
using namespace std;
class CDist;
class Cpoint
 { int a,b;
  public:
  Cpoint(int a=0, int b=0) {this->a=a;this->b=b;};   //объявление пустой точки
  friend ostream &operator<<(ostream &cout, Cpoint &a); //чтобы узаконить вывод
  friend istream &operator>>(istream &cin, Cpoint &a);  //чтобы узаконить ввод
  Cpoint &operator=(const int &a){this->a=a;b=0; return *this;}  // присваение точке числа int 
  friend Cpoint operator+(const Cpoint &a, const CDist &b);     // чтобы реализовать точка+вектор=точка
  friend Cpoint operator+(const CDist &b,const Cpoint &a );     // чтобы реализовать вектор+точка=точка
  friend CDist operator-(const Cpoint &b,const Cpoint &a );     // чтобы реализовать точка=точка=вектор
 };
class CDist
 { int a,b;
  public:
  CDist(int a=0, int b=0) {this->a=a;this->b=b;};  //объявление пустого вектора 
  friend ostream &operator<<(ostream &cout, CDist &a);  //чтобы узаконить вывод  
  friend istream &operator>>(istream &cin, CDist &a);    //чтобы узаконить ввод
  CDist &operator=(const int &a){this->a=a;b=0; return *this;}  //присвоение вектору числа int
  CDist operator+(const CDist &x){CDist r; r.a=a+x.a; r.b=b+x.b; return r;}  // сложение вида вектор + вектор
  CDist operator+(const int &x){CDist r; r.a=x+a; r.b=b; return r;}       //сложение вида вектор+число
  CDist operator*(const int &x){CDist r; r.a=x*a; r.b=b*x; return r;}    // умножение вида вектор*число
  friend CDist operator+(const int &a, const CDist &b);     // чтобы реализовать число+ вектор
  friend CDist operator*(const int &a, const CDist &b);    //чтобы реализовать число*ветор
  friend Cpoint operator+(const Cpoint &a, const CDist &b);     // чтобы реализовать ветор+точка=точка
  friend Cpoint operator+(const CDist &b,const Cpoint &a );     // чтобы реализовать вектор+точка=точка
  friend CDist operator-(const Cpoint &b,const Cpoint &a );     // чтобы реализовать точка=точка=вектор 
 };
CDist operator+(const int &a ,const CDist &b);
CDist operator*(const int &a ,const CDist &b);
Cpoint operator+(const Cpoint &a ,const CDist &b);
Cpoint operator+(const CDist &b,const Cpoint &a );
CDist operator-(const Cpoint &a ,const Cpoint &b);
ostream &operator<<(ostream &cout ,CDist &a);
istream &operator>>(istream &cin ,CDist &a);
ostream &operator<<(ostream &cout ,Cpoint &a);
istream &operator>>(istream &cin ,Cpoint &a);  
