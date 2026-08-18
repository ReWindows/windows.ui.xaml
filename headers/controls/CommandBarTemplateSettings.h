#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class CommandBarTemplateSettings {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CommandBarTemplateSettings@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentHeight@CommandBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_ContentHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EffectiveOverflowButtonVisibility@CommandBarTemplateSettings@DirectUI@@UEAAJPEAW4Visibility@Xaml@UI@Windows@@@Z
    virtual long get_EffectiveOverflowButtonVisibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NegativeOverflowContentHeight@CommandBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_NegativeOverflowContentHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverflowContentClipRect@CommandBarTemplateSettings@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_OverflowContentClipRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverflowContentHeight@CommandBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_OverflowContentHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverflowContentHorizontalOffset@CommandBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_OverflowContentHorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverflowContentMaxHeight@CommandBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_OverflowContentMaxHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverflowContentMaxWidth@CommandBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_OverflowContentMaxWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverflowContentMinWidth@CommandBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_OverflowContentMinWidth(double *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CommandBarTemplateSettings@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CommandBarTemplateSettings@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CommandBarTemplateSettings@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CommandBarTemplateSettings@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
