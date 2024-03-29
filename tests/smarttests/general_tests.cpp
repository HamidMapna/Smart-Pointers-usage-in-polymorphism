#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Composite.hpp"

TEST(GeneralTests1, simpleTest){
    //Arrange
    double expected = 6;
    std::shared_ptr<composite> exp1 = std::make_shared<composite>
                    (std::make_shared<primitive>(10), std::make_shared<primitive>(2), &add);

    std::shared_ptr<composite> exp2 = std::make_shared<composite>(std::move(exp1), std::make_shared<primitive>(5), &subtract);
    //ACT

    double actual = exp2->evaluate();
    //ASSERT
    EXPECT_NE(expected, actual);
}

TEST(GeneralTests2, simpleTest2){
    //calculate (((3*2)+12)/(7-2)) = 3.6
    ///Arrange
    double expected = 3.6;
    std::shared_ptr<composite> exp1 = std::make_shared<composite>
                    (std::make_shared<primitive>(3), std::make_shared<primitive>(2), &multiply);
     std::shared_ptr<composite> exp2 = std::make_shared<composite>
                 (std::move(exp1), std::make_shared<primitive>(12), &add);                

     std::shared_ptr<composite> exp3 = std::make_shared<composite>
                 (std::make_shared<primitive>(7), std::make_shared<primitive>(2), &subtract);

     std::shared_ptr<composite> exp4 = std::make_shared<composite>(std::move(exp2), std::move(exp3), &divide);
    // //ACT

    double actual = exp4->evaluate();
    //ASSERT
    EXPECT_EQ(expected, actual);
}
