#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

class Student{
public:
    void SetID(int num){id = num;}
    void SetName(char *str){
        strcpy(name, str);
    }
    int GetID(){return id;}
    char *GetName() const {
        return (char *)name;
    }
private:
    int id;
    char name[30];
};

enum Subjects{Math, English, Science};

class Exam{
public:
    void SetInfo(int id, char *name, Subjects s, int num);
    int GetPoint() const { return point;}
    void GetResult(char *buf) const;
    Student student;
private:
    Subjects subject;
    int point;
};

void Exam::SetInfo(int id, char *name, Subjects s, int num)
{
    student.SetID(id);
    student.SetName(name);
    subject = s;
    point = num;
}

void Exam::GetResult(char *buf) const
{
    char *subname[] = {"数学", "英語", "理科"};
    sprintf(buf, "%s : %d点", subname[subject], point);
}

void PrintResult(const Exam &Exam)
{
    cout << Exam.student.GetName() << endl;
    char buf[30];
    Exam.GetResult(buf);
    cout << buf << endl;
}

double GetAvg(const Exam *Exam, int num)
{
    double sum = 0;
    for(int i = 0; i < num; ++i)
    {
        sum += Exam[i].GetPoint();
    }
    return sum / num;
}

int main()
{
    Exam Exam[3];
    Exam[0].SetInfo(1, "しおり", Math, 60);
    Exam[1].SetInfo(1, "しおり", English, 75);
    Exam[2].SetInfo(1, "しおり", Science, 88);

    PrintResult(Exam[0]);
    PrintResult(Exam[1]);
    PrintResult(Exam[2]);
    cout << endl;
    cout << "平均" << GetAvg(Exam, 3) << "点" << endl;
    return 0;
}