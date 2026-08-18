#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class ToggleSwitchTemplateSettings {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ToggleSwitchTemplateSettings@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurtainCurrentToOffOffset@ToggleSwitchTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_CurtainCurrentToOffOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurtainCurrentToOnOffset@ToggleSwitchTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_CurtainCurrentToOnOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurtainOffToOnOffset@ToggleSwitchTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_CurtainOffToOnOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurtainOnToOffOffset@ToggleSwitchTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_CurtainOnToOffOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KnobCurrentToOffOffset@ToggleSwitchTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_KnobCurrentToOffOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KnobCurrentToOnOffset@ToggleSwitchTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_KnobCurrentToOnOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KnobOffToOnOffset@ToggleSwitchTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_KnobOffToOnOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KnobOnToOffOffset@ToggleSwitchTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_KnobOnToOffOffset(double *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ToggleSwitchTemplateSettings@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ToggleSwitchTemplateSettings@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ToggleSwitchTemplateSettings@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ToggleSwitchTemplateSettings@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
