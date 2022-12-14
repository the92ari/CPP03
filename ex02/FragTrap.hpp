#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(string const &name);
		~FragTrap(void);
		FragTrap(FragTrap const &tocopy);
		FragTrap &operator=(FragTrap const &toassign);

		//messages
		void	introMsg(void);
		void	byeMsg(void);
		//messages end

		void	highFiveGuys(void);
};

#endif