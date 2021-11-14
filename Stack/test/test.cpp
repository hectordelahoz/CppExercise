#include <gtest/gtest.h>
#include <string>
#include "../src/stack.hpp"

using namespace datastructure;
using namespace stack;

class StackTest : public ::testing::Test {
  protected:
    void SetUp() override {
      s2 = new Stack<float>(f0);
      s3 = new Stack<std::string>(l0);
    }

    int i0=0, i1=1, i2=2, i3=3, i4=4, i5=5;
    float f0=0.1, f1=1.1, f2=2.2, f3=3.3, f4=4.4, f5=5.5;
    std::string l0 = "zero";
    Stack <int>s1;
    Stack <float>*s2;
    Stack <std::string> *s3;
};

TEST_F(StackTest, costructor){
  EXPECT_EQ(s1.getSize(),0);
  EXPECT_EQ(s1.getTop(),NULL);
  EXPECT_EQ(s1.pop(),NULL);
  EXPECT_TRUE(s1.isEmpty());

  EXPECT_EQ(s2->getSize(),1);
  EXPECT_EQ(s2->getTop(),f0);
  EXPECT_FALSE(s2->isEmpty());
  EXPECT_EQ(s2->pop(),f0);
  EXPECT_TRUE(s2->isEmpty());
  EXPECT_EQ(s2->getSize(),0);

  EXPECT_EQ(s3->getSize(),1);
  EXPECT_TRUE(s3->getTop() == l0);
  EXPECT_TRUE(s3->pop() == l0);
  EXPECT_TRUE(s3->isEmpty());
}

TEST_F(StackTest, push){
  EXPECT_TRUE(s1.isEmpty());
  EXPECT_TRUE(s1.push(i0));
  EXPECT_TRUE(s1.push(i1));
  EXPECT_TRUE(s1.push(i2));
  EXPECT_FALSE(s1.isEmpty());

  EXPECT_EQ(s1.getTop(),i2);
  EXPECT_EQ(s1.pop(),i2);
  EXPECT_FALSE(s1.isEmpty());

  EXPECT_EQ(s1.getTop(),i1);
  EXPECT_EQ(s1.pop(),i1);
  EXPECT_FALSE(s1.isEmpty());

  EXPECT_EQ(s1.getTop(),i0);
  EXPECT_EQ(s1.pop(),i0);
  EXPECT_TRUE(s1.isEmpty());
}

int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
