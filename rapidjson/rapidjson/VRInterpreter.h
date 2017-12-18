#ifndef INTERPRETERIF_H
#define INTERPRETERIF_H

#include "document.h"
#include "VRResolutionIF.h"
#include "VRInterpreterDEF.h"

#include <map>

class interpreter
{
public:
    interpreter(){}
    interpreter(rapidjson::Document* doc, ResolutionIF* resolution);

    virtual ~interpreter();

    static interpreter* GetInstance(rapidjson::Document* doc, ResolutionIF* resolution)
    {
        doc->Clear();
        static interpreter interpreternull(NULL, NULL);
        return &interpreternull;
    }

    virtual ResolutionIF* getResult()
    {
        return m_resolution;
    }

    virtual void loadFunc(){}

    virtual void interpreterloop(const rapidjson::Value& object);
protected:
    rapidjson::Document* m_doc;
    ResolutionIF* m_resolution;

    typedef void (ResolutionIF::*pInterfun)(const void* value);
    std::map<std::string, pInterfun> m_interpreterMap;

private:
    bool checkName(std::string name);
    void addStrValue(std::string name, const char *value);
    void addObjValue(std::string name, const rapidjson::Value &value);

};

#endif // INTERPRETERIF_H
