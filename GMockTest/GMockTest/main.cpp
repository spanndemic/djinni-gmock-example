#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "mock_turtle.hpp"
#include "painter_impl.hpp"

using ::testing::AtLeast;

namespace gmocktest {}
using namespace gmocktest;

class MyClassTests : public ::testing::Test {
    
public:
    
    MyClassTests():
    turtle_(new MockTurtle), painter_(new PainterImpl(turtle_)) {}
    
protected:
    
    std::shared_ptr<MockTurtle> turtle_;
    std::shared_ptr<PainterImpl> painter_;
    
};

TEST_F(MyClassTests, CanDrawSomething) {
    
    EXPECT_CALL(*turtle_, pen_down()).Times(AtLeast(1));
    EXPECT_TRUE(painter_->draw_circle(0, 0, 10));
    
}

int main(int argc, char * argv[]) {
    
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
    
}