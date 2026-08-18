#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class ItemsControlAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddItemAutomationPeerToItemPeerStorage@ItemsControlAutomationPeer@DirectUI@@QEAAJPEAVItemAutomationPeer@2@@Z
    long AddItemAutomationPeerToItemPeerStorage(::DirectUI::ItemAutomationPeer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateItemAutomationPeerImpl@ItemsControlAutomationPeer@DirectUI@@QEAAJPEAUIInspectable@@PEAPEAUIItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    long CreateItemAutomationPeerImpl(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItemByPropertyImpl@ItemsControlAutomationPeer@DirectUI@@QEAAJPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@PEAUIAutomationProperty@5678@PEAUIInspectable@@PEAPEAU345678@@Z
    long FindItemByPropertyImpl(::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple *, ::Windows::UI::Xaml::Automation::IAutomationProperty *, IInspectable *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAutomationPeerEventsSourceStatic@ItemsControlAutomationPeer@DirectUI@@SAJPEAUIFrameworkElementAutomationPeer@Peers@Automation@Xaml@UI@Windows@@PEAUIAutomationPeer@45678@@Z
    static long GenerateAutomationPeerEventsSourceStatic(::Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer *, ::Windows::UI::Xaml::Automation::Peers::IAutomationPeer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateEventsSourceForContainerItemPeer@ItemsControlAutomationPeer@DirectUI@@QEAAJPEAUIFrameworkElementAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    long GenerateEventsSourceForContainerItemPeer(::Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@ItemsControlAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetChildrenCore(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemPeerFromChildrenCache@ItemsControlAutomationPeer@DirectUI@@QEAAJPEAUIInspectable@@PEAPEAUIItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    long GetItemPeerFromChildrenCache(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemPeerFromItemContainerCache@ItemsControlAutomationPeer@DirectUI@@QEAAJPEAUIInspectable@@PEAPEAUIItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@AEAE@Z
    long GetItemPeerFromItemContainerCache(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer * *, unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsControlChildrenChildren@ItemsControlAutomationPeer@DirectUI@@QEAAJPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long GetItemsControlChildrenChildren(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@ItemsControlAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInSetHelper@ItemsControlAutomationPeer@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAH@Z
    long GetPositionInSetHelper(::Windows::UI::Xaml::IUIElement *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSetHelper@ItemsControlAutomationPeer@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAH@Z
    long GetSizeOfSetHelper(::Windows::UI::Xaml::IUIElement *, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ItemsControlAutomationPeer@DirectUI@@QEAA@XZ
    ItemsControlAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@ItemsControlAutomationPeer@DirectUI@@UEAAJPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIVectorChangedEventArgs@456@@Z
    virtual long OnCollectionChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateItemAutomationPeerImpl@ItemsControlAutomationPeer@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateItemAutomationPeerImpl(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateItemAutomationPeerProtected@ItemsControlAutomationPeer@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateItemAutomationPeerProtected(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseItemPeerStorage@ItemsControlAutomationPeer@DirectUI@@QEAAJPEAU?$IVector@PEAVItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long ReleaseItemPeerStorage(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveItemAutomationPeerFromStorage@ItemsControlAutomationPeer@DirectUI@@QEAAJPEAVItemAutomationPeer@2@_N@Z
    long RemoveItemAutomationPeerFromStorage(::DirectUI::ItemAutomationPeer *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ItemsControlAutomationPeer@DirectUI@@UEAA@XZ
    virtual ~ItemsControlAutomationPeer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCacheCollectionUnsafe@ItemsControlAutomationPeer@DirectUI@@AEAAXPEAV?$TrackerCollection@PEAVItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@2@@Z
    void ClearCacheCollectionUnsafe(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsControlChildrenChildrenHelper@ItemsControlAutomationPeer@DirectUI@@AEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@PEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@7@IPEAU?$IVector@PEAVItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@9Foundation@7@@Z
    long GetItemsControlChildrenChildrenHelper(::Windows::UI::Xaml::Controls::IItemsControl *, WindissectOpaque *, unsigned int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModernItemsControlChildrenChildrenHelper@ItemsControlAutomationPeer@DirectUI@@AEAAJPEAU?$IVector@PEAVItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long GetModernItemsControlChildrenChildrenHelper(WindissectOpaque *);
};
} // namespace DirectUI
