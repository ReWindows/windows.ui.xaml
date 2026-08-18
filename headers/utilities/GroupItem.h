#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class GroupItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@GroupItem@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeSelectorItemsVisualState@GroupItem@DirectUI@@UEAAJI@Z
    virtual long ChangeSelectorItemsVisualState(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusHeader@GroupItem@DirectUI@@QEAAJW4FocusState@Xaml@UI@Windows@@PEAE@Z
    long FocusHeader(int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTransitionContext@GroupItem@DirectUI@@UEAAJHPEAW4ThemeTransitionContext@2@@Z
    virtual long GetCurrentTransitionContext(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropOffsetToRoot@GroupItem@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long GetDropOffsetToRoot(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupIndex@GroupItem@DirectUI@@QEAAJPEAH@Z
    long GetGroupIndex(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCollectionMutatingFast@GroupItem@DirectUI@@UEAAJPEAE@Z
    virtual long IsCollectionMutatingFast(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@GroupItem@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Recycle@GroupItem@DirectUI@@QEAAJXZ
    long Recycle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGenerator@GroupItem@DirectUI@@QEAAXQEAUIItemContainerGenerator@Controls@Xaml@UI@Windows@@@Z
    void SetGenerator(::Windows::UI::Xaml::Controls::IItemContainerGenerator * const);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContainerForItem@GroupItem@DirectUI@@IEAAJPEAUIInspectable@@@Z
    long ClearContainerForItem(IInspectable *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GroupItem@DirectUI@@IEAA@XZ
    GroupItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@GroupItem@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@GroupItem@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@GroupItem@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareItemContainer@GroupItem@DirectUI@@IEAAJPEAUIInspectable@@PEAVItemsControl@2@@Z
    long PrepareItemContainer(IInspectable *, ::DirectUI::ItemsControl *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GroupItem@DirectUI@@MEAA@XZ
    virtual ~GroupItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusChanged@GroupItem@DirectUI@@AEAAJEW4FocusState@Xaml@UI@Windows@@@Z
    long FocusChanged(unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@GroupItem@DirectUI@@AEAAJXZ
    long Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHeaderKeyDown@GroupItem@DirectUI@@AEAAJPEAUIInspectable@@PEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnHeaderKeyDown(IInspectable *, ::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChangedHandler@GroupItem@DirectUI@@AEAAJPEAUIInspectable@@PEAUIItemsChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnItemsChangedHandler(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeaderContentReference@GroupItem@DirectUI@@AEAAJPEAUIControl@Controls@Xaml@UI@Windows@@@Z
    long SetHeaderContentReference(::Windows::UI::Xaml::Controls::IControl *);
};
} // namespace DirectUI
