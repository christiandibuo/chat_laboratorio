//
// Created by Christian Di buó on 04/02/22.
//

#include <list>
#include "Chat.h"

Chat::Chat(User firstUser, User secondUser): firstuserName(firstUser.getUsername()), seconduserName(secondUser.getUsername()) {
}

Chat::~Chat() {

}

void Chat::addNewMessage(const Message & newmessage) {
    messages.push_back(newmessage);
    this->notify();
}

void Chat::readMessage(int i, std::string receiver, std::string sender) {
    if( i>=0 && i<messages.size()) {
        if (messages[i].getReceiver() == receiver && messages[i].getSender() == sender)
            std::cout << messages[i].getText();
        else {
            if (messages[i].getReceiver() == receiver && messages[i].getSender() != sender)
                std::cout << "sender is uncorrect";
            if (messages[i].getReceiver() != receiver && messages[i].getSender() == sender)
                std::cout << "receiver is uncorrect";
        }
    }
    else{
        throw std::out_of_range("the message does not exist");
    }


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

