//WAP to evaluate a postfix expression using stacks.
#include<iostream>
#include<string>
#include<stack>
#include<cmath>
using namespace std;

int main(){
  cout << "enter postfix expression : ";
string exp;
getline(cin,exp); // input of postfix expression

  stack<int> st;
  for(int i=0;i<exp.length();i++){
    char c=exp.at(i);  
    if(isdigit(c)){ 
      st.push(c-'0') ;  //if is num then covert it to int and push to satck
    }
    else{
      int val2=st.top();st.pop();   //is operator take val2 ,then val1   then operate val1 to val2 and push for more operations 
      int val1=st.top();st.pop();
         switch(c){
          case '+':
          st.push(val1+val2);
          break;
          case '-':
          st.push(val1-val2);
          break;
          case '/':
          st.push(val1/val2);
          break;
          case '*':
          st.push(val1*val2);
          break;
          case '^':
          st.push(pow(val1,val2));
          break;

         }
    }
  }

  cout << "evaluated answer is : "<<st.top();   //output of final result



  return 0;
}