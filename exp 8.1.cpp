
#include <iostream>
using namespace std;
class Distance {
public:
int feet, inch;

Distance(int f, int i)
{
this->feet = f;
this->inch = i;
}

void operator-()
{
feet--;
inch--;
cout << "\nFeet & Inches (Decrement): " << feet << " " << inch;
}
};

int main()
{
Distance d1(8, 9);
cout << "Name: Shubhada Tarlekar\n";
    cout << "Div: B\n";
    cout << "Roll no.: 95\n";
-d1;
return 0;
}

