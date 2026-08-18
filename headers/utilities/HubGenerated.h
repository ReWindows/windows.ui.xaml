#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 38 member(s).
namespace DirectUI {
class HubGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteViewChange@HubGenerated@DirectUI@@UEAAJXZ
    virtual long CompleteViewChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteViewChangeFrom@HubGenerated@DirectUI@@UEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@0@Z
    virtual long CompleteViewChangeFrom(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *, ::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteViewChangeTo@HubGenerated@DirectUI@@UEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@0@Z
    virtual long CompleteViewChangeTo(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *, ::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionHeaderClickEventSourceNoRef@HubGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UIHubSectionHeaderClickEventHandler@Controls@Xaml@UI@Windows@@UIInspectable@@UIHubSectionHeaderClickEventArgs@2345@@2@@Z
    long GetSectionHeaderClickEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionsInViewChangedEventSourceNoRef@HubGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UISectionsInViewChangedEventHandler@Controls@Xaml@UI@Windows@@UIInspectable@@UISectionsInViewChangedEventArgs@2345@@2@@Z
    long GetSectionsInViewChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@HubGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeViewChange@HubGenerated@DirectUI@@UEAAJXZ
    virtual long InitializeViewChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisible@HubGenerated@DirectUI@@UEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@@Z
    virtual long MakeVisible(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToSection@HubGenerated@DirectUI@@UEAAJPEAUIHubSection@Controls@Xaml@UI@Windows@@@Z
    virtual long ScrollToSection(::Windows::UI::Xaml::Controls::IHubSection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartViewChangeFrom@HubGenerated@DirectUI@@UEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@0@Z
    virtual long StartViewChangeFrom(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *, ::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartViewChangeTo@HubGenerated@DirectUI@@UEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@0@Z
    virtual long StartViewChangeTo(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *, ::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SectionHeaderClick@HubGenerated@DirectUI@@UEAAJPEAUIHubSectionHeaderClickEventHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SectionHeaderClick(::Windows::UI::Xaml::Controls::IHubSectionHeaderClickEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SectionsInViewChanged@HubGenerated@DirectUI@@UEAAJPEAUISectionsInViewChangedEventHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SectionsInViewChanged(::Windows::UI::Xaml::Controls::ISectionsInViewChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultSectionIndex@HubGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_DefaultSectionIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Header@HubGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Header(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderTemplate@HubGenerated@DirectUI@@UEAAJPEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long get_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsActiveView@HubGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsActiveView(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsZoomedInView@HubGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsZoomedInView(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Orientation@HubGenerated@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Orientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SectionHeaders@HubGenerated@DirectUI@@UEAAJPEAPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long get_SectionHeaders(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Sections@HubGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVHubSection@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Sections(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SectionsInView@HubGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVHubSection@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_SectionsInView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SemanticZoomOwner@HubGenerated@DirectUI@@UEAAJPEAPEAUISemanticZoom@Controls@Xaml@UI@Windows@@@Z
    virtual long get_SemanticZoomOwner(::Windows::UI::Xaml::Controls::ISemanticZoom * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DefaultSectionIndex@HubGenerated@DirectUI@@UEAAJH@Z
    virtual long put_DefaultSectionIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Header@HubGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Header(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderTemplate@HubGenerated@DirectUI@@UEAAJPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long put_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsActiveView@HubGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsActiveView(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsZoomedInView@HubGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsZoomedInView(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Orientation@HubGenerated@DirectUI@@UEAAJW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long put_Orientation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SemanticZoomOwner@HubGenerated@DirectUI@@UEAAJPEAUISemanticZoom@Controls@Xaml@UI@Windows@@@Z
    virtual long put_SemanticZoomOwner(::Windows::UI::Xaml::Controls::ISemanticZoom *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SectionHeaderClick@HubGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SectionHeaderClick(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SectionsInViewChanged@HubGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SectionsInViewChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@HubGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@HubGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@HubGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@HubGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@HubGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@HubGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
