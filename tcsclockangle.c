/*
There are 360 Longitudes on the Earth, which are equidistant vertical imaginary lines drawn on the Earth, separated by 1 degree each from center of the Earth. Period of the rotation of the Earth on its axis is 24 hours. All countries have their own official times and hence time zones.
UTC is universal time coordinate which passes through 0 (Zero degree) longitude. Time at a particular location on Earth can be calculated using period of the rotation of Earth and longitude of that particular location. For example, Indian time zone IST (Indian standard Time) is located at 82.5° E longitude.
Hence, Indian time can be calculated as below:- IST = UTC + (24/360)*82.5 = UTC + 5:30Hrs
Now suppose we changed period of rotation of the earth using some imaginary power, this will change the time at every longitude on the earth.

Calculate the smallest angle between hour and minute hand of the clock , which shows the difference of time at a particular longitude and the time at UTC i.e. we have to take smaller of the two angle formed between hour and minute hand.

Explanation :
Example 1 : Input..
24
82.50
Output : 15.00
Explanation :
If period of rotation of earth is 24 hours then time at 82.5 degree longitude will be (24/360)*82.50 = 5:30 and minimum angle at this time between minute and hour hand will be 15 degree.
*/


#include<stdio.h>
#define min(x,y) (x>y)?y:x
int main()
{
    int rot;//usually 24 but sprcified here
    int hr,min;
    double tp,lon;//longitude
    scanf("%d %lf",&rot,&lon);
    tp=(rot*lon)/360;//5.5 //This needs to be converted to minutes
    hr=(int)tp;//take int part as hour
    min=(((int)(tp*100)%100)*60)/100;
    printf("%d %d ",hr,min);
    //angle for 1 hr=360/12=> 30 degrees (no of hr*30)
    //angle for 1 min=360/60=> 6 degrees (no of min*6)
    //hr hand displacement in 1 min is 0.5 degree (1 hr=30 degree)
    double minang,hrang,angle,tempangle;
    hrang=hr*30+(0.5*min);
    minang=min*6;
    if(minang<hrang)
        angle=hrang-minang;
    else    
        angle=minang-hrang;
    tempangle=360-angle;
    printf("%.2lf",min(angle,tempangle));
    return 0;
}