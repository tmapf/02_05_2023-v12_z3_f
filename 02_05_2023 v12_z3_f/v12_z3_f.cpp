#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, max = 0, k = 0, j = 0;
    cout << "insert number of items in the list: ";
    cin >> n;
    vector <int> a(n);
    vector <int> pos(0);
    cout << "insert items of the list: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)//max value and position
        if (max <= a[i]) {
            max = a[i];
            k = i;
        }
    for (int i = 0; i < n; i++) {//position of all max values
        if (a[i] == max) {
            pos.push_back(i);
        }
    }
    for (int m = 0; m < pos.size(); m++) {//insert in the original vect
        for (int i = 0; i < k; i++)
            a.insert(a.begin() + k*m+pos[j], max);
        j++;
    }

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }
    return 0;
}
