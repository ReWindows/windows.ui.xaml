#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class ContentLinkChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeKind@ContentLinkChangedEventArgs@DirectUI@@UEAAJPEAW4ContentLinkChangeKind@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ChangeKind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentLinkInfo@ContentLinkChangedEventArgs@DirectUI@@UEAAJPEAPEAUIContentLinkInfo@Text@UI@Windows@@@Z
    virtual long get_ContentLinkInfo(::Windows::UI::Text::IContentLinkInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextRange@ContentLinkChangedEventArgs@DirectUI@@UEAAJPEAUTextRange@Documents@Xaml@UI@Windows@@@Z
    virtual long get_TextRange(::Windows::UI::Xaml::Documents::TextRange *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ContentLinkChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ContentLinkChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ContentLinkChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ContentLinkChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
