//WAP to convert an infix expression to a postfix expression using stack.
#include<iostream>
#include <cctype>
#include<stack>
#include<string>
using namespace std;

//for checking operator precedence
int precedence (char c){
  if(c=='+'||c=='-') return 1;
  if(c=='*'||c=='/') return 2;
  if(c=='^') return 3;
  return 0;
}

//for checking given char is an operator or not
bool isOperator(char c){
return (c=='+'||c=='-'||c=='*'||c=='/'||c=='^');
}

int main(){
  stack<char> st; //stack creation
  string infix,postfix="";

  cout << "enter the infix expression : ";
  getline(cin,infix);  //taking expression input
  cout << "entered expression : "<< infix <<endl;

  for(int i=0;i<infix.length();i++){
     char c=infix.at(i);

     if(isalnum(c)){
      postfix+=c;   //if char is alphanumeric
     }
     if(c=='('){
      st.push(c);   //if given char  is  (
     }else if(c==')'){   //if given char is )
      while (!st.empty()&& st.top()!='('){   //until top is (  keep adding to post fix and removing from top;
postfix+=st.top();
st.pop();

      }
      st.pop(); //remove ( from stack
     }

     else if(isOperator(c)){ 
      //if given char is operator
while(!st.empty()&& precedence(st.top())>=precedence(c)){ 
  //if operator precendence < that of stack top add stack top to prefix and remove from stack
  postfix+=st.top();
  st.pop();
}
st.push(c); // al last add to stack

     }

  }
while(!st.empty()){
  postfix+=st.top(); // until stack is empty add to postfix and pop from stack
  st.pop();
}

cout << "after conversion from infix :"<<postfix<<endl;

  return 0;
}
