
#include "client.h"
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "client.h"

void UniClient::callserver1()
{
    tl::endpoint serverEndpoint = this->m_clientEnginePtr->lookup(this->m_serverAddr);
    //the parameters here should be consistent with the defination at the server end
    std::string input("testserver1");
    int status = m_remoteserver1.on(serverEndpoint)(input);
    if (status != 0)
    {
        throw std::runtime_error("failed for testserver1");
    }
    return;
}

void UniClient::callserver2()
{
    tl::endpoint serverEndpoint = this->m_clientEnginePtr->lookup(this->m_serverAddr);
    //the parameters here should be consistent with the defination at the server end
    std::string input("testserver2");
    int status = m_remoteserver2.on(serverEndpoint)(input);
    std::cout << "call callserver2" << std::endl;
    if (status !=  0)
    {
        throw std::runtime_error("failed for testserver2");
    }
    return;
}