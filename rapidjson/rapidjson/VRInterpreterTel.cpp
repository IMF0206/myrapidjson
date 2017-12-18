#include "VRInterpreterTel.h"

using namespace rapidjson;
using namespace std;


InterpreterTel::~InterpreterTel()
{
}

void InterpreterTel::loadFunc()
{
    m_interpreterMap.clear();
    m_interpreterMap[VR_SERVICE] = &ResolutionIF::setService;
    m_interpreterMap[VR_TEXT] = &ResolutionIF::setText;
    m_interpreterMap[VR_OPERATION] = &ResolutionIF::setOperation;
    m_interpreterMap[VR_CATEGORY] = &ResolutionIF::setCategory;
    m_interpreterMap[VR_NAME] = &ResolutionIF::setName;
    m_interpreterMap[VR_NAMEORIG] = &ResolutionIF::setNameOrig;
    m_interpreterMap[VR_CODE] = &ResolutionIF::setCode;
}

