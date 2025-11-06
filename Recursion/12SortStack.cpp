#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &s, int element)
{
  if (s.empty() || s.top() <= element)
  {
    s.push(element);
    return;
  }

  int temp = s.top();
  s.pop();
  sortedInsert(s, element);
  s.push(temp);
}

void sortStack(stack<int> &s)
{
  if (s.empty())
  {
    return;
  }
  int temp = s.top();
  s.pop();
  sortStack(s);
  sortedInsert(s, temp);
}

void printStack(stack<int> s)
{
  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout << std::endl;
}

int main()
{
  stack<int> myStack;
  myStack.push(30);
  myStack.push(-5);
  myStack.push(18);
  myStack.push(14);
  myStack.push(-3);

  cout << "Original  ";
  printStack(myStack);

  sortStack(myStack);
  cout << "Sorted  ";
  printStack(myStack);

  return 0;
}