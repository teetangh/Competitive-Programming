#include <iostream>
// #include "solution.h"
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c)
{

    for (int i = 0; input[i] != '\0'; i++)
    {
        while (input[i] == c && input[i] != '\0')
        {
            for (int j = i; input[j] != '\0'; j++)
            {
                input[j] = input[j + 1];
            }
        }
    }
}

int main()
{
    char input[1000];
    cin.getline(input, 1000);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(input, c);
    cout << input << endl;
}
