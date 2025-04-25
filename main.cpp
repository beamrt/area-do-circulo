#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double raio, n, area;

    cin >> raio;
    n= 3.14159;
    area = n * (raio * raio);

    cout << "A=" << fixed << setprecision(4) << area << endl;
    return 0;
}
