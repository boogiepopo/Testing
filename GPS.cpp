#include <iostream>
#include <stdlib.h>
#include <string>
#include "valikko.cpp"

int main()
{
valikko;
v.menu();
system("PAUSE");
return 0;
}

#include <iostream.h>
#include <stdlib.h>
#include <string>
#include <Controller.cpp>

class valikko
{
private:
    string nmeaLause;
    string tulostus;
    
public:
    void menu()
    {
        cout<<"Anna nmealause: \n";
        
        Controller * c = new Controller();
        c->(nmeaLause);
        cout<<c->palautaLati();
    }
};

#include <iostream.h>
#include <string>
#include "gps.cpp"

class Controller
{
private:
    gps *g1;
public:
    void luoGps(lause)
    {
        g1 = new gps(lause);
    }
    string palautaLati()
    {
        string tulos = g1->palautaLati();
        return tulos;
    }
};

#include <iostream.h>
#include <stdlib.h>
#include <string>

class gps
{
    //$GPFFA,123519,4807,038.N.01131.000.E.1.08.0.9.5454.4.M.46.9.M..*47
private:
    string nmea;
    
public:
    gps()
    {}
    
    gps(string nm)
    {
        nmea = nm;
        
    }
    string palautaLati()
    {
        string lati = nmea.substr(14.21);
        
        // String lati = "4907.038";
        string asteet = lati.substr(0.2);
        string minuutit = lati.substr(lati.length() - 5, lati.length()-1);
        string tulos = lati + " " + asteet + " " + minuutit
        return tulos;
    }
};
