#include <iostream>

#include "number.h"

class A {
public:
    static int s_var;
    A() { s_var++; }
};

int A::s_var = 0;

struct number {
    int a;
    bool operator>(const number& operand) const {
        return this->a > operand.a;
    }
};

template<typename Temp> Temp Max(const Temp& a, const Temp& b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

template<typename T> class TestClass {
public:
    static int s_var;
    void Say() { std::cout << "Hello!\n"; s_var++; }
    int GetSVar() { return s_var; }
};

template<typename T> int TestClass<T>::s_var = 0;

template<> class TestClass<float> {
public:
    void Say() { std::cout << "Hello, float!\n"; }
};

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

    Number<int> number_1{ 1 };
    Number<double> number_2{ 2.3 };

    std::cout << number_1.getNumber() << " " << number_2.getNumber() << std::endl;

    TestClass<int> tc_int, tc_int_2;
    TestClass<double> tc_double;
    TestClass<float> tc_float;

    tc_int.Say();
    tc_int_2.Say();
    tc_double.Say();
    tc_float.Say();

    std::cout << tc_int.GetSVar() << std::endl;
    std::cout << tc_double.GetSVar()<<std::endl;

    A s_a, s_a_1, s_a_2;
    std::cout << A::s_var << std::endl;

    return 0;
}
