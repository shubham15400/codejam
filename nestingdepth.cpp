#include <iostream>
#include <string>
using namespace std;

int main() {
  string x;
  int n;
  cin >> n;
  getline(cin,x);
  for(int j =0 ; j<n ; j++){
    string str,str2;
    getline(cin, str);
  for(int i = 0; i<str.length() ;i++)
  {
    if(str.at(i) == '1' && i == 0 && i == str.length()-1)
    {
      str2.append("(1)");
    }
    else if(str.at(i) == '1' && i == 0)
    {
      str2.append("(1");
    }
    else if(str.at(i) == '0' && i == 0)
    {
      str2.append("0");
    }
    else if(str.at(i) == '1' && i == str.length()-1)
    {
      str2.append("1)");
    }
    else if(str.at(i-1) == '0' && str.at(i) == '0' && i == str.length()-1)
    {
      str2.append("0");
    }
    else if(str.at(i-1) == '1' && str.at(i) == '0' && i == str.length()-1)
    {
      str2.append(")0");
    }
    else if(str.at(i-1) == '1' && str.at(i) == '0'&& str.at(i+1) == '0')
    {
      str2.append(")0");
    }
    else if(str.at(i-1) == '0' && str.at(i) == '0'&& str.at(i+1) == '0')
    {
      str2.append("0");
    }
    else if(str.at(i-1) == '0' && str.at(i) == '0'&& str.at(i+1) == '1')
    {
      str2.append("0(");
    }
    else if(str.at(i-1) == '1' && str.at(i) == '0'&& str.at(i+1) == '1')
    {
      str2.append(")0(");
    }
    else if(str.at(i) == '1')
    {
      str2.append("1");
    }
  }
      cout<<"Case #"<<j+1<<": "<<str2<<"\n";}
}
