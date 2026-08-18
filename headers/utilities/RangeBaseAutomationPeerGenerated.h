#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class RangeBaseAutomationPeerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@RangeBaseAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@RangeBaseAutomationPeerGenerated@DirectUI@@UEAAJN@Z
    virtual long SetValue(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@RangeBaseAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsReadOnly(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LargeChange@RangeBaseAutomationPeerGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_LargeChange(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Maximum@RangeBaseAutomationPeerGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_Maximum(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Minimum@RangeBaseAutomationPeerGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_Minimum(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SmallChange@RangeBaseAutomationPeerGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_SmallChange(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@RangeBaseAutomationPeerGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_Value(double *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RangeBaseAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RangeBaseAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@RangeBaseAutomationPeerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RangeBaseAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
