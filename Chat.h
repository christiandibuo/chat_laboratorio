//
// Created by Christian Di buó on 04/02/22.
//

#ifndef CHAT_LABORATORIO_CHAT_H
#define CHAT_LABORATORIO_CHAT_H

#include <iostream>
#include <vector>

#include "User.h"
#include "Message.h"
class User;

class Chat {
public:
    Chat (User firstuser, User seconduser);

    ~Chat();

    void addNewMessage(const Message& newmessage);

    void readMessage(int i, std::string otherUser);

    void setFirstuserName(const std::string &firstuserName);

    void setSeconduserName(const std::string &seconduserName);

    const std::string &getFirstuserName() const;

    const std::string &getSeconduserName() const;


private:
    std::string firstuserName;
    std::string seconduserName;
    std::vector<Message> messages;
};


#endif //CHAT_LABORATORIO_CHAT_H
