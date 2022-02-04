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
