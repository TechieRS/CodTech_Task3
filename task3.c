#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// List of keywords
const char* keywords[] = {"int", "float", "if", "else", "while", "return", "void"};
const int numKeywords = 7;

// Function to check if a word is a keyword
int isKeyword(char* word) {
    for (int i = 0; i < numKeywords; i++) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1; // It is a keyword
        }
    }
    return 0; // Not a keyword
}

// Function to check if a character is an operator
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=' || ch == '<' || ch == '>');
}

// Function to perform lexical analysis on an input file
void lexicalAnalyzer(const char* filename) {
    FILE* file = fopen(filename, "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char ch, word[50];
    int index = 0;
    
    printf("Lexical Analysis:\n");
    
    while ((ch = fgetc(file)) != EOF) {
        if (isalnum(ch)) { // If character is part of an identifier or keyword
            word[index++] = ch;
        } else {
            if (index > 0) { // End of a word
                word[index] = '\0';
                index = 0;
                
                if (isKeyword(word)) {
                    printf("Keyword: %s\n", word);
                } else {
                    printf("Identifier: %s\n", word);
                }
            }
            
            if (isOperator(ch)) { // If character is an operator
                printf("Operator: %c\n", ch);
            }
        }
    }

    fclose(file); // Close the file
}

int main() {
    char filename[50];
    printf("Enter the input file name: ");
    scanf("%s", filename);
    lexicalAnalyzer(filename); // Perform lexical analysis on the file
    return 0;
}