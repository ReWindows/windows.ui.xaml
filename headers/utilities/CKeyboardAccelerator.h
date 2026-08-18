#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CKeyboardAccelerator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CKeyboardAccelerator@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CKeyboardAccelerator@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CKeyboardAccelerator@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CKeyboardAccelerator@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CKeyboardAccelerator@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CKeyboardAccelerator@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseEvent@CKeyboardAccelerator@@UEAAIUEventHandle@@IPEAVCEventArgs@@@Z
    virtual unsigned int ShouldRaiseEvent(EventHandle, unsigned int, CEventArgs *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKeyboardAccelerator@@EEAA@XZ
    virtual ~CKeyboardAccelerator();
};
