//Design a lexical analyzer for a given language and the lexical analyzer should recognize identifiers.
//Design a lexical analyzer for a given language and the lexical analyzer should recognize operators.

#include <bits/stdc++.h>
using namespace std;

// Check if the string is a keyword
int isKeyword(string s) {
    return (s == "auto" || s == "int" || s == "char" || s == "long" ||
            s == "float" || s == "double" || s == "struct" || s == "if" ||
            s == "else" || s == "break" || s == "continue" || s == "while" ||
            s == "do" || s == "for" || s == "return" || s == "signed" ||
            s == "unsigned" || s == "default" || s == "goto" || s == "case" ||
            s == "sizeof" || s == "short" || s == "switch" || s == "void" ||
            s == "static" || s == "typedef");
}

// Check if the string is a valid variable
int isVariable(string s) {
    // A variable cannot be a keyword
    if (isKeyword(s)) {
        return 0;
    }

    // Variable name must start with an alphabet or underscore
    if (!isalpha(s[0]) && s[0] != '_') {
        return 1;
    }

    // The rest of the string must be alphanumeric or underscore
    for (int i = 1; i < s.length(); i++) {
        if (!isalnum(s[i]) && s[i] != '_') {
            return 0;
        }
    }

    return 1; // It's a valid variable
}

// Check if the string is an operator
int isOperator(string s) {
    string operators[] = {"+", "-", "*", "/", "=", "==", "!=", ">", "<", ">=", "<=", "&&", "||", "++", "--", "%"};
    for (int i = 0; i < 15; i++) {
        if (s == operators[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    string st;
    ifstream inputFile("keyword.txt");
    ofstream outputFile("variable_output.txt");
   

   while (inputFile>>st){
     if (isKeyword(st)) {
        cout << st << " is a keyword." << endl;
        outputFile << st << " is a keyword" << endl;
    } else if (isOperator(st)) {
        cout << st << " is an operator." << endl;
        outputFile << st << " is a operator" << endl;
    } else if (isVariable(st)) {
        cout << st << " is a variable." << endl;
        outputFile << st << " is a variable" << endl;
        //Output data will save output_varible.txt file
    } 

   }
inputFile.close();
outputFile.close();
    return 0;
}