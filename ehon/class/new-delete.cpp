#include <iostream>

using namespace std;

class MikanBox
{
  public:
    MikanBox()
    {
        cout << "MikanBox オブジェクト生成" << endl;
    }
    ~MikanBox()
    {
        cout << "MikanBox オブジェクト任務完了" << endl;
    }
};

int main()
{
    MikanBox *pMikanBox = new MikanBox;
    delete pMikanBox;
    return 0;
}