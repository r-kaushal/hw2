#ifndef _PERSON_H_
#define _PERSON_H_

#include "ecs36b_Common.h"
#include "GPS_DD.h"
#include "JvTime.h"

class Person{
    public:
    string name;
    int age; 
    GPS_DD homeLocation;
    GPS_DD currentLocation;
    JvTime since_when;
    Person(std::string, GPS_DD);
    Person();
   void setName(string name); string getName();
   void setAge(int age); int getAge();
   void setHome(GPS_DD); GPS_DD getHome();
   void setLocation(GPS_DD, JvTime); GPS_DD getLocation();
   Json::Value dump2JSON();
    JvTime getLocationTime();


    
};

#endif