
#ifndef _THING_H_
#define _THING_H_

#include "ecs36b_Common.h"
#include "Person.h"
#include "JvTime.h"
#include "GPS.h"

class Thing
{
 
 public:
  
  string thingName;
  string sequence_num;
  string description;
  Person owner;
  JvTime purchased;
  JvTime sold;

  GPS_DD location;
  
  Thing();
  Thing(Person arg_owner);

  Json::Value dump2JSON(); 

};

#endif 
