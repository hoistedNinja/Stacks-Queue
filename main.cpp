#include "token.h" 
#include "stackType.h"
#include "queue.h"
#include "function.h"
#include "print.h"
 #include <iostream> 
 using namespace std; 


 int main() 
 {
     Token t,e;
     stackType<Token>st;
     queueType<Token>qt;
     st.push(')');
     queueType<Token>eqt;
    queueType<Token>oe;
     
     
    cout << "enter a valid arithmetic expression on one line: "; 
    cin >> t; 
    while (t.Valid()) 
    { 
       cout << "token: " << t << endl; 
        if (t.Valid()) 
    { 
            oe.addQueue(t);
       if (t.IsOperand()) {
          processOperand(qt,t);
       }
            
       else if (t.IsOperator()) {
           processOperator(qt,st,t);
           }
       else if (t.IsLeftParen()) {
           processleftParen(st,t);
          }
       else if (t.IsRightParen()) {
         processRightparen(st,qt);  
    } 
    else {
       cout << "not a valid token\n"; }
    
       cin >> t; 
    } 
    }
     
    
 
  printInfix(oe);   
 evaluate(qt,st);
return 0;  
 }



