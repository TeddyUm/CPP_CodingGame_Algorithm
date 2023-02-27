#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse
    int result = 10000;
    vector<int> vTemp;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        vTemp.push_back(t);
    }

    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        if (vTemp[i] < 0)
        {
            temp = -vTemp[i];
        }
        else
        {
            temp = vTemp[i];
        }

        if (temp < abs(result))
        {
            result = vTemp[i];
        }
        else if (temp == abs(result))
        {
            if (vTemp[i] > 0)
            {
                result = vTemp[i];
            }
        }
    }

    if (result > 5526 || result < -273)
    {
        result = 0;
    }
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << result << endl;
}