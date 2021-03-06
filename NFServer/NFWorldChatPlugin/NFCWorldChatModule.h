// -------------------------------------------------------------------------
//    @FileName      :    NFCWorldChatModule.h
//    @Author           :    LvSheng.Huang
//    @Date             :    2015-05-24 08:51
//    @Module           :   NFCWorldChatModule
//
// -------------------------------------------------------------------------

#ifndef _NFC_WORLD_Chat_MODULE_H_
#define _NFC_WORLD_Chat_MODULE_H_

#include "NFComm/NFCore/NFMap.h"
#include "NFComm/NFPluginModule/NFIKernelModule.h"
#include "NFComm/NFPluginModule/NFIWorldChatModule.h"
#include "NFComm/NFPluginModule/NFIEventProcessModule.h"

class NFCWorldChatModule
    : public NFIWorldChatModule
{
public:
    NFCWorldChatModule(NFIPluginManager* p)
    {
        pPluginManager = p;
    }

    virtual bool Init();
    virtual bool Shut();
    virtual bool Execute(const float fLasFrametime, const float fStartedTime);

    virtual bool AfterInit();


	//////////////////////////////////////////////////////////////////////////
protected:

protected:
    NFIEventProcessModule* m_pEventProcessModule;
    NFIKernelModule* m_pKernelModule;
private:
};

#endif