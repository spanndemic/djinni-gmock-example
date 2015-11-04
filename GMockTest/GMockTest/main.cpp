#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "mock_turtle.hpp"
#include "painter_impl.hpp"
using ::testing::AtLeast;

using ::testing::AtLeast;                     // #1

TEST(PainterTest, CanDrawSomething) {
    MockTurtle turtle;                          // #2
    EXPECT_CALL(turtle, PenDown())              // #3
    .Times(AtLeast(1));
    
    PainterImpl painter(turtle);                   // #4
    
    EXPECT_TRUE(painter.DrawCircle(0, 0, 10));
}



int main(int argc, char * argv[]) {
    
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
    
}
