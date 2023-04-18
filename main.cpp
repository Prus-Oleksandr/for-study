#include <iostream>
using namespace std;
class ComplexNumber {
private:
    float real;
    float imaginary;

public:
    ComplexNumber() : real(0.0f), imaginary(0.0f) {}
    ComplexNumber(float realPart, float imaginaryPart) : real(realPart), imaginary(imaginaryPart) {}

    float getReal() const {
        return real;
    }

    void setReal(float realPart) {
        real = realPart;
    }

    float getImaginary() const {
        return imaginary;
    }

    void setImaginary(float imaginaryPart) {
        imaginary = imaginaryPart;
    }

    void print() const {
        cout << "(" << real << "+i" << imaginary << ")";
    }
};

ComplexNumber frd(const ComplexNumber& num1, const ComplexNumber& num2) {
    float realPart = num1.getReal() + num2.getReal();
    float imaginaryPart = num1.getImaginary() + num2.getImaginary();
    return ComplexNumber(realPart, imaginaryPart);
}



int main() {
    ComplexNumber complexNum1;
    ComplexNumber complexNum2(1.5f, 2.5f);

    cout << "Complex Number 1: ";
    complexNum1.print();
    cout << endl;

    cout << "Complex Number 2: ";
    complexNum2.print();
    cout << endl;

    ComplexNumber sum = frd(complexNum1, complexNum2);
    cout << "Sum: ";
    sum.print();

    return 0;
}
