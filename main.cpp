#include <iostream>

using namespace std;

int main()
{
    int a, i, sum=0;
    for (i=1;i<=3;i++)
    {
        std::cin >> a;
        if (a>=0) sum +=a;
    }
    std::cout << sum << endl;
    return 0;
}