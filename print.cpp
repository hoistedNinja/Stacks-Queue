#include "token.h" 
#include "stackType.h"
#include "queue.h"
#include "function.h"
#include "print.h"
 #include <iostream> 
 using namespace std; 

void printInfix(queueType<Token>oe){
    cout<<"********Infix Expression Given*******"<<endl;
     cout<<endl;
     
     while(!oe.isEmptyQueue()){
      
         cout<<oe.front()<<" ";
        
         oe.deleteQueue();
     }
     
     cout<<endl;
    
    
    
    
}


void evaluate(queueType<Token>q,stackType<Token>s){
   //cout<<"********Infix Expression Given*******"<<endl;
   //  cout<<endl;
    // queueType<Token>eqt;
    // queueType<Token>oe;
    // while(!oe.isEmptyQueue()){
      
       //  cout<<oe.front()<<" ";
        
       //  oe.deleteQueue();
    // }
     
   //  cout<<endl;
     queueType<Token>eqt;
    Token e;
     
     cout<<" ******Post Fix expression:******"<<endl;
     cout<<endl;
     while(!q.isEmptyQueue()){
         cout<<q.front()<<" ";
         eqt.addQueue(q.front());
         q.deleteQueue();
     }
     
     
     if(!(s.top()).IsRightParen()){
     cout<<s.top();
        
         eqt.addQueue(s.top());
     }
    s.pop();
     
 
   while(!eqt.isEmptyQueue()){
       Token t1,t2,t3;
       e=eqt.front();
       
       if(e.IsOperand()){s.push(e);}
       else if(e.IsOperator())
       {
           t1=s.top(); 
           s.pop();
           t2=s.top();
           s.pop();
           
            switch (e.Operator()) 
   { 
       case '+' :  t3 = t1 + t2; break; 
       case '-' :  t3 = t2 - t1; break; 
       case '*' :  t3 = t1 * t2; break; 
       case '/' :  t3 = t2 / t1; break; 
       case '%' :  t3 = t1 % t2; break; 
       case '^' :  t3 = t2 ^ t1; break; 
               
    } s.push(t3);
  
       
       
       }
      eqt.deleteQueue(); 
       
   } 
      cout<<endl;
     cout<<"********** Evaluation of Post Fix is *********"<<endl;
     cout<<s.top();
     cout<<endl;
     
      
    
    
}

