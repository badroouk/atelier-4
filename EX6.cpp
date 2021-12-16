#include <iostream>
using namespace std;
class Test{
public:
 static int tableau[] ;
public :
 static int division(int indice, int diviseur){
        if (diviseur == 0 )
			throw "Division par zero !!";
	else if(indice<0 || indice>=10)
	        throw "l'indice invalide";
 return tableau[indice]/diviseur;
 }
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
 int x, y;
 cout << "Entrez l’indice de l’entier à diviser: " << endl;
 cin >> x ;
 cout << "Entrez le diviseur: " << endl;
 cin >> y ;
 try{
        cout << "Le resultat de la division est: "<< endl<<Test::division(x,y) <<endl;;
	 }catch(const char* msg){
		cerr<<msg;
	}

 return 0;
}
