#include <iostream>

using namespace std;

int main(int argc, char* argv) {
	int x, y;
	int q;

	cout << "Please enter x and y" << endl;
	cout << "x: ";
	cin >> x;

	cout << "y: ";
	cin >> y;

	(x < 0) ? (y < 0) ? q=3 : q=2 : (y < 0) ? q=4 : q=1;

	cout << "Quadrant: " << q << endl;


	return EXIT_SUCCESS;
}