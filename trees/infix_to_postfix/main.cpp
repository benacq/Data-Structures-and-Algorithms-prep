#include <iostream>
#include <stack>

using namespace std;

bool isOperator(char c) {
    switch (c) {
        case '+':
        case '-':
        case '*':
        case '/':
            return true;
        default:
            return false;
    }
}

bool isOperand(char c) {
    if (c >= '0' && c <= '9') return true;
    if (c >= 'a' && c <= 'z') return true;
    if (c >= 'A' && c <= 'Z') return true;
    return false;
}

int getOperatorWeight(char op) {
    int weight;
    switch (op) {
        case '+':
        case '-':
            weight = 1;
            break;
        case '*':
        case '/':
            weight = 2;
            break;
        default:
            weight = -1;
    }
    return weight;
}

bool hasHigherPrecedence(char op1, char op2) {
    int op1Weight = getOperatorWeight(op1);
    int op2Weight = getOperatorWeight(op2);
    return op1Weight > op2Weight;
}

string infixToPostfix(string expr) {
    string postfix;
    stack<char> s;
    for (int i = 0; i < expr.length(); i++) {
        if (isOperator(expr[i])) {
            while (!s.empty() && s.top() != '(' && hasHigherPrecedence(s.top(), expr[i])) {
                postfix += s.top();
                s.pop();
            }
            s.push(expr[i]);
        } else if (isOperand(expr[i])) {
            postfix += expr[i];
        } else if (expr[i] == '(') {
            s.push(expr[i]);
        } else if (expr[i] == ')') {
            //pop until you meet an opening parenthesis '('
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
    }
    //After the loop runs, pop whatever is remaining in the stack and append to postfix
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix = "(A+B)*4";


    std::cout << infixToPostfix(infix) << std::endl;
    return 0;
}
