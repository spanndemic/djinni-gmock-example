#pragma once

#include "gmock/gmock.h"  // Brings in Google Mock.
#include "turtle.hpp"

namespace gmocktest {

class MockTurtle : public Turtle {
public:
    MOCK_METHOD0(pen_down, void());
};

} // namespace