#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class CVisualStateGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CVisualStateGroup@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureStoryboardSafeForStart@CVisualStateGroup@@SAJPEAVCFrameworkElement@@PEAVCStoryboard@@@Z
    static long EnsureStoryboardSafeForStart(CFrameworkElement *, CStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindStateByName@CVisualStateGroup@@QEAAJPEBGPEAPEAVCVisualState@@@Z
    long FindStateByName(unsigned short const *, CVisualState * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentVisualState@CVisualStateGroup@@QEAAJPEAPEAVCVisualState@@@Z
    long GetCurrentVisualState(CVisualState * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CVisualStateGroup@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVisualStateEvent@CVisualStateGroup@@QEAAJPEAVCVisualState@@0W4VisualStateGroupEvent@1@PEAVCControl@@@Z
    long NotifyVisualStateEvent(CVisualState *, CVisualState *, int, CControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CVisualStateGroup@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentVisualState@CVisualStateGroup@@QEAAJPEAVCVisualState@@@Z
    long SetCurrentVisualState(CVisualState *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseEvent@CVisualStateGroup@@UEAAIUEventHandle@@IPEAVCEventArgs@@@Z
    virtual unsigned int ShouldRaiseEvent(EventHandle, unsigned int, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNewThenStopOld@CVisualStateGroup@@QEAAJPEAVCFrameworkElement@@HPEAPEAVCStoryboard@@@Z
    long StartNewThenStopOld(CFrameworkElement *, int, CStoryboard * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisualStateGroup@@UEAA@XZ
    virtual ~CVisualStateGroup();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CVisualStateGroup@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CVisualStateGroup@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisualStateGroup@@AEAA@PEAVCCoreServices@@@Z
    CVisualStateGroup(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupRunningStoryboardsOnLeave@CVisualStateGroup@@AEAAJXZ
    long CleanupRunningStoryboardsOnLeave();
};
