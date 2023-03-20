#include <iostream>
using namespace std;
int main() {
  long long f1 = 0, f2 = 1, a, n, flag = 0;
  cin >> n;
  while(a <= n){
    a=f1+f2;
    f1=f2;
    f2=a;
    if(a == n){
      flag = 1;
    }
  }
  if(flag == 1){
    cout << "O numero digitado: " << n << " pertence a sequencia de fibonacci";
  }
  else{
    cout << "O numero digitado: " << n << " NAO pertence a sequencia de fibonacci";
  }
}