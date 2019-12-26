#include "token.h" 
#include "stackType.h"
#include "queue.h"
#include "function.h"
 #include <iostream> 
 using namespace std; 




void processOperand( queueType<Token>&s,Token to){

           s.addQueue(to);
}
void processOperator(queueType<Token>&op,stackType<Token>&os,Token opt){
   if(os.isEmptyStack() || (os.top()).IsLeftParen()){os.push(opt);}
           else{
               while(!(os.top().IsRightParen())){
                   if((os.top()).IsOperator()){ op.addQueue(os.top());os.pop();}
                   else{os.pop();}
               }
               os.push(opt);
           }
           
}
void processleftParen(stackType<Token>&lst,Token l){
     lst.push(l);
         
}
void processRightparen(stackType<Token>&rs,queueType<Token>&qr){
 while(!(rs.top().IsRightParen())){
                   if((rs.top()).IsOperator()){ qr.addQueue(rs.top());rs.pop();}
                   else{rs.pop();}
           
           }   
}

