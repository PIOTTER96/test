#pragma once
#include "Human.h"
#include "HumanFactory.h"

class Kibic : public Human
{
    protected:
    public:
        Kibic(string name,string surname,int wiek): Human(name,surname,wiek, "Kibic"){}
        Kibic(uint32_t min_weight, uint32_t max_weight, string voice)
            : Human(min_weight, max_weight, voice, "Kibic")
            {}

};

class Trener : public Human
{
    protected:
    public:
        Trener(string name,string surname,int wiek): Human(name,surname,wiek,"Trener"){}
        Trener(uint32_t min_weight, uint32_t max_weight, string voice)
            : Human(min_weight, max_weight, voice, "Trener") {}

};
class Gracz :public Human
{
protected:
public:
     Gracz(string name,string surname,int wiek): Human(name,surname,wiek, "Gracz") {}
        Gracz(uint32_t min_weight, uint32_t max_weight, string voice)
            : Human(min_weight, max_weight, voice, "Gracz") {}


    };
class Druzyna
{
    protected:
    public:
        Druzyna(string country, string name,HumanFactory * factory);
        ~Druzyna();
        vector <Gracz* > czlonkowie;
        vector <Trener*> trenerzy;
        HumanFactory * factory;
        void createGracz(int i);
        void createTrener(int i);
        void wypiszTrener(int i);
        void wypiszGracze(int i);
};
