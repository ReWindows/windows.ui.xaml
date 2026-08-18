#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 43 member(s).
namespace DirectUI {
class PasswordBoxGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenuOpeningEventSourceNoRef@PasswordBoxGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIContextMenuOpeningEventHandler@Controls@Xaml@UI@Windows@@UIInspectable@@UIContextMenuEventArgs@2345@@2@@Z
    long GetContextMenuOpeningEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPasswordChangedEventSourceNoRef@PasswordBoxGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetPasswordChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPasswordChangingEventSourceNoRef@PasswordBoxGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVPasswordBox@Controls@Xaml@UI@Windows@@PEAVPasswordBoxPasswordChangingEventArgs@2345@@Foundation@Windows@@UIPasswordBox@Controls@Xaml@UI@3@UIPasswordBoxPasswordChangingEventArgs@5673@@2@@Z
    long GetPasswordChangingEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPasteEventSourceNoRef@PasswordBoxGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UITextControlPasteEventHandler@Controls@Xaml@UI@Windows@@UIInspectable@@UITextControlPasteEventArgs@2345@@2@@Z
    long GetPasteEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PasswordBoxGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PasteFromClipboard@PasswordBoxGenerated@DirectUI@@QEAAJXZ
    long PasteFromClipboard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAll@PasswordBoxGenerated@DirectUI@@UEAAJXZ
    virtual long SelectAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ContextMenuOpening@PasswordBoxGenerated@DirectUI@@UEAAJPEAUIContextMenuOpeningEventHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ContextMenuOpening(::Windows::UI::Xaml::Controls::IContextMenuOpeningEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PasswordChanged@PasswordBoxGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PasswordChanged(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PasswordChanging@PasswordBoxGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVPasswordBox@Controls@Xaml@UI@Windows@@PEAVPasswordBoxPasswordChangingEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_PasswordChanging(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Paste@PasswordBoxGenerated@DirectUI@@UEAAJPEAUITextControlPasteEventHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Paste(::Windows::UI::Xaml::Controls::ITextControlPasteEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Header@PasswordBoxGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Header(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderTemplate@PasswordBoxGenerated@DirectUI@@UEAAJPEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long get_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputScope@PasswordBoxGenerated@DirectUI@@UEAAJPEAPEAUIInputScope@Input@Xaml@UI@Windows@@@Z
    virtual long get_InputScope(::Windows::UI::Xaml::Input::IInputScope * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPasswordRevealButtonEnabled@PasswordBoxGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsPasswordRevealButtonEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxLength@PasswordBoxGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_MaxLength(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Password@PasswordBoxGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Password(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PasswordChar@PasswordBoxGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PasswordChar(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PasswordRevealMode@PasswordBoxGenerated@DirectUI@@UEAAJPEAW4PasswordRevealMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_PasswordRevealMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlaceholderText@PasswordBoxGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PlaceholderText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreventKeyboardDisplayOnProgrammaticFocus@PasswordBoxGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_PreventKeyboardDisplayOnProgrammaticFocus(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionHighlightColor@PasswordBoxGenerated@DirectUI@@UEAAJPEAPEAUISolidColorBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_SelectionHighlightColor(::Windows::UI::Xaml::Media::ISolidColorBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextReadingOrder@PasswordBoxGenerated@DirectUI@@UEAAJPEAW4TextReadingOrder@Xaml@UI@Windows@@@Z
    virtual long get_TextReadingOrder(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Header@PasswordBoxGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Header(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderTemplate@PasswordBoxGenerated@DirectUI@@UEAAJPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long put_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InputScope@PasswordBoxGenerated@DirectUI@@UEAAJPEAUIInputScope@Input@Xaml@UI@Windows@@@Z
    virtual long put_InputScope(::Windows::UI::Xaml::Input::IInputScope *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsPasswordRevealButtonEnabled@PasswordBoxGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsPasswordRevealButtonEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxLength@PasswordBoxGenerated@DirectUI@@UEAAJH@Z
    virtual long put_MaxLength(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Password@PasswordBoxGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Password(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PasswordChar@PasswordBoxGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_PasswordChar(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PasswordRevealMode@PasswordBoxGenerated@DirectUI@@UEAAJW4PasswordRevealMode@Controls@Xaml@UI@Windows@@@Z
    virtual long put_PasswordRevealMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PlaceholderText@PasswordBoxGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_PlaceholderText(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreventKeyboardDisplayOnProgrammaticFocus@PasswordBoxGenerated@DirectUI@@UEAAJE@Z
    virtual long put_PreventKeyboardDisplayOnProgrammaticFocus(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectionHighlightColor@PasswordBoxGenerated@DirectUI@@UEAAJPEAUISolidColorBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_SelectionHighlightColor(::Windows::UI::Xaml::Media::ISolidColorBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextReadingOrder@PasswordBoxGenerated@DirectUI@@UEAAJW4TextReadingOrder@Xaml@UI@Windows@@@Z
    virtual long put_TextReadingOrder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ContextMenuOpening@PasswordBoxGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ContextMenuOpening(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PasswordChanged@PasswordBoxGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PasswordChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PasswordChanging@PasswordBoxGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_PasswordChanging(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Paste@PasswordBoxGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Paste(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PasswordBoxGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PasswordBoxGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PasswordBoxGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PasswordBoxGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
