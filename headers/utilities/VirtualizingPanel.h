#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class VirtualizingPanel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddInternalChildImpl@VirtualizingPanel@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long AddInternalChildImpl(::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemContainerGenerator@VirtualizingPanel@DirectUI@@QEAAJPEAPEAUIItemContainerGenerator@Controls@Xaml@UI@Windows@@PEAUIItemsControl@4567@@Z
    long GetItemContainerGenerator(::Windows::UI::Xaml::Controls::IItemContainerGenerator * *, ::Windows::UI::Xaml::Controls::IItemsControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertInternalChildImpl@VirtualizingPanel@DirectUI@@QEAAJHPEAUIUIElement@Xaml@UI@Windows@@@Z
    long InsertInternalChildImpl(int, ::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClearChildrenInternal@VirtualizingPanel@DirectUI@@UEAAJXZ
    virtual long OnClearChildrenInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInternalChildRangeImpl@VirtualizingPanel@DirectUI@@QEAAJHH@Z
    long RemoveInternalChildRangeImpl(int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VirtualizingPanel@DirectUI@@QEAA@XZ
    VirtualizingPanel();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VirtualizingPanel@DirectUI@@UEAA@XZ
    virtual ~VirtualizingPanel();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexInGroupView@VirtualizingPanel@DirectUI@@IEAAJIAEAN@Z
    long GetIndexInGroupView(unsigned int, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChangedInternal@VirtualizingPanel@DirectUI@@MEAAJPEAUIInspectable@@PEAUIItemsChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long OnItemsChangedInternal(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFillBuffersTimer@VirtualizingPanel@DirectUI@@IEAAJXZ
    long SetFillBuffersTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupItemBoundsClip@VirtualizingPanel@DirectUI@@IEAAJXZ
    long SetupItemBoundsClip();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillBuffers@VirtualizingPanel@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long FillBuffers(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChangedHandler@VirtualizingPanel@DirectUI@@AEAAJPEAUIInspectable@@PEAUIItemsChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnItemsChangedHandler(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Generator@VirtualizingPanel@DirectUI@@AEAAJPEAPEAUIItemContainerGenerator@Controls@Xaml@UI@Windows@@PEAUIItemsControl@4567@@Z
    long get_Generator(::Windows::UI::Xaml::Controls::IItemContainerGenerator * *, ::Windows::UI::Xaml::Controls::IItemsControl *);
};
} // namespace DirectUI
