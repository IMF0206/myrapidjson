#ifndef INTERPRETERCMD_H
#define INTERPRETERCMD_H

#include "VRInterpreter.h"

class InterpreterCmd : public interpreter
{
public:
    InterpreterCmd(rapidjson::Document* doc, ResolutionIF* resolution)
    {
        this->m_doc = doc;
        this->m_resolution = resolution;
    }

    virtual ~InterpreterCmd();

    static interpreter* GetInstance(rapidjson::Document* doc, ResolutionIF* resolution)
    {
        static InterpreterCmd m_interpreter(doc, resolution);
        return &m_interpreter;
    }

    void loadFunc();
};

#endif // INTERPRETERCMD_H
