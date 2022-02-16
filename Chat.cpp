//
// Created by Christian Di buó on 04/02/22.
//

#include <list>
#include "Chat.h"

Chat::Chat(const User &firstUser,const User &secondUser): firstuserName(firstUser.getUsername()), seconduserName(secondUser.getUsername()) {
}

Chat::~Chat() {

}

void Chat::addNewMessage(const Message & newmessage) {
    if ((newmessage.getSender() == getSeconduserName() && newmessage.getReceiver() == getFirstuserName())
    || ( newmessage.getSender() == getFirstuserName() && newmessage.getReceiver() == getSeconduserName())) {
        messages.push_back(newmessage);
        this->notify();
    } else {
        if(newmessage.getSender() != getSeconduserName() && newmessage.getSender() != getFirstuserName())
            throw std::invalid_argument("sender is uncorrect");
        if (newmessage.getReceiver() != getSeconduserName() && newmessage.getReceiver() != getFirstuserName())
            throw std::invalid_argument("receiver is uncorrect");

    }
}

const std::string & Chat::readMessage(int i) {
    if( i>=0 && i<messages.size()) {
        messages[i].setRead(true);
        return (messages[i].getText());
    }
    else
        throw std::out_of_range("the message does not exist");

}

const std::string &Chat::getFirstuserName() const {
    return firstuserName;
}

const std::string &Chat::getSeconduserName() const {
    return seconduserName;
}

void Chat::setFirstuserName(const std::string &firstuserName) {
    Chat::firstuserName = firstuserName;
}

void Chat::setSeconduserName(const std::string &seconduserName) {
    Chat::seconduserName = seconduserName;
}

void Chat::registration(std::shared_ptr<Observer> o) {
    observers.push_back(o);
}

void Chat::remove(std::shared_ptr<Observer> o) {
    observers.remove(o);
}

void Chat::notify() {
    for( auto it:observers)
        it->update();
}

const Message& Chat::lastMessage() const {
    return messages.back();
}

int Chat::getnumberReadMessage() const {
    int c=0;
    for(int i=0; i<messages.size(); i++){
        if(messages[i].isRead())
            c++;
    }
    return c;
}

int Chat::getnumberUnreadMessage() const {
    int c=0;
    for(int i=0; i<messages.size(); i++){
        if(!messages[i].isRead())
            c++;
    }
    return c;
}




