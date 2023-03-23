#include "Harl.hpp"

Harl::Harl (void)
{
    msg_type[0] = &Harl::debug;
    msg_type[1] = &Harl::info;
    msg_type[2] = &Harl::warning;
    msg_type[3] = &Harl::error;
}

Harl::~Harl() {
}

void Harl::debug(void) {
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void Harl::info(void) {
    cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void Harl::warning(void) {
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void Harl::error(void) {
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(int start_level) {
    for (int i = start_level; i < 4; i++) {
            (this->*msg_type[i])();
    }
}

int Harl::get_req_level(std::string level) {
    std::string levels_type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++) {
        if (levels_type[i] == level) {
            return (i);
        }
    }
    return (-1);
}

void Harl::filter(std::string min_level)
{
    int level = get_req_level(min_level);
    switch (level) {
        case 0:
            complain(0);
            break ;
        case 1:
            complain(1);
            break ;
        case 2:
            complain(2);
            break ;
        case 3:
            complain(3);
            break ;
        default:
            cout << "[ Probably complaining about insignificant problems ]" << endl;
    }
}
