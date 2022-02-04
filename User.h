//
// Created by Christian Di buó on 04/02/22.
//

#ifndef CHAT_LABORATORIO_USER_H
#define CHAT_LABORATORIO_USER_H

#include <iostream>
#include <map>
#include "Chat.h"
class Chat;

class User {
public:
    User(std::string name);
    ~User();

    const std::string &getUsername() const;

    void setUsername(const std::string &username);
    //todo add method to create and manipulate the chat
private:
    std::string username;
    std::map<std::string, std::shared_ptr<Chat>> chat; //todo check if map is good as chat



};


#endif //CHAT_LABORATORIO_USER_H
