#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class ContentDialogClosingEventArgsGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@ContentDialogClosingEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIContentDialogClosingDeferral@Controls@Xaml@UI@Windows@@@Z
    virtual long GetDeferral(::Windows::UI::Xaml::Controls::IContentDialogClosingDeferral * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@ContentDialogClosingEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Cancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Result@ContentDialogClosingEventArgsGenerated@DirectUI@@UEAAJPEAW4ContentDialogResult@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Result(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cancel@ContentDialogClosingEventArgsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_Cancel(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ContentDialogClosingEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ContentDialogClosingEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ContentDialogClosingEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ContentDialogClosingEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
