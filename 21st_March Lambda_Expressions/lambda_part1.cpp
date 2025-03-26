//By default, variables captured by value in a lambda are const.Use //the mutable keyword to modify them.
#include iostream
using namespace std;

int main() {
    int x = 10;

     Capture x by value and make the lambda mutable
    auto lambda = [x]() mutable {
        x += 5;  Modify x (allowed because of mutable)
        stdcout  x inside lambda   x  stdendl;
        };

    lambda();  Call the lambda
    stdcout  x outside lambda   x  stdendl;  x is unchanged
    return 0;
}


int main() {
    int a = 2, b = 3;
    auto lam = [a, &b]()mutable {a += 2; cout  a  endl;};
    lam();
    cout  a;
    return 0;
}
