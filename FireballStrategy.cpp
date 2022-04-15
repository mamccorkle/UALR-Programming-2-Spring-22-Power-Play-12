
#include <iostream>

#include "FireballStrategy.h"
#include "Object.h"
#include "Player.h"

FireballStrategy::FireballStrategy(Player* owner)
	:iStrategy(owner, '*', "(*)Fireball")
{ }

// Fireball Spell - deals basic attack damage to first 3 creatures. (5 SP)
void FireballStrategy::execute(std::vector <std::unique_ptr<Object>>& objects)
{
	if (owner->cast(5))
	{
		std::cout << "Your fireball hits the enemies!" << std::endl;

		for (int i{ std::min(3, (int)objects.size() - 1) }; i > 0; i--)
		{
			// Attack the monster:
			objects.at(i)->defend(owner->attack());

			// % chance it will scare the monster based on the number of monsters
			// The more monsters the less it scares them:
			std::bernoulli_distribution ranScare((1.0 - ((int)objects.size() - 1.0) / (int)objects.size()));
			if(ranScare(Object::engine))
				objects.at(i)->scare();
		}

		system("PAUSE");
		system("CLS");
	}

}
