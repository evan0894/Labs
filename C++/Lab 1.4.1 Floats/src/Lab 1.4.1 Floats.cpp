#include <iostream>
using namespace std;
int main(void) {
float pi = 3.14159265359;
float x,y;
cout << "Enter value for x: ";
cin >> x;
float a =(x*x)/((pi*pi)*((x*x)+0.5));
float b=1+((x*x)/((pi*pi)*(((x*x)-0.5)*((x*x)-0.5))));
y=a*b;
cout << "y = " <<y;
return 0;
}
