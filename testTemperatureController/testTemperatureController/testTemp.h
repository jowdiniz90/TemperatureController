#include "gtest/gtest.h"
#include "mocTemp.h"

class TempControllerTest : public ::testing::Test {

protected:

    TempControllerTest();

    virtual ~TempControllerTest();

    virtual void SetUp();

    virtual void TearDown();

    MockTemp m_temp;
};
