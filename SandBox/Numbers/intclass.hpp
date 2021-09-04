#ifndef __MY_INT_CLASS__
#define __MY_INT_CLASS__

namespace sandbox{
class IntClass{
  public:
    IntClass();
    IntClass(int x);
    int getValue();
    void setValue(int x);
  private:
    int value;
};
}
#endif
