//CSCI251 - Exam - Q3
#include <iostream>
using namespace std;

double division(int a, int b) {
   return (a/b);
}

int main () {
    double x, y;

    do{
        cout << "Enter dividend (0 to stop the programme): ";
        cin >> x;
        cout << "Enter divisor: ";
        cin >> y;
        double z = division(x, y);
        cout << z << endl;
    }while(x != 0);
   
    return 0;
}
