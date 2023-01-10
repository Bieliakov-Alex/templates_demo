#pragma once

template <typename T> class Number {
public:
    explicit Number(const T& arg);
    T getNumber() const;
private:
    T var;
};

template<typename T>
Number<T>::Number(const T& arg) : var{ arg }
{
}

template<typename T>
T Number<T>::getNumber() const
{
    return var;
}
