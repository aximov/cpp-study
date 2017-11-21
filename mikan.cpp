#include <bits/stdc++.h>

class MikanBox
{
public:
  MikanBox();
  void Add(int addmikan);
  void Del(int delmikan);
  void Empty();
  int GetTotal()
  {
    return total;
  };

private:
  int total;
};

MikanBox::MikanBox()
{
  total = 0;
}

void MikanBox::Add(int addmikan)
{
  total += addmikan;
}

void MikanBox::Empty()
{
  total = 0;
}

void MikanBox::Del(int delmikan)
{
  total -= delmikan;
  if(total < 0) Empty();
}

int main()
{
  MikanBox myMikanBox;

  myMikanBox.Add(5);
  myMikanBox.Del(2);
  printf("箱のなかのみかん: %d 個\n", myMikanBox.GetTotal());
  return 0;
}
