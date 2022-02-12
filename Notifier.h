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

    explicit Notifier( bool notificationState, std::shared_ptr<Chat> subject);

    virtual ~Notifier();

    void update() override;

    void display(const Message &message);

    bool isNotifierActive ();

    void setNotificationState(bool notificationState);

    void attach() override;

    void detach() override;

private:
    std::shared_ptr<Chat> subject;
    bool notificationState;
};


#endif //CHAT_LABORATORIO_NOTIFIER_H
