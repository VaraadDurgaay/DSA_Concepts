//CODE AND OUTPUT
#include <iostream>
using namespace std;

class solve {
public:
    int n1, i1; // Real and imaginary parts for the first complex number

    void read(int x, int y) {
        n1 = x;
        i1 = y;
        cout << "First read successful" << endl;
    }
};

class nexto : public solve {
protected:
    int n2, i2;
public:
    void readAgain(int x, int y) {
        n2 = x; // Store value in n2
        i2 = y; // Store value in i2
        cout << "Second read successful" << endl;
    }

    void add() {
        cout << "Sum of real: " << (n1 + n2) << endl;
        cout << "Sum of imaginary: " << (i1 + i2) << endl;
    }

    void sub() {
        cout << "Subtraction of real: " << (n1 - n2) << endl;
        cout << "Subtraction of imaginary: " << (i1 - i2) << endl;
    }

   
    void mult() {
        int realPart = (n1 * n2) - (i1 * i2);
        int imaginaryPart = (n1 * i2) + (i1 * n2);
        cout << "The multiplication is: " << realPart << " + " << imaginaryPart << "i" << endl;

    }
    void div() {

       

        int denominator = (n2 * n2) + (i2 * i2);
        int realPart = (n1 * n2 + i1 * i2) / denominator;

        int imaginaryPart = (i1 * n2 - n1 * i2) / denominator;
        cout << "The division is: " << realPart << " + " << imaginaryPart << "i" << endl;

    }
};

int main() {
    solve c1;
    c1.read(5, 3);

    nexto c2;
    c2.readAgain(5, 7);

   
    c2.add();
    c2.sub();
    c2.mult();
    c2.div();

    return 0;
}