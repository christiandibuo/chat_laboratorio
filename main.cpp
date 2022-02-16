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
    chat->addNewMessage(firstM);
    chat->addNewMessage(answer);
    std::cout<<chat->numberUnreadMessage()<<std::endl;
    chat->readMessage(0);
    chat->readMessage(1);
    std::cout<<chat->numberUnreadMessage()<<std::endl;
    Notifier ntfr(true,chat);

    christian.deleteChat(riccardo);
}
