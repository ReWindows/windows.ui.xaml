#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CContentLinkChangedEventArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContentLinkChangedEventArgs@@QEAA@PEAUIContentLinkInfo@Text@UI@Windows@@UTextRange@Documents@Xaml@34@W4ContentLinkChangeKind@DirectUI@@@Z
    CContentLinkChangedEventArgs(::Windows::UI::Text::IContentLinkInfo *, ::Windows::UI::Xaml::Documents::TextRange, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrameworkPeer@CContentLinkChangedEventArgs@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long CreateFrameworkPeer(IInspectable * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContentLinkChangedEventArgs@@UEAA@XZ
    virtual ~CContentLinkChangedEventArgs();
};
