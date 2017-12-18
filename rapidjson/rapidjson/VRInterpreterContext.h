#ifndef INTERPRETERIMPL_H
#define INTERPRETERIMPL_H

#include "document.h"
//#include "interpreterIF.h"
#include "VRInterpreterLbs.h"
#include "VRInterpreterTel.h"
#include "VRInterpreterMap.h"
#include "VRInterpreterMusic.h"
#include "VRInterpreterRadio.h"
#include "VRInterpreterCmd.h"
#include <map>
#include "VRResolutionIF.h"

typedef interpreter* (*contextFun)(rapidjson::Document* doc, ResolutionIF* resolution);

static const std::pair<std::string, contextFun> type_value[] =
{
    std::make_pair("telephone", &InterpreterTel::GetInstance),
    std::make_pair("radio", &InterpreterRadio::GetInstance),
    std::make_pair("map", &InterpreterMap::GetInstance),
    std::make_pair("lbs", &InterpreterLbs::GetInstance),
    std::make_pair("music", &InterpreterMusic::GetInstance),
    std::make_pair("cmd", &InterpreterCmd::GetInstance)
};

static std::map<std::string, contextFun> interpreterMap(type_value, type_value+sizeof(type_value)/sizeof(type_value[0]));

class interpreterContext
{
public:
    interpreterContext(const char *json);

    virtual ~interpreterContext();

    virtual void interStart();

    virtual ResolutionIF* getResolution();

protected:

    rapidjson::Document m_doc;
    ResolutionIF* m_resolution;

    interpreter* m_specinter;

};

#endif // INTERPRETERIMPL_H
