#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class ContentDialogButtonClickEventArgsGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@ContentDialogButtonClickEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIContentDialogButtonClickDeferral@Controls@Xaml@UI@Windows@@@Z
    virtual long GetDeferral(::Windows::UI::Xaml::Controls::IContentDialogButtonClickDeferral * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@ContentDialogButtonClickEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Cancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cancel@ContentDialogButtonClickEventArgsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_Cancel(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ContentDialogButtonClickEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ContentDialogButtonClickEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ContentDialogButtonClickEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ContentDialogButtonClickEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
