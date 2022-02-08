//
// Created by Christian Di buó on 07/02/22.
//

#ifndef CHAT_LABORATORIO_SUBJECT_H
#define CHAT_LABORATORIO_SUBJECT_H
#include "Observer.h"

class Subject {
protected:
    virtual ~Subject() {};

public:
    virtual void registration(std::shared_ptr<Observer> o) = 0;
    virtual void remove(std::shared_ptr<Observer> o) = 0;
    virtual void notify() = 0;

};


#endif //CHAT_LABORATORIO_SUBJECT_H
