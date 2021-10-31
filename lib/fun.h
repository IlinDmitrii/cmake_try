#pragma once
using namespace std;
class CDist;
class Cpoint
 { int a,b;
  public:
  Cpoint(int a=0, int b=0) {this->a=a;this->b=b;};   //���������� ������ �����
  friend ostream &operator<<(ostream &cout, Cpoint &a); //����� ��������� �����
  friend istream &operator>>(istream &cin, Cpoint &a);  //����� ��������� ����
  Cpoint &operator=(const int &a){this->a=a;b=0; return *this;}  // ���������� ����� ����� int 
  friend Cpoint operator+(const Cpoint &a, const CDist &b);     // ����� ����������� �����+������=�����
  friend Cpoint operator+(const CDist &b,const Cpoint &a );     // ����� ����������� ������+�����=�����
  friend CDist operator-(const Cpoint &b,const Cpoint &a );     // ����� ����������� �����=�����=������
 };
class CDist
 { int a,b;
  public:
  CDist(int a=0, int b=0) {this->a=a;this->b=b;};  //���������� ������� ������� 
  friend ostream &operator<<(ostream &cout, CDist &a);  //����� ��������� �����  
  friend istream &operator>>(istream &cin, CDist &a);    //����� ��������� ����
  CDist &operator=(const int &a){this->a=a;b=0; return *this;}  //���������� ������� ����� int
  CDist operator+(const CDist &x){CDist r; r.a=a+x.a; r.b=b+x.b; return r;}  // �������� ���� ������ + ������
  CDist operator+(const int &x){CDist r; r.a=x+a; r.b=b; return r;}       //�������� ���� ������+�����
  CDist operator*(const int &x){CDist r; r.a=x*a; r.b=b*x; return r;}    // ��������� ���� ������*�����
  friend CDist operator+(const int &a, const CDist &b);     // ����� ����������� �����+ ������
  friend CDist operator*(const int &a, const CDist &b);    //����� ����������� �����*�����
  friend Cpoint operator+(const Cpoint &a, const CDist &b);     // ����� ����������� �����+�����=�����
  friend Cpoint operator+(const CDist &b,const Cpoint &a );     // ����� ����������� ������+�����=�����
  friend CDist operator-(const Cpoint &b,const Cpoint &a );     // ����� ����������� �����=�����=������ 
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
