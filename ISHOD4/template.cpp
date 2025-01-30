#include <iostream>
#include <string>

// jedan nepoznati tip
template <typename T>
T getMax(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

// vise nepoznatih tipova
template <typename T, typename U>
T Multiply(T value, U multiplier)
{
    return value * multiplier;
}

// klasa
template <typename T>
class Container
{
private:
    T data;

public:
    Container(T value) : data(value) {}

    T getValue() const
    {
        return data;
    }

    Container<T> operator+(const Container<T> &other)
    {
        return Container<T>(data + other.data);
    }
};

int main()
{
    std::cout << "Max: " << getMax(10, 20) << std::endl;

    std::cout << "Pomnozi: " << Multiply(10.5, 2) << std::endl;

    Container<int> a(5);
    Container<int> b(3);
    Container<int> c = a + b;
    std::cout << "Sum: " << c.getValue() << std::endl;

    return 0;
}