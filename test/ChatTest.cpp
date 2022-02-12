//
// Created by Christian Di buó on 12/02/22.
//

#include "gtest/gtest.h"
#include "../Chat.h"

TEST(Chat, methods){
    User christian("Christian");
    User riccardo("Riccardo");
    Chat c(christian,riccardo);
    ASSERT_EQ(c.getFirstuserName(),"Christian");
    c.setFirstuserName("Marco");
    c.setSeconduserName("Chiara");
    ASSERT_EQ(c.getFirstuserName(),"Marco");
    ASSERT_EQ(c.getSeconduserName(),"Chiara");

}