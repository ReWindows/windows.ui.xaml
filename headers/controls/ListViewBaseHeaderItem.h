#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 28 member(s).
namespace DirectUI {
class ListViewBaseHeaderItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ListViewBaseHeaderItem@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceStickyHeaderOffsets@ListViewBaseHeaderItem@DirectUI@@QEAAJHPEAN@Z
    long CoerceStickyHeaderOffsets(int, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupBounds@ListViewBaseHeaderItem@DirectUI@@QEAAJPEAURect@Foundation@Windows@@@Z
    long GetGroupBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogicalParentForAPProtected@ListViewBaseHeaderItem@DirectUI@@UEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetLogicalParentForAPProtected(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@ListViewBaseHeaderItem@DirectUI@@QEAAJPEAPEAUIListViewBase@Controls@Xaml@UI@Windows@@@Z
    long GetParent(::Windows::UI::Xaml::Controls::IListViewBase * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@ListViewBaseHeaderItem@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ListViewBaseHeaderItem@DirectUI@@QEAA@XZ
    ListViewBaseHeaderItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutTransitionEnd@ListViewBaseHeaderItem@DirectUI@@UEAAJXZ
    virtual long NotifyLayoutTransitionEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutTransitionStart@ListViewBaseHeaderItem@DirectUI@@UEAAJXZ
    virtual long NotifyLayoutTransitionStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ListViewBaseHeaderItem@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@ListViewBaseHeaderItem@DirectUI@@QEAAJPEAUIListViewBase@Controls@Xaml@UI@Windows@@@Z
    long SetParent(::Windows::UI::Xaml::Controls::IListViewBase *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ListViewBaseHeaderItem@DirectUI@@UEAA@XZ
    virtual ~ListViewBaseHeaderItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@ListViewBaseHeaderItem@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTransitionContext@ListViewBaseHeaderItem@DirectUI@@MEAAJHPEAW4ThemeTransitionContext@2@@Z
    virtual long GetCurrentTransitionContext(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropOffsetToRoot@ListViewBaseHeaderItem@DirectUI@@MEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long GetDropOffsetToRoot(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCollectionMutatingFast@ListViewBaseHeaderItem@DirectUI@@MEAAJPEAE@Z
    virtual long IsCollectionMutatingFast(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@ListViewBaseHeaderItem@DirectUI@@MEAAJIIII@Z
    virtual long LeaveImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ListViewBaseHeaderItem@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@ListViewBaseHeaderItem@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@ListViewBaseHeaderItem@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@ListViewBaseHeaderItem@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyUp(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@ListViewBaseHeaderItem@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@ListViewBaseHeaderItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@ListViewBaseHeaderItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@ListViewBaseHeaderItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@ListViewBaseHeaderItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@ListViewBaseHeaderItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@ListViewBaseHeaderItem@DirectUI@@MEAAJPEAUITappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnTapped(::Windows::UI::Xaml::Input::ITappedRoutedEventArgs *);
};
} // namespace DirectUI
