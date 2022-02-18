#include <iostream>
#include <conio.h>
using namespace std;
class fibo
{
private:
    int a, b, c;

public:
    fibo()
    {
        a = 0;
        b = 1;
        c = a + b;
    }
    void displayab()
    {
        cout << a << endl;
        cout << b << endl;
    }
    void operator++()
    {
        a = b;
        b = c;
        c = a+b;
    }
    void display()
    {
        cout << c << endl;
    }
};
int main()
{
    fibo F;
    int i, n;
    cout << "enter the number you want to until where you want to find the seried" << endl;
    cin >> n;
    F.displayab();
    for (i = 0; i < n; i++)
    {
        ++F;
        F.display();
    }
    return 0;
    getch();
}