//
// Created by Christian Di buó on 07/02/22.
//

#ifndef CHAT_LABORATORIO_OBSERVER_H
#define CHAT_LABORATORIO_OBSERVER_H


class Observer {
protected:
    virtual ~Observer() {};

public:
    virtual void update() = 0;
};


#endif //CHAT_LABORATORIO_OBSERVER_H
