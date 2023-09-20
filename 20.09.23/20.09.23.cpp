//Task 1

#include <iostream>
#define is_even(x) ((x % 2) == 0)
using namespace std;

int main() {
    if (is_even(6)) {
       cout << "even num" << "\n";
    }
    else {
        cout << "odd num" << "\n";
    }

    if (is_even(5)) {
        cout << "even num" << "\n";
    }
    else {
        cout << "odd num" << "\n";
    }

    return 0;
}



//Task 2

#include <iostream>
#define SUM(n) ((n * (n + 1)) / 2)
using namespace std;

int main() {
    int n = 10; 
    int sum = SUM(n);
    cout << "From 1 to n equal to " << n << sum << "\n";

    return 0;
}

// Task 3

#include <iostream>
#define pow(x, y) (pow(x, y))
using namespace std;

int main() {
	int a = 10;
	int b = 15;

	cout << pow(a, b) << endl;

	return 0;
}


//Task 4

#include <iostream>
using namespace std;

void star(int N) 
{
    if (N <= 0) {

        return; 
    }
    cout << "*";
    star(N - 1);
}

int main() {
    int N;
    cout << "Type amount of stars: ";
    cin >> N;

    if (N <= 0) {
        cout << "ERROR!" << "\n";
    }
    else {
        cout << "Stars: ";
        star(N);
        cout << "\n";
    }

    return 0;
}




//Task 5

#include <iostream>
using namespace std;

void num(int n) 
{
    if (n <= 0) {
        return;
    }

    cout << n << " ";
    num(n - 1);
}

int main() {
    int n = 20;
        cout << n << "\n";
    num(n);
    cout << "\n";

    return 0;
}






