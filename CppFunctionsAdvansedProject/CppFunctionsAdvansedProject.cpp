#include <iostream>

//int Sum(int a, int b)
//{
//    return a + b;
//}
//
//int Sum(int a, int b, int c)
//{
//    std::cout << "integer sum\n";
//    return a + b + c;
//}
//
//float Sum(float a, float b)
//{
//    std::cout << "float sum\n";
//    return a + b;
//}

template <typename T1, typename T2>
auto Sum(T1 a, T2 b)
{
    return a + b;
}

template <typename T>
void ArrayPrint(T* array, int size)
{

}


int main()
{
    float x{ 1.5 }, y{ 4.8 };
    int n{ 30 }, m{ 50 };

    std::cout << Sum<int, int>(n, 20.8) << "\n";
}
