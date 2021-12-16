#include <iostream>
#include <cmath>

using namespace std;

class complexe {
    double Re;
    double Img;

public:
    complexe(double a = 0, double b = 0)
    {
        Re = a;
        Img = b;
    }
    void afficher()
    {
    	cout << Re;
    	if (Img>=0)
    	cout << " + ";
    	cout <<Img << "i" << endl;
    }
    complexe operator+(complexe a)
    {
        complexe s;
        s.Re = Re + a.Re;
        s.Img = Img + a.Img;
        return s;
    }
    complexe operator -(complexe a)
    {
        complexe s;
        s.Re = Re - a.Re;
        s.Img = Img - a.Img;
        return s;
    }
    complexe operator *(complexe a)
    {
        complexe s;
        s.Re = Re*(a.Re)-Img*(a.Img);
        s.Img = Img*(a.Re) + (a.Img)*Re;
        return s;
    }
};
int main()
{
    complexe a(1, 2), b(4, 3), c;
    cout << "Complexe A = ";
    a.afficher();

    cout << "A = ";
    a.afficher();

    cout << "B = ";
    b.afficher();

    cout << "A + B = ";
    c = (a + b);
	c.afficher();

    cout << "A - B = ";
    c = (a - b);
	c.afficher();
	 cout << "A * B = ";
    c = (a * b);
	c.afficher();
}

