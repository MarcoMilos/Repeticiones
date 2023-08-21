#include <iostream>

int main()
{
    int n = 6;
    void squats(int n);
    {
        int i = 0;
        do
        {
            std::cout << "squats" << std::endl;
            i++;
        } while (i < n);
        
    }
    return 0;
}