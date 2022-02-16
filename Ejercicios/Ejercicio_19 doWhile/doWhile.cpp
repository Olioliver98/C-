#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 1, b = 2;

    while (a > b) {
        cout<<"a > b" <<endl;
        break;
    }
    
    do {
        cout<<"a > b";
        break;
    } while (a > b);

    return 0;

}
