#include "gmock/gmock.h"  // Brings in Google Mock.
#include "turtle.hpp"

class MockTurtle : public Turtle {
public:
    MOCK_METHOD0(PenDown, void());
};