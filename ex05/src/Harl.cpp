#include "./include/Harl.hpp"
#include <iostream>

void Harl::complain(std::string level) {
    void (Harl::*ptr)(void) = NULL;
	int i = std::stoi(level);
    switch (i) {
        case 0: ptr = &Harl::debug; break;
        case 1: ptr = &Harl::info; break;
        case 2: ptr = &Harl::warning; break;
        case 3: ptr = &Harl::error; break;
    }
    if (ptr)
        (this->*ptr)();
}

void Harl::debug(void) {
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for\
years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}
