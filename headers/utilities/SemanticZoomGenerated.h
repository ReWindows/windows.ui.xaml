#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 25 member(s).
namespace DirectUI {
class SemanticZoomGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SemanticZoomGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewChangeCompletedEventSourceNoRef@SemanticZoomGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UISemanticZoomViewChangedEventHandler@Controls@Xaml@UI@Windows@@UIInspectable@@UISemanticZoomViewChangedEventArgs@2345@@2@@Z
    long GetViewChangeCompletedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewChangeStartedEventSourceNoRef@SemanticZoomGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UISemanticZoomViewChangedEventHandler@Controls@Xaml@UI@Windows@@UIInspectable@@UISemanticZoomViewChangedEventArgs@2345@@2@@Z
    long GetViewChangeStartedEventSourceNoRef(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackButtonPressed@SemanticZoomGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long OnBackButtonPressed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleActiveView@SemanticZoomGenerated@DirectUI@@UEAAJXZ
    virtual long ToggleActiveView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ViewChangeCompleted@SemanticZoomGenerated@DirectUI@@UEAAJPEAUISemanticZoomViewChangedEventHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ViewChangeCompleted(::Windows::UI::Xaml::Controls::ISemanticZoomViewChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ViewChangeStarted@SemanticZoomGenerated@DirectUI@@UEAAJPEAUISemanticZoomViewChangedEventHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ViewChangeStarted(::Windows::UI::Xaml::Controls::ISemanticZoomViewChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanChangeViews@SemanticZoomGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanChangeViews(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsZoomOutButtonEnabled@SemanticZoomGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsZoomOutButtonEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsZoomedInViewActive@SemanticZoomGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsZoomedInViewActive(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomedInView@SemanticZoomGenerated@DirectUI@@UEAAJPEAPEAUISemanticZoomInformation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ZoomedInView(::Windows::UI::Xaml::Controls::ISemanticZoomInformation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomedOutView@SemanticZoomGenerated@DirectUI@@UEAAJPEAPEAUISemanticZoomInformation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ZoomedOutView(::Windows::UI::Xaml::Controls::ISemanticZoomInformation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanChangeViews@SemanticZoomGenerated@DirectUI@@UEAAJE@Z
    virtual long put_CanChangeViews(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsZoomOutButtonEnabled@SemanticZoomGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsZoomOutButtonEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsZoomedInViewActive@SemanticZoomGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsZoomedInViewActive(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ZoomedInView@SemanticZoomGenerated@DirectUI@@UEAAJPEAUISemanticZoomInformation@Controls@Xaml@UI@Windows@@@Z
    virtual long put_ZoomedInView(::Windows::UI::Xaml::Controls::ISemanticZoomInformation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ZoomedOutView@SemanticZoomGenerated@DirectUI@@UEAAJPEAUISemanticZoomInformation@Controls@Xaml@UI@Windows@@@Z
    virtual long put_ZoomedOutView(::Windows::UI::Xaml::Controls::ISemanticZoomInformation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ViewChangeCompleted@SemanticZoomGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ViewChangeCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ViewChangeStarted@SemanticZoomGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ViewChangeStarted(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SemanticZoomGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@SemanticZoomGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@SemanticZoomGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SemanticZoomGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SemanticZoomGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SemanticZoomGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
