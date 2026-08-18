#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 35 member(s).
namespace DirectUI {
class ApplicationBarServicePhone {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationBarServicePhone@DirectUI@@QEAA@XZ
    ApplicationBarServicePhone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCaches@ApplicationBarServicePhone@DirectUI@@UEAAJXZ
    virtual long ClearCaches();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseAllNonStickyAppBars@ApplicationBarServicePhone@DirectUI@@UEAAJPEA_N@Z
    virtual long CloseAllNonStickyAppBars(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseAllNonStickyAppBars@ApplicationBarServicePhone@DirectUI@@UEAAJXZ
    virtual long CloseAllNonStickyAppBars();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseApplicationBar@ApplicationBarServicePhone@DirectUI@@UEAAJPEAVAppBar@2@W4AppBarMode@2@@Z
    virtual long CloseApplicationBar(::DirectUI::AppBar *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusApplicationBar@ApplicationBarServicePhone@DirectUI@@UEAAJPEAVAppBar@2@W4FocusState@Xaml@UI@Windows@@@Z
    virtual long FocusApplicationBar(::DirectUI::AppBar *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusSavedElement@ApplicationBarServicePhone@DirectUI@@UEAAJPEAVAppBar@2@@Z
    virtual long FocusSavedElement(::DirectUI::AppBar *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppBarStatus@ApplicationBarServicePhone@DirectUI@@UEAAJPEAI0PEAM10011@Z
    virtual long GetAppBarStatus(unsigned int *, unsigned int *, float *, float *, unsigned int *, unsigned int *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFocusableElementFromAppBars@ApplicationBarServicePhone@DirectUI@@UEAAJPEAVAppBar@2@0W4AppBarTabPriority@2@EPEAPEAVCDependencyObject@@@Z
    virtual long GetFirstFocusableElementFromAppBars(::DirectUI::AppBar *, ::DirectUI::AppBar *, int, unsigned char, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopAndBottomAppBars@ApplicationBarServicePhone@DirectUI@@UEAAJPEAPEAVAppBar@2@0@Z
    virtual long GetTopAndBottomAppBars(::DirectUI::AppBar * *, ::DirectUI::AppBar * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopAndBottomOpenAppBars@ApplicationBarServicePhone@DirectUI@@UEAAJPEAPEAVAppBar@2@0PEAE@Z
    virtual long GetTopAndBottomOpenAppBars(::DirectUI::AppBar * *, ::DirectUI::AppBar * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleApplicationBarClosedDisplayModeChange@ApplicationBarServicePhone@DirectUI@@UEAAJPEAVAppBar@2@W4AppBarMode@2@@Z
    virtual long HandleApplicationBarClosedDisplayModeChange(::DirectUI::AppBar *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ApplicationBarServicePhone@DirectUI@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBoundsChanged@ApplicationBarServicePhone@DirectUI@@UEAAJE@Z
    virtual long OnBoundsChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenApplicationBar@ApplicationBarServicePhone@DirectUI@@UEAAJPEAVAppBar@2@W4AppBarMode@2@@Z
    virtual long OpenApplicationBar(::DirectUI::AppBar *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStopOverride@ApplicationBarServicePhone@DirectUI@@UEAAJPEAVDependencyObject@2@0EPEAPEAV32@PEAE@Z
    virtual long ProcessTabStopOverride(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, unsigned char, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessToggleApplicationBarsFromMouseRightTapped@ApplicationBarServicePhone@DirectUI@@UEAAJXZ
    virtual long ProcessToggleApplicationBarsFromMouseRightTapped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterApplicationBar@ApplicationBarServicePhone@DirectUI@@UEAAJPEAVAppBar@2@W4AppBarMode@2@@Z
    virtual long RegisterApplicationBar(::DirectUI::AppBar *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetFocusReturnState@ApplicationBarServicePhone@DirectUI@@UEAAXXZ
    virtual void ResetFocusReturnState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveCurrentFocusedElement@ApplicationBarServicePhone@DirectUI@@UEAAJPEAVAppBar@2@@Z
    virtual long SaveCurrentFocusedElement(::DirectUI::AppBar *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusReturnState@ApplicationBarServicePhone@DirectUI@@UEAAXW4FocusState@Xaml@UI@Windows@@@Z
    virtual void SetFocusReturnState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleApplicationBars@ApplicationBarServicePhone@DirectUI@@UEAAJXZ
    virtual long ToggleApplicationBars();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterApplicationBar@ApplicationBarServicePhone@DirectUI@@UEAAJPEAVAppBar@2@@Z
    virtual long UnregisterApplicationBar(::DirectUI::AppBar *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDismissLayer@ApplicationBarServicePhone@DirectUI@@UEAAJXZ
    virtual long UpdateDismissLayer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationBarServicePhone@DirectUI@@UEAA@XZ
    virtual ~ApplicationBarServicePhone();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ApplicationBarServicePhone@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ApplicationBarServicePhone@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ApplicationBarServicePhone@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandBarLoaded@ApplicationBarServicePhone@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnCommandBarLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandBarUnloaded@ApplicationBarServicePhone@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnCommandBarUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshBounds@ApplicationBarServicePhone@DirectUI@@AEAAJXZ
    long RefreshBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentCommandBar@ApplicationBarServicePhone@DirectUI@@AEAAJXZ
    long UpdateCurrentCommandBar();
};
} // namespace DirectUI
