#include "Human.h"
#include<iostream>
#include<ctime>

void Human::rand_weight()
{
    _weight = min_weight + rand() % (max_weight - min_weight + 1);
}

void Human::notify(string action, string arg)
{
    if(action == "death")
	{
        if(arg == _TypyLudzi)
        {
            cout << " *** " << _TypyLudzi << " " << name << " (" << _weight << " kg) sorrows :(" << endl;
        }
	}
}
string Human:: losujimie()
{
    switch(rand()%28)
    {
        case 0: return "Jan";
        case 1: return "Franciszek";
        case 2: return "Stefan";
        case 3: return "Andrzej";
        case 4: return "Karol";
        case 5: return "Micha�";
        case 6: return "Maksymilian";
        case 7: return "Janusz";
        case 8: return "Alfred";
        case 9: return "J�zef";
        case 10: return "Kacper";
        case 11: return "Bart�omiej";
        case 12: return "Marek";
        case 13: return "Dawid";
        case 14: return "Jarek";
        case 15: return "Wojciech";
        case 16: return "Les�aw";
        case 17: return "Adam";
        case 18: return "Miros�aw";
        case 19: return "Waldemar";
        case 20: return "Stanis�aw";
        case 21: return "Daniel";
        case 22: return "Piotr";
        case 23: return "Pawe�";
        case 24: return "Arkadiusz";
        case 25: return "Aleksander";
        case 26: return "Tomasz";
        case 27: return "Mieczys�aw";
    }
throw -666;
}
string Human:: losujnazwisko()
{
    switch(rand()%28)
    {
        case 0: return "Gacek";
        case 1: return "Staworowski";
        case 2: return "Kowalski";
        case 3: return "Nowak";
        case 4: return "Pawliczak";
        case 5: return "Wi�niewski";
        case 6: return "Adamczyk";
        case 7: return "Andrzejewski";
        case 8: return "Berna�";
        case 9: return "Czyczerski";
        case 10: return "Gawlak";
        case 11: return "G�owacki";
        case 12: return "Kowalik";
        case 13: return "Budzowski";
        case 14: return "Dopart";
        case 15: return "Abram";
        case 16: return "Mruk";
        case 17: return "Markiewicz";
        case 18: return "Kucharski";
        case 19: return "Soza�ski";
        case 20: return "Fornal";
        case 21: return "Mi�ek";
        case 22: return "Heda";
        case 23: return "Garwol";
        case 24: return "�ycho�ski";
        case 25: return "Chich�owski";
        case 26: return "Grabowski";
        case 27: return "Szargan";
    }
throw -666;
}

int Human:: losujwiek()
{
  int x;
  x=rand()%35;
  return x;
throw -666;
}
