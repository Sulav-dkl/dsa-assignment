# Program 2: Convert Infix Expression to Postfix and Evaluate

## a) Data Structures
- **Stack (array)**: Used to store operators temporarily while converting infix to postfix.  
- **Character array / string**: Stores the postfix expression.  

---

## b) Functions / Purpose

1. `push(char c)` → adds an operator to the stack.  
2. `pop()` → removes and returns the top operator from the stack.  
3. `isEmpty()` → checks if the operator stack is empty.  
4. `priority(char op)` → returns the precedence of the operator.  
5. `infixToPostfix(char *infix, char *postfix)` → converts an infix expression to postfix.  
6. `evaluatePostfix(char *postfix)` → evaluates the postfix expression and returns the result.

---

## c) main()
- Prompts user to enter an infix expression.  
- Converts it to postfix using `infixToPostfix()`.  
- Prints the postfix expression.  
- Evaluates the postfix expression using `evaluatePostfix()` and prints the result.

---

## d) Sample Output
Enter infix: 2+34
Postfix: 234+
Result: 14