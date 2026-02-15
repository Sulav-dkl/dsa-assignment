#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }   // ← THIS WAS MISSING

int isEmpty() { return top == -1; }

int match(char a, char b) {
    return (a=='('&&b==')') ||
           (a=='['&&b==']') ||
           (a=='{'&&b=='}');
}

int isBalanced(char *exp) {
    for(int i=0; exp[i]; i++) {
        char c = exp[i];

        if(c=='('||c=='['||c=='{')
            push(c);

        else if(c==')'||c==']'||c=='}') {
            if(isEmpty() || !match(pop(), c))
                return 0;
        }
    }
    return isEmpty();
}

int main() {
    char *tests[] = {
        "a + (b - c) * (d",
        "m + [a - b * (c + d * {m)]",
        "a + (b - c)"
    };

    for(int i=0;i<3;i++) {
        top = -1;   // reset stack

        printf("%s -> %s\n",
               tests[i],
               isBalanced(tests[i]) ? "Balanced" : "Not Balanced");
    }

    return 0;
}