string losujimie()
{
    switch(rand()%28)
    {
        case 0: return "Jan";
        case 1: return "Franciszek";
        case 2: return "Stefan";
        case 3: return "Andrzej";
        case 4: return "Karol";
        case 5: return "Micha³";
        case 6: return "Maksymilian";
        case 7: return "Janusz";
        case 8: return "Alfred";
        case 9: return "Józef";
        case 10: return "Kacper";
        case 11: return "Bart³omiej";
        case 12: return "Marek";
        case 13: return "Dawid";
        case 14: return "Jarek";
        case 15: return "Wojciech";
        case 16: return "Les³aw";
        case 17: return "Adam";
        case 18: return "Miros³aw";
        case 19: return "Waldemar";
        case 20: return "Stanis³aw";
        case 21: return "Daniel";
        case 22: return "Piotr";
        case 23: return "Pawe³";
        case 24: return "Arkadiusz";
        case 25: return "Aleksander";
        case 26: return "Tomasz";
        case 27: return "Mieczys³aw";
    }
throw -666;
}
string losujnazwisko()
{
    switch(rand()%28)
    {
        case 0: return "Gacek";
        case 1: return "Staworowski";
        case 2: return "Kowalski";
        case 3: return "Nowak";
        case 4: return "Pawliczak";
        case 5: return "Wiœniewski";
        case 6: return "Adamczyk";
        case 7: return "Andrzejewski";
        case 8: return "Bernaœ";
        case 9: return "Czyczerski";
        case 10: return "Gawlak";
        case 11: return "G³owacki";
        case 12: return "Kowalik";
        case 13: return "Budzowski";
        case 14: return "Dopart";
        case 15: return "Abram";
        case 16: return "Mruk";
        case 17: return "Markiewicz";
        case 18: return "Kucharski";
        case 19: return "Sozañski";
        case 20: return "Fornal";
        case 21: return "Mi³ek";
        case 22: return "Heda";
        case 23: return "Garwol";
        case 24: return "£ychoñski";
        case 25: return "Chich³owski";
        case 26: return "Grabowski";
        case 27: return "Szargan";
    }
throw -666;
}

int losujwiek()
{
  int x;
  x=rand()%35;
  return x;
throw -666;
}

#include <iostream>
#include <vector>
#include "Utils.h"
#include "Humans.h"
#include "Stadion.h"
using namespace std;


int main()
{
    Stadion stadion;
    Druzyna druzyna1;
    Druzyna druzyna2;
    Druzyna trener1;
    Druzyna trener2;
    utils.clearScreen();
    HumanFactory *factory = new HumanFactory();
    factory->registerTypyLudzi(new Druzyna1(20, 50, "Meeee!"));
    factory->registerTypyLudzi(new Druzyna2(10, 40, "Klap!"));
    factory->registerTypyLudzi(new Kibice2(250, 500, "Iiihaha!"));
    factory->registerTypyLudzi(new Kibice1(350, 700, "Muuuu!"));
    factory->registerTypyLudzi(new Trener1(1, 5, "SSSssss!"));
    factory->registerTypyLudzi(new Trener2(0, 3, "Krrk!"));
    cout << endl << "Czas na mecz.Stadion zapelnia sie :" << endl;
    druzyna1.createGracz(15);
    druzyna2.createGracz(15);
    trener1.createTrener(1);
    trener2.createTrener(1);
    stadion.fill(factory, 2500);
    delete factory;
    utils.sleep(3);

    cout << endl << "All humans:" << endl;
    stadion.show();
    utils.sleep(3);

    cout << endl << "Slaughtering time!" << endl;
    while(stadion.has_humans())
    {
        utils.sleep(5);
        Human *victim = stadion.get_human();
        stadion.notify("death", victim->TypyLudzi());
        delete victim;
    }

    return 0;
}
