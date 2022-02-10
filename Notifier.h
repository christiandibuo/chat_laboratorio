//
// Created by Christian Di buó on 08/02/22.
//

#ifndef CHAT_LABORATORIO_NOTIFIER_H
#define CHAT_LABORATORIO_NOTIFIER_H

#include <iostream>

#include "Observer.h"
#include "Chat.h"

class Notifier: public Observer {
public:

    Notifier(const std::shared_ptr<Chat> subject);

    virtual ~Notifier();

    void update() override;

    void display(const Message &message);

private:
    std::shared_ptr<Chat> subject;
};


#endif //CHAT_LABORATORIO_NOTIFIER_H
