#include <iostream>
using namespace std;

int factorial(int n){
  // base case
  if(n==0 || n==1){
    return 1;
  }
  // recusive call
  int ans=n*factorial(n-1);
  return ans;
}

void printN(int n){
  // base case
  if(n==0){
    return;
  }
  // processing
  cout<<n<<" ";
  // recusive call
  printN(n-1);
}

int pow(int n){
  // base case
  if(n==0){
    return 1;
}
  int ans=2*pow(n-1);
  return ans;
}

int fib(int n){
  // base case
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  int ans=fib(n-1)+fib(n-2);
  return ans;
}

int sum(int n){
  // base case
  if(n==1){
    return 1;
  }
  int ans=n+sum(n-1);
  return ans;
}

int main() {
  // cout<<factorial(5)<<endl;
  // printN(10);
  // cout<<pow(3)<<endl;
  // cout<<fib(5);
  cout<<sum(5)<<endl;
}