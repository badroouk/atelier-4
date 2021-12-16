
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<string> myliste;   //déclaration une liste
    string n;
    int i;
    cout<<"inserez le nom,prenom,age. inserez break pour terminer :"<<endl;
    for (i = 0;; i++)
    {
    cin>>n;
    if(n=="break")
    {
        break;
    }
    myliste.push_back(n);
    }
    list<string>::iterator it;
    myliste.sort();
    it=myliste.begin();
    cout<<"votre liste  est : ";
    for (it;it!=myliste.end();it++)
    {
            cout<<*it<<"  ";
    }
    return 0;
}
