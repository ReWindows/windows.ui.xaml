#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class NavigationTransitionInfoGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStoryboards@NavigationTransitionInfoGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@W4NavigationTrigger@Animation@Media@456@PEAU?$IVector@PEAVStoryboard@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long CreateStoryboards(::Windows::UI::Xaml::IUIElement *, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStoryboardsCore@NavigationTransitionInfoGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@W4NavigationTrigger@Animation@Media@456@PEAU?$IVector@PEAVStoryboard@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long CreateStoryboardsCore(::Windows::UI::Xaml::IUIElement *, int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationStateCore@NavigationTransitionInfoGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetNavigationStateCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@NavigationTransitionInfoGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationStateCore@NavigationTransitionInfoGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetNavigationStateCore(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationStateCoreProtected@NavigationTransitionInfoGenerated@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long SetNavigationStateCoreProtected(HSTRING__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@NavigationTransitionInfoGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@NavigationTransitionInfoGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@NavigationTransitionInfoGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@NavigationTransitionInfoGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
