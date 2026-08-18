#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class XamlIslandGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@XamlIslandGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@XamlIslandGenerated@DirectUI@@UEAAJXZ
    virtual long SetFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScreenOffsetOverride@XamlIslandGenerated@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long SetScreenOffsetOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppContent@XamlIslandGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_AppContent(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Content@XamlIslandGenerated@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_Content(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FocusController@XamlIslandGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_FocusController(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaterialProperties@XamlIslandGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_MaterialProperties(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Content@XamlIslandGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long put_Content(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaterialProperties@XamlIslandGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_MaterialProperties(IInspectable *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlIslandGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlIslandGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@XamlIslandGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlIslandGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
