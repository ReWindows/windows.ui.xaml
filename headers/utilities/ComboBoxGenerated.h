#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 45 member(s).
namespace DirectUI {
class ComboBoxGenerated {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComboBoxGenerated@DirectUI@@QEAA@XZ
    ComboBoxGenerated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropDownClosedEventSourceNoRef@ComboBoxGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetDropDownClosedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropDownOpenedEventSourceNoRef@ComboBoxGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetDropDownOpenedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextSubmittedEventSourceNoRef@ComboBoxGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVComboBox@Controls@Xaml@UI@Windows@@PEAVComboBoxTextSubmittedEventArgs@2345@@Foundation@Windows@@UIComboBox@Controls@Xaml@UI@3@UIComboBoxTextSubmittedEventArgs@5673@@2@@Z
    long GetTextSubmittedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ComboBoxGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ComboBoxGenerated@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackButtonPressed@ComboBoxGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long OnBackButtonPressed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropDownClosed@ComboBoxGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long OnDropDownClosed(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropDownClosedProtected@ComboBoxGenerated@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long OnDropDownClosedProtected(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropDownOpened@ComboBoxGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long OnDropDownOpened(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropDownOpenedProtected@ComboBoxGenerated@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long OnDropDownOpenedProtected(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DropDownClosed@ComboBoxGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DropDownClosed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DropDownOpened@ComboBoxGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DropDownOpened(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TextSubmitted@ComboBoxGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVComboBox@Controls@Xaml@UI@Windows@@PEAVComboBoxTextSubmittedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_TextSubmitted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Header@ComboBoxGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Header(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderTemplate@ComboBoxGenerated@DirectUI@@UEAAJPEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long get_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDropDownOpen@ComboBoxGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsDropDownOpen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEditable@ComboBoxGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsEditable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelectionBoxHighlighted@ComboBoxGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSelectionBoxHighlighted(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTextSearchEnabled@ComboBoxGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsTextSearchEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LightDismissOverlayMode@ComboBoxGenerated@DirectUI@@UEAAJPEAW4LightDismissOverlayMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_LightDismissOverlayMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxDropDownHeight@ComboBoxGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_MaxDropDownHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlaceholderText@ComboBoxGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PlaceholderText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionBoxItem@ComboBoxGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_SelectionBoxItem(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionBoxItemTemplate@ComboBoxGenerated@DirectUI@@UEAAJPEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long get_SelectionBoxItemTemplate(::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TemplateSettings@ComboBoxGenerated@DirectUI@@UEAAJPEAPEAUIComboBoxTemplateSettings@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_TemplateSettings(::Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Header@ComboBoxGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Header(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderTemplate@ComboBoxGenerated@DirectUI@@UEAAJPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long put_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsDropDownOpen@ComboBoxGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsDropDownOpen(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsTextSearchEnabled@ComboBoxGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsTextSearchEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LightDismissOverlayMode@ComboBoxGenerated@DirectUI@@UEAAJW4LightDismissOverlayMode@Controls@Xaml@UI@Windows@@@Z
    virtual long put_LightDismissOverlayMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxDropDownHeight@ComboBoxGenerated@DirectUI@@UEAAJN@Z
    virtual long put_MaxDropDownHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PlaceholderText@ComboBoxGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_PlaceholderText(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectionBoxItem@ComboBoxGenerated@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_SelectionBoxItem(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectionBoxItemTemplate@ComboBoxGenerated@DirectUI@@QEAAJPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    long put_SelectionBoxItemTemplate(::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DropDownClosed@ComboBoxGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DropDownClosed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DropDownOpened@ComboBoxGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DropDownOpened(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TextSubmitted@ComboBoxGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_TextSubmitted(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComboBoxGenerated@DirectUI@@UEAA@XZ
    virtual ~ComboBoxGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ComboBoxGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@ComboBoxGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@ComboBoxGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ComboBoxGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ComboBoxGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ComboBoxGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
