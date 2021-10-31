#include <iostream>
#include "fun.h" 
int main (void)
{ 
 CDist a,x(1,1),y(2,3),z(1,1),b;
 Cpoint c,d,r(1,2);
 cout <<"a="<<a<<endl;
 cout <<"x="<<x<<endl;
 cout <<"c="<<c<<endl;
 a= x+y;
 cout <<"x+y=" <<a<<endl;
 a= 2+x;
 cout <<"2+x=" <<a<<endl;
 a=x+2;
 cout << "x+2=" <<a<<endl;
 b=5*a;
 cout<<"5*a="<<b<<endl;
 b=a*5;
 cout<<"a*5="<<b<<endl;

 cout<<"input Cpoint c"<<endl;
 cin>>c;      
 cout<<"c="<<c<<endl;
 cout<<"input CDist z"<<endl;
 cin>>z;        
 cout<<"z="<<z<<endl;
 d=c;
 cout<<"c=c+z (point+vector)"<<endl;
 c=c+z;                                   // точка+ ветор 
 cout<<"c="<<c<<endl;

 cout<<"c=z+c (vector+point)"<<endl;
 d=z+d;                                   // точка+ ветор 
 cout<<"c="<<d<<endl;
 
 cout<<"b=c-r (vector=point-point)"<<"  c="<<c<<"  r="<<r<<endl;   // точка-точка = вектор
 b=c-r;
 cout<<"b="<<b<<endl;
return 0;
}