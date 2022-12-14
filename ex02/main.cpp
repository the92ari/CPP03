#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
	cout << UWHT << "Instantiating ClapTrap..." << RESET << endl;
	ClapTrap	clap("Alpha");
	cout << endl;

	cout << UWHT << "Instantiating ScavTrap..." << RESET << endl;
	ScavTrap	scav("Bravo");
	cout << endl;

	cout << UWHT << "Instantiating FragTrap..." << RESET << endl;
	FragTrap	*frag = new FragTrap("Charlie");
	cout << endl;

	cout << UWHT << "Calling highFiveGuys() for FragTrap..." << RESET << endl;
	frag->highFiveGuys();
	cout << endl;

	cout << UWHT << "Showing ClapTrap's attributes..." << RESET << endl;
	cout << "Name: " << clap.getName() << endl;
	cout << "Attack point: " << clap.getAtt() << endl;
	cout << "Health point: " << clap.getHP() << endl;
	cout << "Energy point: " << clap.getEP() << endl;
	cout << endl;

	cout << UWHT << "Showing ScavTrap's attributes..." << RESET << endl;
	cout << "Name: " << scav.getName() << endl;
	cout << "Attack point: " << scav.getAtt() << endl;
	cout << "Health point: " << scav.getHP() << endl;
	cout << "Energy point: " << scav.getEP() << endl;
	cout << endl;

	cout << UWHT << "Showing FragTrap's attributes..." << RESET << endl;
	cout << "Name: " << frag->getName() << endl;
	cout << "Attack point: " << frag->getAtt() << endl;
	cout << "Health point: " << frag->getHP() << endl;
	cout << "Energy point: " << frag->getEP() << endl;
	cout << endl;

	cout << UWHT << "Deleting the FragTrap..." << RESET << endl;
	delete frag;
	cout << endl;
	return (0);
}