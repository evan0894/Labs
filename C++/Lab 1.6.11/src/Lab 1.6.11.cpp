#include <iostream>
using namespace std;
int main(void) {
bool answer;
int value;
cout << "Enter a value: ";
cin >> value;

answer = (value > -1 && value < 10);
answer = answer || (value * 2 < 20 && value -2 > -2);
answer = answer || (value - 1 > 1 && value / 2 <10);
answer = answer || (value == 111);

cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
return 0;
}
