
#include <iostream>
#include <string>
using namespace std;
// creer une foction permet de afficher date et heure separez
void date(string s)
{
    if ( s.length() != 12 )
        cout << "Chaine invalide." << endl;
    else
    {
        cout  << s.substr(0,2) << "/" << s.substr(2,2) << "/" << s.substr(4,4)<< " " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
    }
}

int main()
{
    string DATE("300520011342");
    date(DATE);
}
