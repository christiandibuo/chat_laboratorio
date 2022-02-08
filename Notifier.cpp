//
// Created by Christian Di buó on 08/02/22.
//

#include "Notifier.h"


Notifier::Notifier(const std::shared_ptr<Chat> subject) : subject(subject) {
    std::shared_ptr<Notifier> ptr=std::make_shared<Notifier>(*this);
    subject->registration(ptr);
}

Notifier::~Notifier() {
    std::shared_ptr<Notifier> ptr=std::make_shared<Notifier>(*this);
    subject->remove(ptr);
}

void Notifier::update() {
    this->sound();
}

void Notifier::sound() {
    std::cout<<"suono di notfica"<<std::endl;
}
