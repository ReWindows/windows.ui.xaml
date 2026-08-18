#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class NoFocusCandidateFoundEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Direction@NoFocusCandidateFoundEventArgs@DirectUI@@UEAAJPEAW4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    virtual long get_Direction(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@NoFocusCandidateFoundEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputDevice@NoFocusCandidateFoundEventArgs@DirectUI@@UEAAJPEAW4FocusInputDeviceKind@Input@Xaml@UI@Windows@@@Z
    virtual long get_InputDevice(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@NoFocusCandidateFoundEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@NoFocusCandidateFoundEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@NoFocusCandidateFoundEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@NoFocusCandidateFoundEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@NoFocusCandidateFoundEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
