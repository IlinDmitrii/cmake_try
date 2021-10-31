#include <iostream>
#include "fun.h"
CDist operator+(const int &a ,const CDist &b){CDist r; r.a=b.a + a ; r.b=b.b; return r;} // ���������� �����+������
CDist operator*(const int &a ,const CDist &b){CDist r; r.a=a*b.a ; r.b=a*b.b; return r;} // ���������� �����*������
Cpoint operator+(const Cpoint &a ,const CDist &b){Cpoint r; r.a=b.a + a.a ; r.b=b.b+a.b; return r;} // ���������� �����+������=�����
Cpoint operator+(const CDist &b,const Cpoint &a ){Cpoint r; r.a=b.a + a.a ; r.b=b.b+a.b; return r;} // ���������� �����+�����=�����
CDist operator-(const Cpoint &a ,const Cpoint &b){CDist r; r.a=a.a-b.a ; r.b=a.b-b.b; return r;} // ���������� �����-�����=������
 
ostream &operator<<(ostream &cout ,CDist &a)    //��������� �����
 {
  cout<<"("<<a.a<<","<<a.b<<")";
  return cout;
 }
istream &operator>>(istream &cin ,CDist &a)    //��������� ����
 {
  cin>>a.a>>a.b;
  return cin;
 }
ostream &operator<<(ostream &cout ,Cpoint &a)  //��������� �����
 {
  cout<<"("<<a.a<<","<<a.b<<")";
  return cout;
 }
istream &operator>>(istream &cin ,Cpoint &a)   //��������� ����
 {
  cin>>a.a>>a.b;
  return cin;
 }  
