#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class ScrollBarGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollEventSourceNoRef@ScrollBarGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIScrollEventHandler@Primitives@Controls@Xaml@UI@Windows@@UIInspectable@@UIScrollEventArgs@23456@@2@@Z
    long GetScrollEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbDragCompletedEventSourceNoRef@ScrollBarGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIDragCompletedEventHandler@Primitives@Controls@Xaml@UI@Windows@@UIInspectable@@UIDragCompletedEventArgs@23456@@2@@Z
    long GetThumbDragCompletedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbDragStartedEventSourceNoRef@ScrollBarGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIDragStartedEventHandler@Primitives@Controls@Xaml@UI@Windows@@UIInspectable@@UIDragStartedEventArgs@23456@@2@@Z
    long GetThumbDragStartedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ScrollBarGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Scroll@ScrollBarGenerated@DirectUI@@UEAAJPEAUIScrollEventHandler@Primitives@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Scroll(::Windows::UI::Xaml::Controls::Primitives::IScrollEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ThumbDragCompleted@ScrollBarGenerated@DirectUI@@QEAAJPEAUIDragCompletedEventHandler@Primitives@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    long add_ThumbDragCompleted(::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ThumbDragStarted@ScrollBarGenerated@DirectUI@@QEAAJPEAUIDragStartedEventHandler@Primitives@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    long add_ThumbDragStarted(::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IndicatorMode@ScrollBarGenerated@DirectUI@@UEAAJPEAW4ScrollingIndicatorMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_IndicatorMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Orientation@ScrollBarGenerated@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Orientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewportSize@ScrollBarGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_ViewportSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IndicatorMode@ScrollBarGenerated@DirectUI@@UEAAJW4ScrollingIndicatorMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long put_IndicatorMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Orientation@ScrollBarGenerated@DirectUI@@UEAAJW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long put_Orientation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ViewportSize@ScrollBarGenerated@DirectUI@@UEAAJN@Z
    virtual long put_ViewportSize(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Scroll@ScrollBarGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Scroll(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ThumbDragCompleted@ScrollBarGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_ThumbDragCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ThumbDragStarted@ScrollBarGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_ThumbDragStarted(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ScrollBarGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@ScrollBarGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@ScrollBarGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ScrollBarGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ScrollBarGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ScrollBarGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
