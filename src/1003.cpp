#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
using namespace std;
void isRight(string *answer, int length);
int main()
{
    int number;
    cin >> number;
    string answer[number];
    for (int i = 0; i < number; i++)
    {
        cin >> answer[i];
    }
    isRight(answer, number);
}
void isRight(string *answer, int length)
{
    int positionP, positionA, positionT;
    for (int row = 0; row < length; row++)
    {
        size_t found = answer[row].find_first_not_of("PAT");
        if (found != answer[row].npos)
        {
            cout << "NO" << endl;
        }
        else
        {
            positionP = answer[row].find_first_of('P');
            positionT = answer[row].find_first_of('T');
            positionA = answer[row].find_first_of('A');
            if (positionP == answer[row].npos || positionT == answer[row].npos || positionA == answer[row].npos)
            {
                cout << "NO" << endl;
                continue;
            }
            if (positionP != answer[row].find_last_of('P') || positionT != answer[row].find_last_of('T') || positionP > positionT)
            {
                cout << "NO" << endl;
                continue;
            }
            if (positionP * (positionT - positionP - 1) == answer[row].length() - positionT - 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return;
}