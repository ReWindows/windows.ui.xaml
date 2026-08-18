#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
namespace DirectUI {
class XamlPresenterGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePresenter@XamlPresenterGenerated@DirectUI@@UEAAJXZ
    virtual long InitializePresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePresenterWithTheme@XamlPresenterGenerated@DirectUI@@UEAAJW4ApplicationTheme@Xaml@UI@Windows@@@Z
    virtual long InitializePresenterWithTheme(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAtlasSizeHint@XamlPresenterGenerated@DirectUI@@UEAAJII@Z
    virtual long SetAtlasSizeHint(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCaretWidth@XamlPresenterGenerated@DirectUI@@UEAAJH@Z
    virtual long SetCaretWidth(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFontScale@XamlPresenterGenerated@DirectUI@@UEAAJM@Z
    virtual long SetFontScale(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewActivityState@XamlPresenterGenerated@DirectUI@@UEAAJEE@Z
    virtual long SetViewActivityState(unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounds@XamlPresenterGenerated@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_Bounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Content@XamlPresenterGenerated@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_Content(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestedTheme@XamlPresenterGenerated@DirectUI@@UEAAJPEAW4ApplicationTheme@Xaml@UI@Windows@@@Z
    virtual long get_RequestedTheme(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Resources@XamlPresenterGenerated@DirectUI@@UEAAJPEAPEAUIResourceDictionary@Xaml@UI@Windows@@@Z
    virtual long get_Resources(::Windows::UI::Xaml::IResourceDictionary * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TransparentBackground@XamlPresenterGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_TransparentBackground(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Content@XamlPresenterGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long put_Content(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RequestedTheme@XamlPresenterGenerated@DirectUI@@UEAAJW4ApplicationTheme@Xaml@UI@Windows@@@Z
    virtual long put_RequestedTheme(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Resources@XamlPresenterGenerated@DirectUI@@UEAAJPEAUIResourceDictionary@Xaml@UI@Windows@@@Z
    virtual long put_Resources(::Windows::UI::Xaml::IResourceDictionary *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TransparentBackground@XamlPresenterGenerated@DirectUI@@UEAAJE@Z
    virtual long put_TransparentBackground(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlPresenterGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlPresenterGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@XamlPresenterGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlPresenterGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
