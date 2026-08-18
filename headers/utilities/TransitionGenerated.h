#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class TransitionGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStoryboard@TransitionGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@1W4TransitionTrigger@456@PEAU?$IVector@PEAVStoryboard@Animation@Media@Xaml@UI@Windows@@@Collections@86@PEAW4TransitionParent@456@@Z
    virtual long CreateStoryboard(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, WindissectOpaque, int, WindissectOpaque *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TransitionGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInTransition@TransitionGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@W4TransitionTrigger@456@PEAE@Z
    virtual long ParticipatesInTransition(::Windows::UI::Xaml::IUIElement *, int, unsigned char *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TransitionGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TransitionGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TransitionGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TransitionGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
