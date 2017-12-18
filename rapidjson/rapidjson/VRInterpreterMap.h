#ifndef INTERPRETERMAP_H
#define INTERPRETERMAP_H

#include "VRInterpreter.h"

class InterpreterMap : public interpreter
{
public:
    InterpreterMap(rapidjson::Document* doc, ResolutionIF* resolution)
    {
        this->m_doc = doc;
        this->m_resolution = resolution;
    }

    virtual ~InterpreterMap();

    static interpreter* GetInstance(rapidjson::Document* doc, ResolutionIF* resolution)
    {
        static InterpreterMap m_interpreter(doc, resolution);
        return &m_interpreter;
    }

    void loadFunc();
};

#endif // INTERPRETERMAP_H
