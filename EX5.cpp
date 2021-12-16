#include<iostream>
#include<set>
using namespace std;
    set<int> myset;
    set<int>::iterator itr;
    bool recherche(int a)
    {
        for (itr = myset.begin(); itr != myset.end(); itr++)
        {
            if(a==*itr){return true;};
        }
        return false;
    };

int main()
{
    int began;
    int ending;
    int a;
    int b;
    int i;
    for ( i = 1; i < 101; i++)
    {
        myset.insert(i);
    }
    cout<<"fait entrer une valeur s'ill existe il va returner 1 sinn 0"<<endl;
    cin>>a;
    cout<<recherche(a)<<endl;
    //erase our set to modify it
    myset.erase(myset.begin(),myset.end());

    cout<<"fait entrer une valeur de debut"<<endl;
    cin>>began;
    cout<<"fait entrer une valeur de la fin"<<endl;
    cin>>ending;
     for ( i = began; i < ending+1; i++)
    {
        myset.insert(i);
    }

     cout<<"fait entrer une valeur s'ill existe il va returner 1 sinn 0"<<endl;
        cin>>b;
    cout<<recherche(b)<<endl;
    //i didnt understand question 4 :')

};
