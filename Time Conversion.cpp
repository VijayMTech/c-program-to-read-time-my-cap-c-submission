// C++ program to read time in HH:MM:SS format and convert into total seconds using class.
#include<iostream>
using namespace std;

class Time{
    public:
    
    int hrs;
    int minutes;
    int seconds;
    int hh,mm,ss;
    
    public:
        void TimeInput(void);
        void TimeInSeconds(void);
        void DisplayTime(void);
};
void Time::TimeInput(void)
{
    std::cout << "ENTER HOURS ?" << std::endl;
    std::cin >> hrs;
        
    std::cout << "ENTER MINUTES ?" << std::endl;
    std::cin >> minutes;
        
    std::cout << "ENTER SECONDS ?" << std::endl;
    std::cin >> seconds;
}
void Time::TimeInSeconds(void)
{
    ss = hrs*3600+ minutes*60+ seconds;   
    
}
void Time::DisplayTime(void)
{
    std::cout << "The Time is = " <<"0"<<hrs<<":"    
                                   <<"0"<<minutes<<":"
                                  <<"0"<<seconds<<std::endl;
    std::cout <<"Time in Total seconds:"<<ss;
}
int main()
{
    Time t;
    t.TimeInput();
    t.TimeInSeconds();
    t.DisplayTime();
    return 0;
    
}

