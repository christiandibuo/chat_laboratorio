//
// Created by Christian Di buó on 04/02/22.
//

#ifndef CHAT_LABORATORIO_CHAT_H
#define CHAT_LABORATORIO_CHAT_H

#include <iostream>
#include <vector>
#include <list>

#include "User.h"
#include "Message.h"
#include "Subject.h"
class User;

class Chat :public Subject{
public:
    explicit Chat (User firstUser, User secondUser);

    virtual ~Chat();

    void addNewMessage(const Message& newmessage);

    void readMessage(int i, std::string receiver, std::string sender);

    void setFirstuserName(const std::string &firstuserName);

    void setSeconduserName(const std::string &seconduserName);

    const std::string& getFirstuserName() const;

    const std::string& getSeconduserName() const;

    const Message& lastMessage() const;

    void registration(std::shared_ptr<Observer> o) override;

    void remove(std::shared_ptr<Observer> o) override;

    void notify() override;

private:
    std::string firstuserName;
    std::string seconduserName;
    std::vector<Message> messages;
    std::list<std::shared_ptr<Observer>> observers;
};


#endif //CHAT_LABORATORIO_CHAT_H
