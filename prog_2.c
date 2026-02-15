#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

char stack[MAX];
int top=-1;

void push(char c){ stack[++top]=c; }
char pop(){ return stack[top--]; }
char peek(){ return stack[top]; }

int prec(char op){
    if(op=='+'||op=='-') return 1;
    if(op=='*'||op=='/') return 2;
    if(op=='^') return 3;
    return 0;
}

void infixToPostfix(char *infix, char *postfix){
    int k=0;
    for(int i=0; infix[i]; i++){
        char c=infix[i];
        if(isdigit(c)) postfix[k++]=c;
        else if(c=='(') push(c);
        else if(c==')'){
            while(peek()!='(') postfix[k++]=pop();
            pop();
        }
        else {
            while(top!=-1 && prec(peek())>=prec(c))
                postfix[k++]=pop();
            push(c);
        }
    }
    while(top!=-1) postfix[k++]=pop();
    postfix[k]='\0';
}

int evalPostfix(char *postfix){
    int st[MAX], t=-1;
    for(int i=0; postfix[i]; i++){
        char c=postfix[i];
        if(isdigit(c)) st[++t]=c-'0';
        else{
            int b=st[t--], a=st[t--];
            switch(c){
                case '+': st[++t]=a+b; break;
                case '-': st[++t]=a-b; break;
                case '*': st[++t]=a*b; break;
                case '/': st[++t]=a/b; break;
                case '^': st[++t]=pow(a,b); break;
            }
        }
    }
    return st[t];
}

int main(){
    char infix[MAX], postfix[MAX];
    printf("Enter infix: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);
    printf("Postfix: %s\n", postfix);
    printf("Result: %d\n", evalPostfix(postfix));

    return 0;
}