#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 28 member(s).
namespace DirectUI {
class WindowGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@WindowGenerated@DirectUI@@UEAAJXZ
    virtual long Activate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@WindowGenerated@DirectUI@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@WindowGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowContentBoundsForElement@WindowGenerated@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAURect@Foundation@6@@Z
    virtual long GetWindowContentBoundsForElement(::Windows::UI::Xaml::IDependencyObject *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowContentLayoutBoundsForElement@WindowGenerated@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAURect@Foundation@6@@Z
    virtual long GetWindowContentLayoutBoundsForElement(::Windows::UI::Xaml::IDependencyObject *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@WindowGenerated@DirectUI@@UEAAJXZ
    virtual long Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveWindow@WindowGenerated@DirectUI@@UEAAJHHHH@Z
    virtual long MoveWindow(int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseGraphicsDeviceOnSuspend@WindowGenerated@DirectUI@@UEAAJE@Z
    virtual long ReleaseGraphicsDeviceOnSuspend(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAtlasRequestCallback@WindowGenerated@DirectUI@@UEAAJPEAUIAtlasRequestCallback@Xaml@UI@Windows@@@Z
    virtual long SetAtlasRequestCallback(::Windows::UI::Xaml::IAtlasRequestCallback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAtlasSizeHint@WindowGenerated@DirectUI@@UEAAJII@Z
    virtual long SetAtlasSizeHint(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSynchronizationInfo@WindowGenerated@DirectUI@@UEAAJ_K0@Z
    virtual long SetSynchronizationInfo(uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitleBar@WindowGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long SetTitleBar(::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUseMonitorBoundsForPopupNudging@WindowGenerated@DirectUI@@UEAAJE@Z
    virtual long SetUseMonitorBoundsForPopupNudging(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@WindowGenerated@DirectUI@@UEAAJXZ
    virtual long Show();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounds@WindowGenerated@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_Bounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Compositor@WindowGenerated@DirectUI@@QEAAJPEAPEAUICompositor@Composition@UI@Windows@@@Z
    long get_Compositor(::Windows::UI::Composition::ICompositor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Content@WindowGenerated@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_Content(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoreWindow@WindowGenerated@DirectUI@@UEAAJPEAPEAUICoreWindow@Core@UI@Windows@@@Z
    virtual long get_CoreWindow(::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Dispatcher@WindowGenerated@DirectUI@@UEAAJPEAPEAUICoreDispatcher@Core@UI@Windows@@@Z
    virtual long get_Dispatcher(::Windows::UI::Core::ICoreDispatcher * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TransparentBackground@WindowGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_TransparentBackground(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visible@WindowGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Visible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Content@WindowGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long put_Content(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TransparentBackground@WindowGenerated@DirectUI@@UEAAJE@Z
    virtual long put_TransparentBackground(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WindowGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WindowGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@WindowGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WindowGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
