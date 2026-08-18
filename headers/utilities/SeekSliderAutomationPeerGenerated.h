#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class SeekSliderAutomationPeerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SeekSliderAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@SeekSliderAutomationPeerGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetValue(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@SeekSliderAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsReadOnly(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@SeekSliderAutomationPeerGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Value(HSTRING__* *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SeekSliderAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SeekSliderAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SeekSliderAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
