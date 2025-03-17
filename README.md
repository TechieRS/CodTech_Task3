# Lexical Analyzer in C

This C program performs **lexical analysis** on a given input file. It identifies **keywords, identifiers, and operators** in the file.

## Features
- Reads a source code file.
- Identifies **keywords** (e.g., `int`, `float`, `if`, `else`, `while`, `return`, `void`).
- Identifies **identifiers** (variable and function names).
- Recognizes **operators** (`+`, `-`, `*`, `/`, `=`, `<`, `>`).

## How to Use
1. **Compile the program** using a C compiler:
    ```bash
    gcc lexical_analyzer.c -o lexical_analyzer
    ```
2. **Run the executable**:
    ```bash
    ./lexical_analyzer
    ```
3. **Provide an input file** containing code for analysis.
4. **View the lexical analysis output**.

## Code Structure
- `isKeyword()`: Checks if a given word is a keyword.
- `isOperator()`: Checks if a character is an operator.
- `lexicalAnalyzer()`: Reads a file, tokenizes its content, and classifies words as **keywords, identifiers, or operators**.

## Example Input (input.txt)
```
int main() {
    int a = 5;
    float b = 3.14;
    if (a > b) {
        return a;
    }
    return 0;
}
```

## Example Output
```
Enter the input file name: input.txt
Lexical Analysis:
Keyword: int
Identifier: main
Operator: (
Operator: )
Operator: {
Keyword: int
Identifier: a
Operator: =
Identifier: 5
Operator: ;
Keyword: float
Identifier: b
Operator: =
Identifier: 3.14
Operator: ;
Keyword: if
Operator: (
Identifier: a
Operator: >
Identifier: b
Operator: )
Operator: {
Keyword: return
Identifier: a
Operator: ;
Operator: }
Keyword: return
Identifier: 0
Operator: ;
Operator: }
```

## License
This project is open-source and available under the MIT License.

## Author
- GitHub: [GitHub](https://github.com/TechieRS)

Feel free to contribute or report issues!

