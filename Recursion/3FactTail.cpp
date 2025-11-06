#include <iostream>

using namespace std;

int tailFact(int n, int prod){
  if(n<=1) return prod;
  return tailFact(n-1, n*prod);
  //Tail Recursion
}
int main() {
    cout << "Hello, World!" << endl;
    cout<<tailFact(5,1);
    return 0;
}