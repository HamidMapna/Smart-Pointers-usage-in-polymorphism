#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Composite.hpp"

TEST(GeneralTests, simpleTest){
    ///Arrange
    int expected = 6;
    std::shared_ptr<composite> exp1 = std::make_shared<composite>
                    (std::make_shared<primitive>(10), std::make_shared<primitive>(2), &add);

    std::shared_ptr<composite> exp2 = std::make_shared<composite>(std::move(exp1), std::make_shared<primitive>(5), &subtract);
    //ACT

    int actual = exp2->evaluate();
    //ASSERT
    EXPECT_EQ(expected, actual);
}