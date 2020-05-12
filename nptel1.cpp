#include <iostream>
using namespace std;

class A {

    const int id;
    public:
	/*A(){
      id=0;
	}*/

	A(const int x)
    {
      id=x;
    } // Constructor
    void display() { cout << id; }

}; // End of the class

int main() {

    int val;
    cin>> val;
    A ob(val);

    ob.display();

    return 0;
}
