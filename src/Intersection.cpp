#include "Intersection.h"



Intersection::Intersection()
:isHappened(false)
,coordinate(std::numeric_limits<float>::infinity(), std::numeric_limits<float>::infinity(), std::numeric_limits<float>::infinity())
,normal(1, 0, 0)
,material()
,tOfRayWhenIntersected(std::numeric_limits<float>::infinity())
{

}