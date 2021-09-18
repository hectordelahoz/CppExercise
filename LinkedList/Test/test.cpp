#include "../src/linkedlist.hpp"
#include <gtest/gtest.h>

using namespace datastructure;
using namespace linkedlist;

class LinkedListTest : public ::testing::Test {
  protected:
    void SetUp() override {
      l2 = new LinkedList(x3);
    }
    void TearDown() override {
      delete l2;
    }
    int x0 = 0, x1 =1, x2 = 2, x3 = 3, x4 = 4, x5 = 5;
    LinkedList l1;
    LinkedList *l2;
};

TEST_F(LinkedListTest, costructor){
  EXPECT_EQ(l1.getRootValue(),0);
  EXPECT_EQ(l2->getRootValue(),x3);
  EXPECT_EQ(l1.getListSize(),1);
  EXPECT_EQ(l2->getListSize(),1);
}

TEST_F(LinkedListTest, addValue){
  l1.pushBack(x1);
  l1.pushBack(x2);
  l1.pushBack(x3);
  l1.pushBack(x4);
  l1.pushBack(x5);
  EXPECT_EQ(l1.getRootValue(), 0);
  int listSize = l1.getListSize();
  EXPECT_EQ(listSize, 6);
  EXPECT_EQ(l1.getValueAt(0),x0);
  EXPECT_EQ(l1.getValueAt(1),x1);
  EXPECT_EQ(l1.getValueAt(2),x2);
  EXPECT_EQ(l1.getValueAt(3),x3);
  EXPECT_EQ(l1.getValueAt(4),x4);
  EXPECT_EQ(l1.getValueAt(5),x5);
}

TEST_F(LinkedListTest, updateValue){
  EXPECT_TRUE(l1.updateValueAt(0, x2));
  EXPECT_FALSE(l1.updateValueAt(1, x2));
  EXPECT_EQ(l1.getListSize(),1);
  EXPECT_EQ(l1.getValueAt(0),x2);
}

TEST_F(LinkedListTest, insertValue){
  l1.insert(x1);
  l1.insert(x2);
  int listSize = l1.getListSize();
  EXPECT_EQ(listSize,3);
  EXPECT_EQ(l1.getValueAt(0),x2);
  EXPECT_EQ(l1.getValueAt(1),x1);
  EXPECT_EQ(l1.getValueAt(2),x0);
}

TEST_F(LinkedListTest, insertValueAt){
  l1.pushBack(x1);
  l1.pushBack(x2);
  EXPECT_EQ(l1.getListSize(),3);
  EXPECT_EQ(l1.getValueAt(0),x0);
  EXPECT_EQ(l1.getValueAt(1),x1);
  EXPECT_EQ(l1.getValueAt(2),x2);
  EXPECT_TRUE(l1.insertAt(0,10));
  EXPECT_FALSE(l1.insertAt(4,10));
  EXPECT_TRUE(l1.insertAt(2,x3));
  EXPECT_EQ(l1.getListSize(),5);
  EXPECT_EQ(l1.getValueAt(0),10);
  EXPECT_EQ(l1.getValueAt(1),x0);
  EXPECT_EQ(l1.getValueAt(2),x3);
  EXPECT_EQ(l1.getValueAt(3),x1);
  EXPECT_EQ(l1.getValueAt(4),x2);
}

int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
