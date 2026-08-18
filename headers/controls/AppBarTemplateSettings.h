#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class AppBarTemplateSettings {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@AppBarTemplateSettings@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClipRect@AppBarTemplateSettings@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_ClipRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompactRootMargin@AppBarTemplateSettings@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_CompactRootMargin(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompactVerticalDelta@AppBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_CompactVerticalDelta(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HiddenRootMargin@AppBarTemplateSettings@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_HiddenRootMargin(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HiddenVerticalDelta@AppBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_HiddenVerticalDelta(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinimalRootMargin@AppBarTemplateSettings@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_MinimalRootMargin(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinimalVerticalDelta@AppBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_MinimalVerticalDelta(double *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AppBarTemplateSettings@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AppBarTemplateSettings@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@AppBarTemplateSettings@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AppBarTemplateSettings@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
