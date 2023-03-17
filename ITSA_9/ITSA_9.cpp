#include <iostream>
using namespace std;

int main()
{
    int x, i, ans = 0;

    cin >> x;

    for (i = 1; i <= x; i++) {

        if (i % 3 == 0) {
            ans = ans + i;
        }
    }

    cout << ans << endl;

}


