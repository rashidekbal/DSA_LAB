//Write a recursive function for Tower of Hanoi problem.

#include<iostream>
using namespace std;
void towerOfHanoi(int n,char source,char helper,char destination){
  if(n==1){
    cout << "move disk from "<<source<< " to " <<destination<<endl;
    return ;
  }
  towerOfHanoi(n-1,source ,destination,helper);
  cout << "move disk form "<<source <<" to "<<destination<<endl;
  towerOfHanoi(n-1,helper,source,destination);
}
int main(){
  int x;
  cout << "enter no. of disk : ";
  cin>>x;
  towerOfHanoi(x,'A','B','C');

  return 0;
}