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

    void createChat(User &user);

    std::shared_ptr<Chat> searchChat(User &user);

    void deleteChat(User &user);
private:
    std::string username;
    std::map<std::string, std::shared_ptr<Chat>> chat;



};


#endif //CHAT_LABORATORIO_USER_H
