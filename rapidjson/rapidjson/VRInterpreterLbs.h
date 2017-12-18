#ifndef INTERPRETERLBS_H
#define INTERPRETERLBS_H

#include "VRInterpreter.h"

class InterpreterLbs : public interpreter
{
public:
    InterpreterLbs(rapidjson::Document* doc, ResolutionIF* resolution)
    {
        this->m_doc = doc;
        this->m_resolution = resolution;
    }

    virtual ~InterpreterLbs();

    static interpreter* GetInstance(rapidjson::Document* doc, ResolutionIF* resolution)
    {
        static InterpreterLbs m_interpreter(doc, resolution);
        return &m_interpreter;
    }

    void loadFunc();
};

#endif // INTERPRETERLBS_H
