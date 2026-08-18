#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 96 member(s).
namespace DirectUI {
class ScrollViewerGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeView@ScrollViewerGenerated@DirectUI@@UEAAJPEAU?$IReference@N@Foundation@Windows@@0PEAU?$IReference@M@45@PEAE@Z
    virtual long ChangeView(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeViewWithOptionalAnimation@ScrollViewerGenerated@DirectUI@@UEAAJPEAU?$IReference@N@Foundation@Windows@@0PEAU?$IReference@M@45@EPEAE@Z
    virtual long ChangeViewWithOptionalAnimation(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableOverpan@ScrollViewerGenerated@DirectUI@@UEAAJXZ
    virtual long DisableOverpan();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableLockScreenMode@ScrollViewerGenerated@DirectUI@@UEAAJXZ
    virtual long EnableLockScreenMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableOverpan@ScrollViewerGenerated@DirectUI@@UEAAJXZ
    virtual long EnableOverpan();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorRequestedEventSourceNoRef@ScrollViewerGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVScrollViewer@Controls@Xaml@UI@Windows@@PEAVAnchorRequestedEventArgs@2345@@Foundation@Windows@@UIScrollViewer@Controls@Xaml@UI@3@UIAnchorRequestedEventArgs@5673@@2@@Z
    long GetAnchorRequestedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationCompletedEventSourceNoRef@ScrollViewerGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetDirectManipulationCompletedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationStartedEventSourceNoRef@ScrollViewerGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetDirectManipulationStartedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ScrollViewerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewChangedEventSourceNoRef@ScrollViewerGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAVScrollViewerViewChangedEventArgs@Controls@Xaml@UI@Windows@@@Foundation@Windows@@UIInspectable@@UIScrollViewerViewChangedEventArgs@Controls@Xaml@UI@3@@2@@Z
    long GetViewChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewChangingEventSourceNoRef@ScrollViewerGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAVScrollViewerViewChangingEventArgs@Controls@Xaml@UI@Windows@@@Foundation@Windows@@UIInspectable@@UIScrollViewerViewChangingEventArgs@Controls@Xaml@UI@3@@2@@Z
    long GetViewChangingEventSourceNoRef(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateScrollInfo@ScrollViewerGenerated@DirectUI@@UEAAJXZ
    virtual long InvalidateScrollInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAnchorCandidate@ScrollViewerGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long RegisterAnchorCandidate(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToHorizontalOffset@ScrollViewerGenerated@DirectUI@@UEAAJN@Z
    virtual long ScrollToHorizontalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToVerticalOffset@ScrollViewerGenerated@DirectUI@@UEAAJN@Z
    virtual long ScrollToVerticalOffset(double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollViewerGenerated@DirectUI@@QEAA@XZ
    ScrollViewerGenerated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsNearVerticalAlignmentForced@ScrollViewerGenerated@DirectUI@@UEAAJE@Z
    virtual long SetIsNearVerticalAlignmentForced(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAnchorCandidate@ScrollViewerGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long UnregisterAnchorCandidate(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomToFactor@ScrollViewerGenerated@DirectUI@@UEAAJM@Z
    virtual long ZoomToFactor(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AnchorRequested@ScrollViewerGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVScrollViewer@Controls@Xaml@UI@Windows@@PEAVAnchorRequestedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_AnchorRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DirectManipulationCompleted@ScrollViewerGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DirectManipulationCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DirectManipulationStarted@ScrollViewerGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DirectManipulationStarted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ViewChanged@ScrollViewerGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAVScrollViewerViewChangedEventArgs@Controls@Xaml@UI@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ViewChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ViewChanging@ScrollViewerGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAVScrollViewerViewChangingEventArgs@Controls@Xaml@UI@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ViewChanging(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ArePointerWheelEventsIgnored@ScrollViewerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_ArePointerWheelEventsIgnored(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BringIntoViewOnFocusChange@ScrollViewerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_BringIntoViewOnFocusChange(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanContentRenderOutsideBounds@ScrollViewerGenerated@DirectUI@@QEAAJPEAE@Z
    long get_CanContentRenderOutsideBounds(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComputedHorizontalScrollBarVisibility@ScrollViewerGenerated@DirectUI@@UEAAJPEAW4Visibility@Xaml@UI@Windows@@@Z
    virtual long get_ComputedHorizontalScrollBarVisibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComputedVerticalScrollBarVisibility@ScrollViewerGenerated@DirectUI@@UEAAJPEAW4Visibility@Xaml@UI@Windows@@@Z
    virtual long get_ComputedVerticalScrollBarVisibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentAnchor@ScrollViewerGenerated@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_CurrentAnchor(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalScrollBarVisibility@ScrollViewerGenerated@DirectUI@@UEAAJPEAW4ScrollBarVisibility@Controls@Xaml@UI@Windows@@@Z
    virtual long get_HorizontalScrollBarVisibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalScrollMode@ScrollViewerGenerated@DirectUI@@UEAAJPEAW4ScrollMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_HorizontalScrollMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalSnapPointsAlignment@ScrollViewerGenerated@DirectUI@@UEAAJPEAW4SnapPointsAlignment@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_HorizontalSnapPointsAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalSnapPointsType@ScrollViewerGenerated@DirectUI@@UEAAJPEAW4SnapPointsType@Controls@Xaml@UI@Windows@@@Z
    virtual long get_HorizontalSnapPointsType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDeferredScrollingEnabled@ScrollViewerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsDeferredScrollingEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHorizontalRailEnabled@ScrollViewerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsHorizontalRailEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHorizontalScrollChainingEnabled@ScrollViewerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsHorizontalScrollChainingEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInActiveDirectManipulation@ScrollViewerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsInActiveDirectManipulation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInDirectManipulation@ScrollViewerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsInDirectManipulation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRequestBringIntoViewIgnored@ScrollViewerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsRequestBringIntoViewIgnored(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsScrollInertiaEnabled@ScrollViewerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsScrollInertiaEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVerticalRailEnabled@ScrollViewerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsVerticalRailEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVerticalScrollChainingEnabled@ScrollViewerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsVerticalScrollChainingEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsZoomChainingEnabled@ScrollViewerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsZoomChainingEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsZoomInertiaEnabled@ScrollViewerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsZoomInertiaEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LeftHeader@ScrollViewerGenerated@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_LeftHeader(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxZoomFactor@ScrollViewerGenerated@DirectUI@@UEAAJPEAM@Z
    virtual long get_MaxZoomFactor(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinZoomFactor@ScrollViewerGenerated@DirectUI@@UEAAJPEAM@Z
    virtual long get_MinZoomFactor(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TopHeader@ScrollViewerGenerated@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_TopHeader(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TopLeftHeader@ScrollViewerGenerated@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_TopLeftHeader(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalScrollBarVisibility@ScrollViewerGenerated@DirectUI@@UEAAJPEAW4ScrollBarVisibility@Controls@Xaml@UI@Windows@@@Z
    virtual long get_VerticalScrollBarVisibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalScrollMode@ScrollViewerGenerated@DirectUI@@UEAAJPEAW4ScrollMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_VerticalScrollMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalSnapPointsAlignment@ScrollViewerGenerated@DirectUI@@UEAAJPEAW4SnapPointsAlignment@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_VerticalSnapPointsAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalSnapPointsType@ScrollViewerGenerated@DirectUI@@UEAAJPEAW4SnapPointsType@Controls@Xaml@UI@Windows@@@Z
    virtual long get_VerticalSnapPointsType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomFactor@ScrollViewerGenerated@DirectUI@@UEAAJPEAM@Z
    virtual long get_ZoomFactor(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomMode@ScrollViewerGenerated@DirectUI@@UEAAJPEAW4ZoomMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ZoomMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomSnapPoints@ScrollViewerGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@M@Collections@Foundation@Windows@@@Z
    virtual long get_ZoomSnapPoints(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomSnapPointsType@ScrollViewerGenerated@DirectUI@@UEAAJPEAW4SnapPointsType@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ZoomSnapPointsType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ArePointerWheelEventsIgnored@ScrollViewerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_ArePointerWheelEventsIgnored(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BringIntoViewOnFocusChange@ScrollViewerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_BringIntoViewOnFocusChange(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalOffset@ScrollViewerGenerated@DirectUI@@UEAAJN@Z
    virtual long put_HorizontalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalScrollBarVisibility@ScrollViewerGenerated@DirectUI@@UEAAJW4ScrollBarVisibility@Controls@Xaml@UI@Windows@@@Z
    virtual long put_HorizontalScrollBarVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalScrollMode@ScrollViewerGenerated@DirectUI@@UEAAJW4ScrollMode@Controls@Xaml@UI@Windows@@@Z
    virtual long put_HorizontalScrollMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalSnapPointsAlignment@ScrollViewerGenerated@DirectUI@@UEAAJW4SnapPointsAlignment@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long put_HorizontalSnapPointsAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalSnapPointsType@ScrollViewerGenerated@DirectUI@@UEAAJW4SnapPointsType@Controls@Xaml@UI@Windows@@@Z
    virtual long put_HorizontalSnapPointsType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsDeferredScrollingEnabled@ScrollViewerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsDeferredScrollingEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsHorizontalRailEnabled@ScrollViewerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsHorizontalRailEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsHorizontalScrollChainingEnabled@ScrollViewerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsHorizontalScrollChainingEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsRequestBringIntoViewIgnored@ScrollViewerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsRequestBringIntoViewIgnored(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsScrollInertiaEnabled@ScrollViewerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsScrollInertiaEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsVerticalRailEnabled@ScrollViewerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsVerticalRailEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsVerticalScrollChainingEnabled@ScrollViewerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsVerticalScrollChainingEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsZoomChainingEnabled@ScrollViewerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsZoomChainingEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsZoomInertiaEnabled@ScrollViewerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsZoomInertiaEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LeftHeader@ScrollViewerGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long put_LeftHeader(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxZoomFactor@ScrollViewerGenerated@DirectUI@@UEAAJM@Z
    virtual long put_MaxZoomFactor(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinZoomFactor@ScrollViewerGenerated@DirectUI@@UEAAJM@Z
    virtual long put_MinZoomFactor(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TopHeader@ScrollViewerGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long put_TopHeader(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TopLeftHeader@ScrollViewerGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long put_TopLeftHeader(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalScrollBarVisibility@ScrollViewerGenerated@DirectUI@@UEAAJW4ScrollBarVisibility@Controls@Xaml@UI@Windows@@@Z
    virtual long put_VerticalScrollBarVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalScrollMode@ScrollViewerGenerated@DirectUI@@UEAAJW4ScrollMode@Controls@Xaml@UI@Windows@@@Z
    virtual long put_VerticalScrollMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalSnapPointsAlignment@ScrollViewerGenerated@DirectUI@@UEAAJW4SnapPointsAlignment@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long put_VerticalSnapPointsAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalSnapPointsType@ScrollViewerGenerated@DirectUI@@UEAAJW4SnapPointsType@Controls@Xaml@UI@Windows@@@Z
    virtual long put_VerticalSnapPointsType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ZoomFactor@ScrollViewerGenerated@DirectUI@@UEAAJM@Z
    virtual long put_ZoomFactor(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ZoomMode@ScrollViewerGenerated@DirectUI@@UEAAJW4ZoomMode@Controls@Xaml@UI@Windows@@@Z
    virtual long put_ZoomMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ZoomSnapPointsType@ScrollViewerGenerated@DirectUI@@UEAAJW4SnapPointsType@Controls@Xaml@UI@Windows@@@Z
    virtual long put_ZoomSnapPointsType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AnchorRequested@ScrollViewerGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_AnchorRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DirectManipulationCompleted@ScrollViewerGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DirectManipulationCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DirectManipulationStarted@ScrollViewerGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DirectManipulationStarted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ViewChanged@ScrollViewerGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ViewChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ViewChanging@ScrollViewerGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ViewChanging(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ScrollViewerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@ScrollViewerGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@ScrollViewerGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ScrollViewerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ScrollViewerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
};
} // namespace DirectUI
