#include <iostream>

using namespace std;

int main() {
   int a, b, total, input;
   input = 10;
   for (a = 1; a <= input; a += 2) {
            total = 1;
            for (b = 1; b <= a; b += 2) {
                if (b != 1)
                    cout << "   * ";
                cout << b;

                total = total * b;
            }

            cout << " = " << total << endl;
        }
//        return 0;
}
