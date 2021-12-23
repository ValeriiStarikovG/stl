#include "lib.h"
#include <iostream>#include "lib.h"
#include <iostream>
using namespace std;

void printVector(const std::vector<int>& v)
{
    for (auto e : v)
    {
        cout << e << " ";
    }
}

template<class T_it>
void printRange(T_it begin, T_it end)
{
    for (auto it = begin; it != end; it++)
    {
        cout << *it << " ";
    }
}



using namespace std;

void printVector(const std::vector<int>& v)
{
    for (auto e : v)
    {
        cout << e << " ";
    }
}

template<class T_it>
void printRange(T_it begin, T_it end)
{
    for (auto it = begin; it != end; it++)
    {
        cout << *it << " ";
    }
}


