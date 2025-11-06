#include <iostream>

using namespace std;
int fact(int n){
  if(n==0 || n==1) return 1;

  return n*fact(n-1);
  //Non Tail Recursion
  // as multiplication happens after recursive call
}
int main() {
    cout << "Hello, World!" << endl;
    cout<<fact(5);
    return 0;
}