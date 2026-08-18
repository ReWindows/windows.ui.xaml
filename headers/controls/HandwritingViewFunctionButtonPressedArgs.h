#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class HandwritingViewFunctionButtonPressedArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FunctionButtonType@HandwritingViewFunctionButtonPressedArgs@DirectUI@@UEAAJPEAW4HandwritingViewFunctionButtonType@Controls@Xaml@UI@Windows@@@Z
    virtual long get_FunctionButtonType(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@HandwritingViewFunctionButtonPressedArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@HandwritingViewFunctionButtonPressedArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@HandwritingViewFunctionButtonPressedArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@HandwritingViewFunctionButtonPressedArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
