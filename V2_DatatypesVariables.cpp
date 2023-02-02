#include <iostream>
using namespace std;
int main() {
  
  int a = 123;
  cout << a << endl;
  
  char b = 'a';
  cout << b << endl;

  float f = 12.3;
  cout << f << endl;

  double d = 1.23;
  cout << d << endl;

  bool bl = true;
  cout << bl << endl;

  int size_a=sizeof(a);
  cout << size_a << endl;
  
  int size_b=sizeof(b);
  cout << size_b << endl;
  
  int size_f=sizeof(f);
  cout << size_f << endl;
  
  int size_d=sizeof(d);
  cout << size_d << endl;
  
  int size_bl=sizeof(bl);
  cout << size_bl << endl;
  
  return 0;
}