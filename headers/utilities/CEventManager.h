#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 33 member(s).
class CEventManager {
public:
    class RaiseArguments;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CEventManager@@SAJPEAVCDependencyObject@@PEAPEAV?$CXcpList@UREQUEST@@@@UEventHandle@@PEAVCValue@@H3_N4@Z
    static long AddEventListener(CDependencyObject *, WindissectOpaque * *, EventHandle, CValue *, int, CValue *, bool, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEventManager@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRequest@CEventManager@@QEAAJPEAVCDependencyObject@@PEAUREQUEST@@@Z
    long AddRequest(CDependencyObject *, REQUEST *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRequestsInOrder@CEventManager@@QEAAJPEAVCDependencyObject@@PEAV?$CXcpList@UREQUEST@@@@@Z
    long AddRequestsInOrder(CDependencyObject *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearRequests@CEventManager@@QEAAJXZ
    long ClearRequests();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CEventManager@@SAJPEAVCCoreServices@@PEAPEAV1@@Z
    static long Create(CCoreServices *, CEventManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CEventManager@@UEAAJXZ
    virtual long Execute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushQueue@CEventManager@@QEAAJXZ
    long FlushQueue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRegisteredForEvent@CEventManager@@QEAA_NPEAVCDependencyObject@@UEventHandle@@@Z
    bool IsRegisteredForEvent(CDependencyObject *, EventHandle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessQueue@CEventManager@@QEAAJI@Z
    long ProcessQueue(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Raise@CEventManager@@QEAAXUEventHandle@@HPEAVCDependencyObject@@PEAVCEventArgs@@_N331@Z
    void Raise(EventHandle, int, CDependencyObject *, CEventArgs *, bool, bool, bool, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCallback@CEventManager@@QEAAXPEAVCEventArgs@@@Z
    void RaiseCallback(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseLoadedEvent@CEventManager@@QEAAJXZ
    long RaiseLoadedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseRoutedEvent@CEventManager@@QEAA_NUEventHandle@@PEAVCDependencyObject@@PEAVCRoutedEventArgs@@_N331W4RoutingStrategy@@@Z
    bool RaiseRoutedEvent(EventHandle, CDependencyObject *, CRoutedEventArgs *, bool, bool, bool, CDependencyObject *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEventManager@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CEventManager@@SAJPEAVCDependencyObject@@PEAV?$CXcpList@UREQUEST@@@@UEventHandle@@PEAVCValue@@_N@Z
    static long RemoveEventListener(CDependencyObject *, WindissectOpaque *, EventHandle, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromLoadedEventList@CEventManager@@QEAAJPEAVCDependencyObject@@PEA_N@Z
    long RemoveFromLoadedEventList(CDependencyObject *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveObject@CEventManager@@QEAAJPEAVCDependencyObject@@@Z
    long RemoveObject(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRequest@CEventManager@@QEAAJPEAVCDependencyObject@@PEAUREQUEST@@@Z
    long RemoveRequest(CDependencyObject *, REQUEST *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRequests@CEventManager@@QEAAJPEAVCDependencyObject@@PEAV?$CXcpList@UREQUEST@@@@@Z
    long RemoveRequests(CDependencyObject *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThreadSafeRaise@CEventManager@@QEAAXUEventHandle@@HPEAVCDependencyObject@@PEAPEAVCEventArgs@@II@Z
    void ThreadSafeRaise(EventHandle, int, CDependencyObject *, CEventArgs * *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceInputEventBegin@CEventManager@@QEAAXPEBVCDependencyObject@@PEAVCEventArgs@@AEBUEventHandle@@@Z
    void TraceInputEventBegin(CDependencyObject const *, CEventArgs *, EventHandle const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceInputEventEnd@CEventManager@@QEAAXPEAVCEventArgs@@AEBUEventHandle@@@Z
    void TraceInputEventEnd(CEventArgs *, EventHandle const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToLoadedEventList@CEventManager@@AEAAJPEAVCDependencyObject@@@Z
    long AddToLoadedEventList(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSyncInputEvent@CEventManager@@AEBA_NUEventHandle@@@Z
    bool IsSyncInputEvent(EventHandle) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseHelper@CEventManager@@AEAAJPEAV?$xvector@PEAUREQUEST@@@@UEventHandle@@PEAVCDependencyObject@@PEAVCEventArgs@@HP6AJPEAX2123HPEAUIScriptObject@@P6AJ23@Z@ZAEAI2@Z
    long RaiseHelper(WindissectOpaque *, EventHandle, CDependencyObject *, CEventArgs *, int, long ( *)(void *, CDependencyObject *, EventHandle, CDependencyObject *, CEventArgs *, int, IScriptObject *, long ( *)(CDependencyObject *, CEventArgs *)), unsigned int &, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseLoadedEventForObject@CEventManager@@AEAAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    long RaiseLoadedEventForObject(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseRoutedEventTunnelling@CEventManager@@AEAAXUEventHandle@@PEAVCDependencyObject@@PEAVCRoutedEventArgs@@_N33@Z
    void RaiseRoutedEventTunnelling(EventHandle, CDependencyObject *, CRoutedEventArgs *, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAdditionalFrame@CEventManager@@AEAAJXZ
    long RequestAdditionalFrame();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEventManager@@AEAA@XZ
    ~CEventManager();
};
