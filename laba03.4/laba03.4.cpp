#include <iostream> 

using namespace std;

int main()

{

	double R; // вхідний аргумент 

	double x; // вхідний аргумент 

	double y; // вхідний параметр 

	cout << "R = "; cin >> R;

	cout << "x = "; cin >> x;

	cout << "y = "; cin >> y;



	// розгалуження в повній формі 

	if ((y <= R && y >= 0 && x >= -R && x <= 0 && R * R <= (x + R) * (x + R) + (y - R) * (y - R)) || (y >= -R && y <= 0 && x >= 0 && x <= R && R * R <= (x - R) * (x - R) + (y + R) * (y + R)) || (x >= 0 && x <= R && y <= R && y >= 0) || (x >= -R && x <= 0 && y <= 0 && y >= -R))

		cout << "yes" << endl;

	else

		cout << "no" << endl;

	cin.get();

	return 0;

}