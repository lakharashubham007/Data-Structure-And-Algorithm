#include <iostream>
using namespace std;

int main()
{

    char ch[5] = {'a', 'e', 'i', 'o', 'u'};
    cout << ch[0] << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << "printing all vowel --Sucessfully!" << endl;

    cout << endl
         << "Evething is fine " << endl;
    return 0;
}