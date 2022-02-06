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

void User::createChat(User &user) {
    Chat *c =new Chat(this, user);
    std::shared_ptr<Chat> ct=std::make_shared<Chat>(*c);
    chat.insert(std::make_pair(user.getUsername(),ct));
}

std::shared_ptr<Chat> User::searchChat(User &user) {
    return (chat.find(user.getUsername())->second);
}

void User::deleteChat(User &user) {
    std::map<std::string,std::shared_ptr<Chat>>::iterator it;
    it=chat.find(user.getUsername());
    chat.erase(it);
}
