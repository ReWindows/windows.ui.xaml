#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
class CXcpDispatcher {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CXcpDispatcher@@QEAA@XZ
    CXcpDispatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CXcpDispatcher@@SAJPEAUIXcpHostSite@@PEAPEAUIXcpDispatcher@@@Z
    static long Create(IXcpHostSite *, IXcpDispatcher * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinit@CXcpDispatcher@@UEAAXXZ
    virtual void Deinit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disable@CXcpDispatcher@@UEAAXXZ
    virtual void Disable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserHost@CXcpDispatcher@@UEAAPEAUIXcpBrowserHost@@XZ
    virtual IXcpBrowserHost * GetBrowserHost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostSite@CXcpDispatcher@@UEAAPEAUIXcpHostSite@@XZ
    virtual IXcpHostSite * GetHostSite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CXcpDispatcher@@UEAAJPEAUIXcpHostSite@@@Z
    virtual long Init(IXcpHostSite *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReentrancyAllowed@CXcpDispatcher@@UEAAJPEAH@Z
    virtual long IsReentrancyAllowed(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaint@CXcpDispatcher@@UEAAJXZ
    virtual long OnPaint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostMessageWithResource@CXcpDispatcher@@QEAAJI_K_J@Z
    long PostMessageWithResource(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAllDeferredInvokes@CXcpDispatcher@@UEAAXXZ
    virtual void ProcessAllDeferredInvokes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueDeferredInvoke@CXcpDispatcher@@UEAAJI_K_J@Z
    virtual long QueueDeferredInvoke(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueTick@CXcpDispatcher@@UEAAJXZ
    virtual long QueueTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMessageResources@CXcpDispatcher@@SAXPEAUHWND__@@I_K_J@Z
    static void ReleaseMessageResources(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrowserHost@CXcpDispatcher@@UEAAJPEAUIXcpBrowserHost@@@Z
    virtual long SetBrowserHost(IXcpBrowserHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControl@CXcpDispatcher@@UEAAJPEAXP6AJ0PEAVCDependencyObject@@UEventHandle@@1PEAVCEventArgs@@HPEAUIScriptObject@@P6AJ13@Z@Z@Z
    virtual long SetControl(void *, long ( *)(void *, CDependencyObject *, EventHandle, CDependencyObject *, CEventArgs *, int, IScriptObject *, long ( *)(CDependencyObject *, CEventArgs *)));
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTicksEnabled@CXcpDispatcher@@QEAAJI@Z
    long SetTicksEnabled(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CXcpDispatcher@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CXcpDispatcher@@UEAAXXZ
    virtual void Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Tick@CXcpDispatcher@@UEAAXXZ
    virtual void Tick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowProc@CXcpDispatcher@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t WindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CXcpDispatcher@@UEAA@XZ
    virtual ~CXcpDispatcher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageTimerCallbackStatic@CXcpDispatcher@@CAJPEAX@Z
    static long MessageTimerCallbackStatic(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnError@CXcpDispatcher@@AEAAXPEAUIErrorService@@@Z
    void OnError(IErrorService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReentrancyProtectedWindowMessage@CXcpDispatcher@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t OnReentrancyProtectedWindowMessage(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScriptCallback@CXcpDispatcher@@AEAAXPEAUCEventInfo@@@Z
    void OnScriptCallback(CEventInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMessage@CXcpDispatcher@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t OnWindowMessage(HWND__*, unsigned int, uint64_t, int64_t);
};
