#include <iostream>
using namespace std;
int main() {
  string a, b;
  cout << "Digite a string para ser invertida:";
  cin >> a;
  for(int i = a.size()-1; i >= 0; i--){
      b+=a[i];
  }
  cout << b;
}