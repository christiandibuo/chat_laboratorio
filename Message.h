//
// Created by Christian Di buó on 04/02/22.
//

#ifndef CHAT_LABORATORIO_MESSAGE_H
#define CHAT_LABORATORIO_MESSAGE_H

#include <iostream>

class Message {
public:
    Message(std::string , std::string receiver, std::string sender):text(text), receiver(receiver), sender(sender){}
    ~Message(){}

    const std::string &getSender() const {
        return sender;
    }

    const std::string &getReceiver() const {
        return receiver;
    }

    const std::string &getText() const {
        return text;
    }


private:
    std::string sender;
    std::string receiver;
    std::string text;
};


#endif //CHAT_LABORATORIO_MESSAGE_H
