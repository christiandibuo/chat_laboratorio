//
// Created by Christian Di buó on 04/02/22.
//

#include "Chat.h"

Chat::Chat(User firstUser, User secondUser): firstuserName(firstUser.getUsername()), seconduserName(secondUser.getUsername()) {
}

Chat::~Chat() {

}

void Chat::addNewMessage(const Message & newmessage) {
    messages.push_back(newmessage);
}

void Chat::readMessage(int i, std::string otherUser) {
    if( i>=0 && i<messages.size())
        if(messages[i].getSender() == otherUser)
            std::cout<<messages[i].getText();
        //TODO: add some method to put the message red, after i visualized it
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

