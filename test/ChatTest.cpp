//
// Created by Christian Di buó on 12/02/22.
//

#include "gtest/gtest.h"
#include "../Chat.h"

TEST(Chat, getterSetter){
    User christian("Christian");
    User riccardo("Riccardo");
    Chat c(christian,riccardo);
    ASSERT_EQ(c.getFirstuserName(),"Christian");
    c.setFirstuserName("Marco");
    c.setSeconduserName("Chiara");
    ASSERT_EQ(c.getFirstuserName(),"Marco");
    ASSERT_EQ(c.getSeconduserName(),"Chiara");
}

TEST(Chat, exeptions){
    User christian("Christian");
    User riccardo("Riccardo");
    Chat c(christian,riccardo);
    Message msg1("first test message","Riccardo","Christian");
    c.addNewMessage(msg1);
    ASSERT_EQ(1,c.getnumberUnreadMessage());
    ASSERT_EQ(0,c.getnumberReadMessage());
    ASSERT_ANY_THROW(c.readMessage(-1));
    ASSERT_ANY_THROW(c.readMessage(1));
    ASSERT_NO_THROW(c.readMessage(0));
    ASSERT_EQ(1,c.getnumberReadMessage());
    ASSERT_EQ(c.readMessage(0),msg1.getText());
    ASSERT_EQ(1,c.getnumberReadMessage());
    Message msg2("second test message","Christian","Riccardo");
    c.addNewMessage(msg2);
    ASSERT_EQ(1,c.getnumberUnreadMessage());
    ASSERT_EQ(1,c.getnumberReadMessage());
    ASSERT_NO_THROW(c.readMessage(1));
    Message msg3("third test message","rixardo","Christian");
    ASSERT_THROW(c.addNewMessage(msg3),std::invalid_argument);
    ASSERT_THROW(c.readMessage(3),std::out_of_range);
    ASSERT_NE(c.readMessage(0),msg3.getText());

}