#ifndef INTERPRETERLOC_H
#define INTERPRETERLOC_H

#include "VRInterpreter.h"

class InterpreterLoc : public interpreter
{
public:
    InterpreterLoc(rapidjson::Document* doc, ResolutionIF* resolution)
    {
        this->m_doc = doc;
        this->m_resolution = resolution;
    }
//    static interpreter* GetInstance(rapidjson::Document* doc)
//    {
//        static InterpreterLoc m_interpreter(doc);
//        return &m_interpreter;
//    }

    void loadFunc();

//    void interpreterloop(rapidjson::Value::Object object, ResolutionIF *res);

//    void addStrValue(std::string name, const char* value, ResolutionIF *res);
//    void addObjValue(std::string name, rapidjson::Value::Object value, ResolutionIF *res);
};

#endif // INTERPRETERLOC_H
