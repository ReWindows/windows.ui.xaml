#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class ContentLink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusImpl@ContentLink@DirectUI@@QEAAJW4FocusState@Xaml@UI@Windows@@PEAE@Z
    long FocusImpl(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@ContentLink@DirectUI@@QEAAJXZ
    long OnClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ContentLink@DirectUI@@UEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendAutomationPeerChildren@ContentLink@DirectUI@@MEAAJPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@HH@Z
    virtual long AppendAutomationPeerChildren(WindissectOpaque *, int, int);
};
} // namespace DirectUI
