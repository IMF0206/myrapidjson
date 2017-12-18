#ifndef INTERPRETERTEL_H
#define INTERPRETERTEL_H

#include "VRInterpreter.h"
#include <stdio.h>


class InterpreterTel : public interpreter
{
public:
    InterpreterTel(rapidjson::Document* doc, ResolutionIF* resolution)
    {
        this->m_doc = doc;
        this->m_resolution = resolution;
    }

    virtual ~InterpreterTel();

    static interpreter* GetInstance(rapidjson::Document* doc, ResolutionIF* resolution)
    {
        static InterpreterTel m_interpreter(doc, resolution);
        return &m_interpreter;
    }

    void loadFunc();
};

#endif // INTERPRETERTEL_H
