#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> maliste;    //déclaration une liste
    //déclaration des variables
    int n;
    int i;
    cout<<"inserez les nombres a trier "<<endl;
    for (i = 0;; i++)
    {
    cin>>n;
    if(n==0)
    {
        break;
    }
    maliste.push_back(n);
    }
    list<int>::iterator it;
    maliste.sort();
    it=maliste.begin();
    cout<<"votre liste de nombre triee est : ";
    for (it;it!=maliste.end();it++)
    {
            cout<<*it<<"  ";
    }
return 0 ;
}
