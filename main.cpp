#include <iostream>

// Es importante recordar tener un "caso base" y un "caso recursivo" porque, de no tener un "caso base", se vuelve infinito
int factorial (int n)
{
    // caso base
    if(n == 0)
    {
        return 1;
    }
    else
    {
        // caso recursivo
        return n * factorial(n-1);
    }
};

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
    
    std::cout << factorial(3) << std::endl;
    return 0;
}