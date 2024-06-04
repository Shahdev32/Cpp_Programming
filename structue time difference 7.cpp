#include <iostream>
using namespace std;
struct time
{
int hrs; 
int mins;
int secs;
};
void computeTimeDifference(struct time, struct time, struct time *);
int main()
{
struct time t1, t2, difference;
cout << "Please enter Starting Time: " << endl;
cout << "Please enter Hours, Minutes & Seconds respectively: ";
cin >> t1.hrs >> t1.mins >> t1.secs;
cout <<endl<< "Please enter Stop Time: " << endl;
cout << "Please enter Hours, Minutes & Seconds respectively: ";
cin >> t2.hrs >> t2.mins >> t2.secs;
computeTimeDifference(t1, t2, &difference);
cout << endl << "*Time Difference*: " << t1.hrs << ":" << t1.mins << ":" << t1.secs;
cout << " - " << t2.hrs << ":" << t2.mins << ":" << t2.secs;
cout << " = " << difference.hrs << ":" << difference.mins << ":" << difference.secs;
return 0;
}
void computeTimeDifference(struct time t1, struct time t2, struct time *difference){
if(t2.secs > t1.secs)
{
--t1.mins;
t1.secs += 60;
}
difference->secs = t1.secs - t2.secs;
if(t2.mins > t1.mins)
{
--t1.hrs;
t1.mins += 60;
}
difference->mins = t1.mins-t2.mins;
difference->hrs = t1.hrs-t2.hrs;
}
