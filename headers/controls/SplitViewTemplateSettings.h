#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class SplitViewTemplateSettings {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SplitViewTemplateSettings@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompactPaneGridLength@SplitViewTemplateSettings@DirectUI@@UEAAJPEAUGridLength@Xaml@UI@Windows@@@Z
    virtual long get_CompactPaneGridLength(::Windows::UI::Xaml::GridLength *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NegativeOpenPaneLength@SplitViewTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_NegativeOpenPaneLength(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NegativeOpenPaneLengthMinusCompactLength@SplitViewTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_NegativeOpenPaneLengthMinusCompactLength(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OpenPaneGridLength@SplitViewTemplateSettings@DirectUI@@UEAAJPEAUGridLength@Xaml@UI@Windows@@@Z
    virtual long get_OpenPaneGridLength(::Windows::UI::Xaml::GridLength *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OpenPaneLength@SplitViewTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_OpenPaneLength(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OpenPaneLengthMinusCompactLength@SplitViewTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_OpenPaneLengthMinusCompactLength(double *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SplitViewTemplateSettings@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SplitViewTemplateSettings@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SplitViewTemplateSettings@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SplitViewTemplateSettings@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
