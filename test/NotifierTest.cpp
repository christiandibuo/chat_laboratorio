//
// Created by Christian Di buó on 12/02/22.
//

#include "gtest/gtest.h"
#include "../Notifier.h"

TEST(Notifier, NotificationState){
    User christian("Christian");
    User riccardo("Riccardo");
    Chat *chat=new Chat(christian,riccardo);
    std::shared_ptr<Chat> chats=std::make_shared<Chat>(*chat);
    Notifier ntfr(false,chats);
    ASSERT_FALSE(ntfr.isNotifierActive());
}