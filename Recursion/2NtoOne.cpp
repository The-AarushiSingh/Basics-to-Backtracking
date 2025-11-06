#include <iostream>

using namespace std;
int fxn(int n){
  if(n==1) return 1;
  cout<<n<<" ";
  return fxn(n-1);
}

int main() {
    cout << "Hello, World!" << endl;
    cout<<fxn(5);
    return 0;
}