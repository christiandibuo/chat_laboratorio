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
    if(subject->isNotificationOn())
        display(subject->lastMessage());
}

void Notifier::display(const Message& message) {
    std::cout<<"messaggio da: "<<message.getSender()<<": "<<message.getText();
}
