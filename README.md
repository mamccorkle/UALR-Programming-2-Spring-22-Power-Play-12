# UALR - P2 - S22 - Power Play Goal 12

---

## CPSC 2376 Goal 12 Topics:

> `Strategies`

#### Instructions:

> ##### Player now gains abilities with each Level (using strategy pattern).
> 
> A. Level:
> 
> 1. Basic Attack
> 
> 2. Heal Spell - heal 2x strength on distribution (2SP)
> 
> 3. Fury Attack - attack first two creatures twice and makes them afraid, permanently lose 1 strength
> 
> B. Player class has STL vector of `std::unique_ptr<Object>&`
> 
> C. iStrategy has the following:
> 
> 1. `const char commandToActivate;`
> 
> 2. `const std::string actionName;`
> 
> 3. `Object* owner;`
> 
> 4. `virtual void execute(std::vector <std::unique_ptr>& objects) = 0;`
> 
> #### Your turn:
> 
> A. Level:
> 
> 1. Fireball Spell - deals basic attack damage to first 3 creatures. (5SP)  
> 2. Fear Spell - 50% chance of causing fear. Affects all creatures. Reduces there chance to attack to 50% (3SP)
> 
> B. For fun:
> 
> a. Give monsters spell resistance based on type.  
> 
> 1. reduces fireball damage by percentage  
> 2. reduces chance of causing fear by percentage
> 
> b. Give monsters differing attacks and spells!

#### Submission Due Date:

>  Source Due: April 14, 2022 **until** April 15, 2022<br>
> Reviews Due: April 16, 2022 **until** April 17, 2022

---
