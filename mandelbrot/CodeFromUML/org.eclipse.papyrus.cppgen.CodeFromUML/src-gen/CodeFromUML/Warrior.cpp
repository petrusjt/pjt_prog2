// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#define asd_Warrior_BODY

/************************************************************
 Warrior class body
 ************************************************************/

// include associated header file
#include <CodeFromUML/Warrior.h>
using std::cout;
using std::cin;
using std::endl;
// Derived includes directives

namespace CodeFromUML {

// static attributes (if any)

/**
 * 
 */
Warrior::Warrior()
{
	HP = 200;
}
void Warrior::attack() {
	if(rand()%10 > 5)
	{
		int dmg = rand()%5 + 1;
		HP -= dmg;
		std::cout << "Legyőzted a katonát, de megsérültél.\nAktuális életerő: " << HP << std::endl;
		healcounter++;
	}
	else
	{
		cout << "Karcolás nélkül legyőzted a katonát." << endl;
		healcounter++;
	}
}

/**
 * 
 */
void Warrior::heal() {
	if(healcounter < 10)
	{
		cout << "Ehhez még " << 10 - healcounter << " kört kell várnod." << endl;
	}
	else
	{
		int hpHeal = rand()%10 + 11;
		HP += hpHeal;
		cout << hpHeal << " életerőt gyógyítottál magadon.\nAktuális életerő: " << HP << endl;
		healcounter = 0;
	}
}

} // of namespace asd

/************************************************************
 End of Warrior class body
 ************************************************************/