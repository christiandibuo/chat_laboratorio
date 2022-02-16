//
// Created by Christian Di buó on 04/02/22.
//

#ifndef CHAT_LABORATORIO_MESSAGE_H
#define CHAT_LABORATORIO_MESSAGE_H

#include <iostream>

class Message {
public:
    Message(const std::string text, const std::string receiver,const std::string sender, bool read=false)
    :text(text), receiver(receiver), sender(sender), read(read){}

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

    bool isRead() const {
        return read;
    }

    void setRead(bool read) {
        Message::read = read;
    }

private:
    std::string sender;
    std::string receiver;
    std::string text;
    bool read;
public:

};


#endif //CHAT_LABORATORIO_MESSAGE_H
