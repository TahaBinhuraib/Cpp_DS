#include <iostream>
using namespace std;

void reverse(char *c, int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        char temp = c[i];
        c[i] = c[j];
        c[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    char c[50];
    cout << "Enter string you would like to reverse: " << endl;
    cin.getline(c, sizeof(c));
    cout << "original string: " << c << endl;
    reverse(c, strlen(c));
    cout << "reversed: " << c << endl;
    cout << "Done!" << endl;
    return 0;
}