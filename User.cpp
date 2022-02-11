//
// Created by Christian Di buó on 04/02/22.
//

#include "User.h"


User::User(std::string name):username(name) {

}

User::~User() {

}

const std::string &User::getUsername() const {
    return username;
}

void User::setUsername(const std::string &username) {
    User::username = username;
}

std::shared_ptr<Chat> User::createChat(User &user) {
    Chat *c =new Chat((*this), user);
    std::shared_ptr<Chat> chat=std::make_shared<Chat>(*c);
    chats.insert(std::make_pair(user.getUsername(),chat));
    c->setNotificationState(true);
    return chat;
}

void User::changeNotificationState(User &user, bool notificationOn) {
    std::shared_ptr<Chat> c = chats.find(user.getUsername())->second;
    c->setNotificationState(notificationOn);
}

std::shared_ptr<Chat> User::searchChat(User &user) {
    return (chats.find(user.getUsername())->second);
}

void User::deleteChat(User &user) {
    std::map<std::string,std::shared_ptr<Chat>>::iterator it;
    it=chats.find(user.getUsername());
    chats.erase(it);
}

