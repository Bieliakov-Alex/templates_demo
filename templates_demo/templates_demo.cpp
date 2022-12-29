#include <iostream>

struct number {
    int a;
    bool operator>(const number& operand) const {
        return this->a > operand.a;
    }
};

template<typename T> T Max(const T& a, const T& b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

/*int Max(const int& a, const int& b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

number Max(const number& a, const number& b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}*/

int main()
{
    int a = 2;
    int b = 3;

    number operand_a, operand_b;

    operand_a.a = 3;
    operand_b.a = 2;

    std::cout << Max<int>(a, b) << std::endl  << Max<number>(operand_a, operand_b).a << std::endl;

    return 0;
}
