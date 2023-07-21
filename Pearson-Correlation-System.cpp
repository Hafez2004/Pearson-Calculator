#include "Pearson.h"

#include <iostream>
#include <sstream>
#include <windows.h>
#include <math.h>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define start int main()
#define infinite while(true)
#define space "\t\t"
#define elif else if
#define br '\n'
#define bye return 0
#define ll long long
#define ld long double
#define dl double
#define fl float
#define str string
#define red system("color 04")
#define green system("color 02")
#define cls system("cls")
const float pi = acos(-1);
using namespace std;

void intro() {
    cout << "                                    *         *      *         *\n";
    cout << "                                ***          **********          ***\n";
    cout << "                             *****           **********           *****\n";
    cout << "                           *******           **********           *******\n";
    cout << "                         **********         ************         **********\n";
    cout << "                        ****************************************************\n";
    cout << "                       ******************************************************\n";
    cout << "                      ********************************************************\n";
    cout << "                      ********************************************************\n";
    cout << "                      ********************************************************\n";
    cout << "                       ******************************************************\n";
    cout << "                        ********      ************************      ********\n";
    cout << "                         *******       *     *********      *       *******\n";
    cout << "                           ******             *******              ******\n";
    cout << "                             *****             *****              *****\n";
    cout << "                                ***             ***              ***\n";
    cout << "                                  **             *              **\n";
    Sleep(3000);
    cls;
}

start
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// Code Here
    intro();
    infinite
    {
        cout << space << "\t[Pearson Calculator]\n";
        vector<fl> Xdata, Ydata; fl x, y;
        str input_x, input_y, done;
        cout << space << " Field X : ";
        getline(cin, input_x);
        cout << space << " Field Y : ";
        getline(cin, input_y);
        stringstream s1(input_x);
        stringstream s2(input_y);

        while (s1 >> x)
        {
            Xdata.push_back(x);
            s1.ignore();
        }

        while (s2 >> y)
        {
            Ydata.push_back(y);
            s2.ignore();
        }

        if (Xdata.size() == Ydata.size())
        {
            Pearson res(Xdata, Ydata);
            fl pos = abs(res.Get_Coefficient());
            cout << space << "Correlation Coeficient = " << res.Get_Coefficient() << br;
            cout << space << "           Class       = ";
            if (pos >= 0.8 && pos <= 1.0)
                cout << "Very Strong\n";
            elif(pos >= 0.6 && pos < 0.8)
                cout << "Strong\n";
            elif(pos >= 0.4 && pos < 0.6)
                cout << "Moderate\n";
            elif(pos >= 0.2 && pos < 0.4)
                cout << "Weak\n";
            elif(pos >= 0.0 && pos < 0.2)
                cout << "Very Weak\n";
            else
                cout << "Not Correlated\n";
            cout << "@: ";
            getline(cin, done);
            cls;
        }

        else
        {
            cout << space << "\t[Size Error]\n";
            Sleep(3000);
            cls;
        }
	}
	bye;
}