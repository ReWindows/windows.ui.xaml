#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace DirectUI {
class TextElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendAutomationPeerChildren@TextElement@DirectUI@@UEAAJPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@HH@Z
    virtual long AppendAutomationPeerChildren(WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNameImpl@TextElement@DirectUI@@QEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    long FindNameImpl(HSTRING__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateAutomationPeer@TextElement@DirectUI@@QEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    long GetOrCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCreateAutomationPeer@TextElement@DirectUI@@UEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@TextElement@DirectUI@@SAJPEAVCDependencyObject@@PEAPEAVCAutomationPeer@@@Z
    static long OnCreateAutomationPeer(CDependencyObject *, CAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAutomationPeer@TextElement@DirectUI@@QEAAXXZ
    void ResetAutomationPeer();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextElement@DirectUI@@QEAA@XZ
    TextElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AccessKeyScopeOwnerImpl@TextElement@DirectUI@@QEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long get_AccessKeyScopeOwnerImpl(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentEndImpl@TextElement@DirectUI@@QEAAJPEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    long get_ContentEndImpl(::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentStartImpl@TextElement@DirectUI@@QEAAJPEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    long get_ContentStartImpl(::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ElementEndImpl@TextElement@DirectUI@@QEAAJPEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    long get_ElementEndImpl(::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ElementStartImpl@TextElement@DirectUI@@QEAAJPEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    long get_ElementStartImpl(::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AccessKeyScopeOwnerImpl@TextElement@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long put_AccessKeyScopeOwnerImpl(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_XamlRootImpl@TextElement@DirectUI@@QEAAJPEAUIXamlRoot@Xaml@UI@Windows@@@Z
    long put_XamlRootImpl(::Windows::UI::Xaml::IXamlRoot *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextElement@DirectUI@@UEAA@XZ
    virtual ~TextElement();
};
} // namespace DirectUI
