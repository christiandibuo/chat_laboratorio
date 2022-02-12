//
// Created by Christian Di buó on 11/02/22.
//

#include "../User.h"
#include "gtest/gtest.h"

TEST(User, GetterSetter) {
    User chri("christian");
    User riccardo("Riccardo");
    ASSERT_EQ(chri.getUsername(), "christian");
}