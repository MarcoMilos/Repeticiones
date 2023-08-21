#include <iostream>

// version 1 de "squats"
// void squats(int n)
// {
//     if(n == 0)
//     {
//         return;
//     }
//     else
//     {
//         std::cout << "squat" << std::endl;
//         squats(n-1);
//     }
// }

// version 2 de "squats"
void squats(int n)
{
    if(n > 0)
    {
        std::cout << "squat" << std::endl;
        squats(n-1);
    }
}

// metodo fibonacchi
int fibo(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
    
}

// Es importante recordar tener un "caso base" y un "caso recursivo" porque, de no tener un "caso base", se vuelve infinito
// int factorial (int n)
// {
//     // caso base
//     if(n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         // caso recursivo
//         return n * factorial(n-1);
//     }
// }

int main()
{
    // void squats(int n);
    // {
    //     int i = 0;
    //     do
    //     {
    //         std::cout << "squats" << std::endl;
    //         i++;
    //     } while (i < n);
    // }
    
    // std::cout << factorial(3) << std::endl;
    // squats(5);
    std::cout << fibo(3) << std::endl;
    return 0;
}