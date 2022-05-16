#include <cstdio>

enum class Operation { Add, Subtract, Multiply, Divide };

struct Calculator {
  Operation op;
  Calculator(Operation operation) {
    op = operation;
  }
  int calculate(int a, int b) {
    switch(op) {
        case Operation::Add: {
          return a + b;
        } break;
        case Operation::Subtract: {
          return a - b;
        } break;
        case Operation::Multiply: {
          return a * b;
        } break;
        default: {
          return a / b;
        }
    }
  }
};
int main() {
  Calculator add_calc(Operation::Add);
  printf("1 + 2 = %d\n", add_calc.calculate(1, 2));
}