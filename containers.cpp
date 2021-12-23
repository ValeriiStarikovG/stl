#include "lib/lib.h"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    cout << "---main---" << endl;

    vector<int> v = { 1, 2, 3, 4, 5 };

    printVector(v);
    cout << endl;

    printRange(v.begin(), v.end());
    cout << endl;

    cout << endl << endl;
    return 0;
}
