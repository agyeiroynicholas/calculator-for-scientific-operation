#include <iostream>
#include <cmath>

void arithmetic() {
    int op = 0;
    float A = 0;
    float B = 0;

    std::cout << "Select operation:\n";
    std::cout << "[1] Addition\n";
    std::cout << "[2] Subtraction\n";
    std::cout << "[3] Multiplication\n";
    std::cout << "[4] Division\n";
    std::cout << "[5] Modulo\n";

    std::cin >> op;

    std::cout << "Enter the first number: ";
    std::cin >> A;

    std::cout << "Enter the second number: ";
    std::cin >> B;

    std::cout << "Result: ";

    switch(op){
        case 1:
            std::cout << (A + B);
            break;
        case 2:
            std::cout << (A - B);
            break;
        case 3:
            std::cout << (A * B);
            break;
        case 4:
            if (B != 0) {
                std::cout << (A / B);
            } else {
                std::cout << "Error: Division by zero is not allowed.";
            }
            break;
        case 5:
            std::cout << std::fmod(A, B);
            break;
        default:
            std::cout << "Invalid operation";
            break;
    }

    std::cout << std::endl;
}

void trigonometric() {
    int op = 0;
    float val = 0.0;

    std::cout << "Select:\n";
    std::cout << "[1] Sine\n";
    std::cout << "[2] Cosine\n";

    std::cout << "Option: ";
    std::cin >> op;

    std::cout << "Enter the value: ";
    std::cin >> val;

    std::cout << "Result: ";
    if (op == 1) {
        std::cout << std::sin(val);
    } else if (op == 2) {
        std::cout << std::cos(val);
    } else {
        std::cout << "Invalid operation";
    }

    std::cout << std::endl;
}

void exponential() {
    float base = 0.0;
    float exp = 0.0;

    std::cout << "Enter the base: ";
    std::cin >> base;

    std::cout << "Enter the exponent: ";
    std::cin >> exp;

    std::cout << "Result: " << std::pow(base, exp) << std::endl;
}

void logarithmic() {
    float value = 0.0;

    std::cout << "Enter the value to calculate the natural logarithm: ";
    std::cin >> value;

    std::cout << "Result: " << std::log(value) << std::endl;
}

int main() {
    int sel = 0;
    char choice = 'y';

    std::cout << "Advanced Calculator\n";

    std::cout << "[1] Arithmetic\n";
    std::cout << "[2] Trigonometric\n";
    std::cout << "[3] Exponential\n";
    std::cout << "[4] Logarithmic\n";
    std::cout << "[5] Modulo\n";

    while(choice == 'y'){
        std::cout << "Enter the type of operation you want to calculate: ";
        std::cin >> sel;

        switch(sel){
            case 1:
                arithmetic();
                break;
            case 2:
                trigonometric();
                break;
            case 3:
                exponential();
                break;
            case 4:
                logarithmic();
                break;
            case 5:
                int dividend, divisor;
                std::cout << "Enter the dividend: ";
                std::cin >> dividend;
                std::cout << "Enter the divisor: ";
                std::cin >> divisor;
                std::cout << "Result: " << (dividend % divisor) << std::endl;
                break;
            default:
                std::cout << "Invalid Operation";
                break;
        }

        std::cout << "Do you want to continue? (y/n) ";
        std::cin >> choice;

        if(choice == 'n'){
            break;
        }
    }

    return 0;
}
