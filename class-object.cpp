/* Define a class time to represent time (like 3 hr 45 min 20 sec).
Declare appropriate number of instance memeber variables and also 
define instance member functions to set values for time and display values of time.
*/

#include<iostream>
using namespace std;
class Time{
    private:
    int hr,min,sec;
    public:
    void setTime(int x,int y,int z){
        hr=x;
        min=y;
        sec=z;
    }
    void showTime(){
          cout<<endl<<"Time = "<<hr<<":"<<min<<":"<<sec;
}
};
int main()
{
    Time t1;
    t1.setTime(02,45,50);
    t1.showTime();
    return 0;
}

//o/p-)       Time = 2:45:50