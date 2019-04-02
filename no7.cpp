#include <iostream>
using namespaace std;
int main()
{
  int a,b;
  char c;
  cout<<"masukan angka pertama : ";
  cin>>a;
  cout<<"masukan angka kedua : ";
  cin>>b;
  cout<<"masukan *,/,+,atau - : ";
  cin>>c;
  
  if (c=='*') {
  cout<<a*b<<endl;
  } else if(c=='/')
  {
  cout<<a/b<<endl;
  } else if(c=='+')
  {
  cout<<a+b<<endl;
  } else if(c== '-')
  {
  cout<<a-b<<endl;
  }
  return 0;
  }
