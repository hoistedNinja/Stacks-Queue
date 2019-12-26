#include "token.h" 
#include "stackType.h"
#include "queue.h"

#ifndef _FUNCTION_
#define _FUNCTION_
void processOperand( queueType<Token>&s,Token to);
void processOperator(queueType<Token>&op,stackType<Token>&os,Token opt);
void processleftParen(stackType<Token>&lst,Token l);
void processRightparen(stackType<Token>&rs,queueType<Token>&qr);

#endif // !_SORT_

