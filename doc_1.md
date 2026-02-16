# Program 1: Verify that the Parentheses are Balanced

## a) Data Structures
- **Stack (array)**: Opening brackets are stored in `stack[MAX]`.  
- `top` records the top index of the stack.

---

## b) Functions / Purpose

1. `push(char c)` → adds `c` to the stack.  
2. `pop()` → removes and returns the top element.  
3. `isEmpty()` → returns `1` if stack is empty.  
4. `match(char a, char b)` → checks if `a` and `b` are matching brackets.  
5. `isBalanced(char *exp)` → returns `1` if the expression has balanced brackets.

---

## c) main()
- Tests three expressions.  
- Prints `"Balanced"` or `"Not Balanced"` after calling `isBalanced()`.

---

## d) Sample Output
