#ifndef _GPS_H_
#define _GPS_H_


#include "ecs36b_Common.h"

class GPS_DD
{
  string locationName;
  string objectsNear;
  bool inWoods;
  Json::Value dump2JSON();
  GPS_DD(string, string, bool);
  GPS_DD();
};

#endif /* _GPS_H_ */
