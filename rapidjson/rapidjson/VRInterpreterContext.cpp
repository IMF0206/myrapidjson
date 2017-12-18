#include "VRInterpreterContext.h"

using namespace rapidjson;

interpreterContext::interpreterContext(const char *json)
{
    m_resolution = new ResolutionIF();
    m_doc.Parse<0>(json);
    if(m_doc.HasParseError() || !m_doc.HasMember("service")) {
        printf("load error \n");
        m_specinter = interpreter::GetInstance(&m_doc, m_resolution);
        return;
    }

    std::string type = m_doc["service"].GetString();
    m_specinter = interpreterMap[type](&m_doc, m_resolution);
}

interpreterContext::~interpreterContext()
{
    if (m_resolution != NULL) {
        delete m_resolution;
        m_resolution = NULL;
    }
}

void interpreterContext::interStart()
{
    m_specinter->loadFunc();
    m_specinter->interpreterloop(m_doc);
}

ResolutionIF *interpreterContext::getResolution()
{
    return m_resolution;
}
