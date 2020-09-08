#include<iostream>
//#include "Character.hh"
#include "Hero.hh"

int main()
{

    //Heap necesita la palabra new is se hace en la mamoria pero sin tener un limite como el stack
    //El stack se usa cuando creas algo si new directamente en funciones o variables globales.

    Hero* hero1{new Hero(5, 3, 1, 2, 3, 1, new std::string[4]{{"fire ball"}, {"fenix tail"}, {"war growl"}, {"fly"}})};

    Hero** heroList
    {
        new Hero*[4]
        {
            new Hero(5, 3, 1, 2, 3, 1, new std::string[4]{{"fire ball"}, {"fenix tail"}, {"war growl"}, {"fly"}}),
            new Hero(4, 3, 1, 2, 3, 1, new std::string[4]{{"water heal"}, {"erik do something"}, {"rays sword"}, {"fdgdf"}}),
            new Hero(7, 3, 1, 2, 3, 1, new std::string[4]{{"ksdjfhksj"}, {"lml"}, {"loremipsum"}, {"fly2"}}),
            new Hero(2, 3, 1, 2, 3, 1, new std::string[4]{{"fire ball"}, {"ddd"}, {"aaaa"}, {"bbbbb"}})
        }
    };

    /*int** numbers
    {
        new int*[4]
        {
            new int(5),
            new int(4),
            new int(7),
            new int(2),
        }
    };*/

    //std::cout << *(*(numbers + 2)) << std::endl;

    for(int i{}; i < 4; i++)
    {
        //std::cout << "Health: " << (*heroList)->GetHealth() << std::endl;

        std::cout << "Hero: " << i + 1 << std::endl;    
        for(int j{}; j < 4; j++)
        {
            std::cout << "Skill: " << *((*(heroList + i))->GetSkills() + j) << std::endl;
        }
        std::cout << std::endl;
    }

    //std::cout << "Hero Skills:" << std::endl;

    /*for(int i{}; i < 4; i++)
    {
        std::cout << *(hero1->GetSkills() + i) << std::endl;
    }
    std::cout << "level: " << hero1->GetLevel() << std::endl;

    std::cout << "Health: " << hero1->GetHealth() << std::endl;
    std::cout << "Exp: " << hero1->GetExp() << std::endl;
    std::cout << "Luck:" << hero1->GetLuck() << std::endl;
    std::cout << "Speed: " << hero1->GetSpeed() << std::endl;
    std::cout << "Streght: " << hero1->GetStrenght() << std::endl;
    hero1->SetLore("la chinita en el bosque se perdio");
    hero1->GetDamage(2);
    std::cout << "Health: " << hero1->GetHealth() << std::endl;
    std::cout << "Lore: : " << hero1->GetLore() << std::endl;*/

    //std::cout << hero1. << std::endl;

    /*Character* character1{new Character(5, 3, 1, 2, 3)};

    std::cout << "Character info:" << std::endl;
    std::cout << "Health: " << character1->GetHealth() << std::endl;
    std::cout << "Exp: " << character1->GetExp() << std::endl;
    std::cout << "Luck:" << character1->GetLuck() << std::endl;
    std::cout << "Speed: " << character1->GetSpeed() << std::endl;
    std::cout << "Streght: " << character1->GetStrenght() << std::endl;
    character1->SetLore("la chinita en el bosque se perdio");
    character1->GetDamage(2);
    std::cout << "Health: " << character1->GetHealth() << std::endl;
    std::cout << "Lore: : " << character1->GetLore() << std::endl;
    delete &character1;*/

    std::cin.get();
    return 0;
}