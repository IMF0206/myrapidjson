#include "VRInterpreterLoc.h"

using namespace rapidjson;
using namespace std;

//InterpreterLoc::~InterpreterLoc()
//{

//}

void InterpreterLoc::loadFunc()
{
    m_interpreterMap.clear();
    m_interpreterMap[VR_CITY] = &ResolutionIF::setCity;
    m_interpreterMap[VR_TYPE] = &ResolutionIF::setType;
    m_interpreterMap[VR_ORILOC] = &ResolutionIF::setOriloc;
    m_interpreterMap[VR_POI] = &ResolutionIF::setPoi;
    m_interpreterMap[VR_STREET] = &ResolutionIF::setStreet;
    m_interpreterMap[VR_HOUSENUMBER] = &ResolutionIF::setHouseNumber;
}

