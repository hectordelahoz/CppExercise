#include "../Numbers/intclass.hpp"
#include <gtest/gtest.h>

using namespace sandbox;

class IntClassTest : public ::testing::Test {
  protected:
    void SetUp() override {
      x = 5;
      t2 = new IntClass(x);
    }
    void TearDown() override {
      delete t2;
    }
    int x;
    IntClass t1;
    IntClass *t2;
};

TEST_F(IntClassTest, constructorTest){
  EXPECT_EQ(t1.getValue(), 0);
  EXPECT_EQ(t2->getValue(), 5);
}

TEST_F(IntClassTest, setValueTest){
  t1.setValue(10);
  EXPECT_EQ(t1.getValue(), 10);
  EXPECT_EQ(t2->getValue(), 5);
  t2->setValue(50);
  EXPECT_EQ(t1.getValue(), 10);
  EXPECT_EQ(t2->getValue(), 50);
}

int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
