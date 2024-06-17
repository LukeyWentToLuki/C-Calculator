#include <iostream>
#include <sstream>
#include <string>

int main() {
    char op;
    double num1, num2;

    std::cout << "Enter an expression (e.g., 3 + 4): ";
    std::cin >> num1 >> op >> num2;

    double result;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cerr << "Error: Division by zero!" << std::endl;
                return 1;
            }
            break;
        default:
            std::cerr << "Error: Invalid operator!" << std::endl;
            return 1;
    }

    std::cout << "Result: " << result << std::endl;
    return 0;
}
