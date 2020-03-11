#ifndef __UNIMOSCLIENT_H__
#define __UNIMOSCLIENT_H__


#include <vector>
#include <iostream>
#include <string>
#include <array>
#include <string>
#include <fstream>
#include <map>
#include <thallium.hpp>
#include <thallium/serialization/stl/string.hpp>



namespace tl = thallium;

struct UniClient
{
    UniClient(){};
    //for server enginge, the client ptr is the pointer to the server engine
    //for the client code, the client engine is the pointer to the engine with the client mode
    UniClient(tl::engine *clientEnginePtr, std::string serverAddr)
    {
        m_clientEnginePtr = clientEnginePtr;
        m_serverAddr = serverAddr;
        std::cout << "load server Addr: " << m_serverAddr << std::endl;
    };

    std::string m_serverAddr = "";
    tl::engine *m_clientEnginePtr = NULL;

    ~UniClient(){};

    void callserver1();

    void callserver2();


};

#endif