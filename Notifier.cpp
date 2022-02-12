//
// Created by Christian Di buó on 08/02/22.
//

#include "Notifier.h"


Notifier::Notifier( bool notificationState , std::shared_ptr<Chat> subject) : notificationState(notificationState), subject(subject) {

}

Notifier::~Notifier() {
}

void Notifier::update() {
    if(isNotifierActive())
        display(subject->lastMessage());
}

void Notifier::display(const Message& message) {
    std::cout<<"messaggio da: "<<message.getSender()<<": "<<message.getText();
}

bool Notifier::isNotifierActive() {
    return notificationState;
}

void Notifier::setNotificationState(bool notificationState) {
    Notifier::notificationState=notificationState;
}

void Notifier::attach() {
    std::shared_ptr<Notifier> ntfr=std::make_shared<Notifier>(*this);
    subject->registration(ntfr);

}

void Notifier::detach() {
    std::shared_ptr<Notifier> ntfr=std::make_shared<Notifier>(*this);
    subject->remove(ntfr);

}
