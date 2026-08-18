#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class PanelGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PanelGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Background@PanelGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_Background(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChildrenTransitions@PanelGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVTransition@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_ChildrenTransitions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsItemsHost@PanelGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsItemsHost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Background@PanelGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_Background(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ChildrenTransitions@PanelGenerated@DirectUI@@UEAAJPEAU?$IVector@PEAVTransition@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_ChildrenTransitions(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PanelGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PanelGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PanelGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PanelGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
