/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector
#include <cmath>


int isPrime(int n)
{
    if (n <= 1) return 0;
    for(int baubau = 2; baubau <= std::sqrt(n); ++baubau)
    {
        if (n % baubau == 0) return 0;
    }
    return 1;
}

std::vector<int> primeList(int n)
{
    std::vector<int> primes;
    for (int baubau = 2; baubau <= n; ++baubau)
    {
        if (isPrime(baubau) == 1)
        {
            primes.push_back(baubau);
        }
    }
    return primes;
}

std::vector<double> quadForm(double a, double b, double c)
{
    std::vector<double> roots;
    double discriminant = b * b - 4 * a * c;
    if (discriminant >= 0)
    {
        double sqrtDiscriminant = std::sqrt(discriminant);
        roots.push_back((-b + sqrtDiscriminant) / (2 * a));
        roots.push_back((-b - sqrtDiscriminant) / (2 * a));
    }
    return roots;
}


int main()
{
    // Complete your homework here
    std::cout << "isPrime(11): " << (isPrime(11) == 1 ? "True" : "False") << "\n";
    std::cout << "isPrime(27): " << (isPrime(27) == 1 ? "True" : "False") << "\n";

    std::vector<int> primes = primeList(20);
    std::cout << "primeList(20): ";
    display(primes);

    std::vector<double> roots = quadForm(1, 9, 14);
    std::cout << "quadForm(1, 9, 14): ";
    display(roots);

    
    return 0;
}
