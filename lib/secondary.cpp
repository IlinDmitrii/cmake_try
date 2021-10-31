#include <iostream>
#include "fun.h"
CDist operator+(const int &a ,const CDist &b){CDist r; r.a=b.a + a ; r.b=b.b; return r;} // реализация число+вектор
CDist operator*(const int &a ,const CDist &b){CDist r; r.a=a*b.a ; r.b=a*b.b; return r;} // реализация число*вектор
Cpoint operator+(const Cpoint &a ,const CDist &b){Cpoint r; r.a=b.a + a.a ; r.b=b.b+a.b; return r;} // реализация точка+вектор=точка
Cpoint operator+(const CDist &b,const Cpoint &a ){Cpoint r; r.a=b.a + a.a ; r.b=b.b+a.b; return r;} // реализация ветор+точка=точка
CDist operator-(const Cpoint &a ,const Cpoint &b){CDist r; r.a=a.a-b.a ; r.b=a.b-b.b; return r;} // реализация точка-точка=вектор
 
ostream &operator<<(ostream &cout ,CDist &a)    //описываем вывод
 {
  cout<<"("<<a.a<<","<<a.b<<")";
  return cout;
 }
istream &operator>>(istream &cin ,CDist &a)    //описываем ввод
 {
  cin>>a.a>>a.b;
  return cin;
 }
ostream &operator<<(ostream &cout ,Cpoint &a)  //описываем вывод
 {
  cout<<"("<<a.a<<","<<a.b<<")";
  return cout;
 }
istream &operator>>(istream &cin ,Cpoint &a)   //описываем ввод
 {
  cin>>a.a>>a.b;
  return cin;
 }  
