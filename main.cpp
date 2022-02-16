#include <iostream>

#include "Chat.h"
#include "User.h"
#include "Message.h"
#include "Notifier.h"

int main() {
    User christian("christian");
    User riccardo("riccardo");
    std::shared_ptr<Chat> chat=christian.createChat(riccardo);
    Message firstM("ciao, che fai stasera","riccardo", "christian" );
    Message answer("non ho programmi, te?", "christian", "riccardo");
    try {
        chat->addNewMessage(firstM);
        chat->addNewMessage(answer);
    }
    catch(std::invalid_argument& e){
        std::cerr<<"invalid argument error "<<e.what()<<std::endl;
    }
    std::cout<<"numero messaggi non letti "<<chat->getnumberUnreadMessage()<<std::endl;
    try {
        chat->readMessage(0);
        chat->readMessage(1);
    }
    catch(std::out_of_range& e){
        std::cerr<<"out of range error "<<e.what()<<std::endl;

    }
    std::cout<<"numero di messaggi non letti "<<chat->getnumberUnreadMessage()<<std::endl;
    Notifier ntfr(true,chat);

    christian.deleteChat(riccardo);
}
