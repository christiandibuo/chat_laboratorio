//
// Created by Christian Di buó on 04/02/22.
//

#ifndef CHAT_LABORATORIO_CHAT_H
#define CHAT_LABORATORIO_CHAT_H

#include <iostream>

class Chat {
public:
    Chat (std::string firstname, std::string secondname);

    ~Chat();



private:
    std::string firstuserName;
    std::string seconduserName;
};


#endif //CHAT_LABORATORIO_CHAT_H
