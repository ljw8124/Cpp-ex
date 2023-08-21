//
// Created by 이정우 on 2023/08/21.
//

struct TimeRec {
    int hours;
    int minutes;
};

void AddTime(TimeRec &t1, const TimeRec& t2)
{
    t1.minutes += t2.minutes;
    t1.hours += t2.hours + t1.minutes / 60;
    t1.minutes %= 60;
}

void AddTime(TimeRec& t, int minutes)
{
    t.minutes += minutes;
    t.hours += t.minutes / 60;
    t.minutes %= 60;
}

// 매개 변수에 맞게 같은 이름을 가졌지만 다른 함수가 호출됨