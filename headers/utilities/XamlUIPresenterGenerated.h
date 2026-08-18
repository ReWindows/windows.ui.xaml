#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class XamlUIPresenterGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@XamlUIPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long Present();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@XamlUIPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long Render();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@XamlUIPresenterGenerated@DirectUI@@UEAAJHH@Z
    virtual long SetSize(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RootElement@XamlUIPresenterGenerated@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_RootElement(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThemeKey@XamlUIPresenterGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ThemeKey(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThemeResourcesXaml@XamlUIPresenterGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ThemeResourcesXaml(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RootElement@XamlUIPresenterGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long put_RootElement(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ThemeKey@XamlUIPresenterGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ThemeKey(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ThemeResourcesXaml@XamlUIPresenterGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ThemeResourcesXaml(HSTRING__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlUIPresenterGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlUIPresenterGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@XamlUIPresenterGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlUIPresenterGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
