#include "dictionary.h"
#include "exceptions.h"
#include "fraction.h"
#include "queue.h"
#include <string>
#include <iostream>

using namespace std;

class Dodgers
{
    public:
        Dodgers();
        ~Dodgers() {}

        void positionDodgers();
        void Summon(); //Gandolf
}

class Gandolf:public positionDodgers
{
    public:
        void Block();
}

class Marvin
{
    public:
        void positionMarvin();
}

class Lava
{
    public:
        void positionLava();
}
