#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 72 member(s).
namespace DirectUI {
class TextBlockGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySelectionToClipboard@TextBlockGenerated@DirectUI@@QEAAJXZ
    long CopySelectionToClipboard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Focus@TextBlockGenerated@DirectUI@@UEAAJW4FocusState@Xaml@UI@Windows@@PEAE@Z
    virtual long Focus(int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlphaMask@TextBlockGenerated@DirectUI@@UEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z
    virtual long GetAlphaMask(::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenuOpeningEventSourceNoRef@TextBlockGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIContextMenuOpeningEventHandler@Controls@Xaml@UI@Windows@@UIInspectable@@UIContextMenuEventArgs@2345@@2@@Z
    long GetContextMenuOpeningEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsTextTrimmedChangedEventSourceNoRef@TextBlockGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVTextBlock@Controls@Xaml@UI@Windows@@PEAVIsTextTrimmedChangedEventArgs@2345@@Foundation@Windows@@UITextBlock@Controls@Xaml@UI@3@UIIsTextTrimmedChangedEventArgs@5673@@2@@Z
    long GetIsTextTrimmedChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionChangedEventSourceNoRef@TextBlockGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetSelectionChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TextBlockGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@TextBlockGenerated@DirectUI@@UEAAJPEAUITextPointer@Documents@Xaml@UI@Windows@@0@Z
    virtual long Select(::Windows::UI::Xaml::Documents::ITextPointer *, ::Windows::UI::Xaml::Documents::ITextPointer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAll@TextBlockGenerated@DirectUI@@UEAAJXZ
    virtual long SelectAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ContextMenuOpening@TextBlockGenerated@DirectUI@@UEAAJPEAUIContextMenuOpeningEventHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ContextMenuOpening(::Windows::UI::Xaml::Controls::IContextMenuOpeningEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_IsTextTrimmedChanged@TextBlockGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVTextBlock@Controls@Xaml@UI@Windows@@PEAVIsTextTrimmedChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_IsTextTrimmedChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SelectionChanged@TextBlockGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SelectionChanged(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaselineOffset@TextBlockGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_BaselineOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CharacterSpacing@TextBlockGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_CharacterSpacing(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentEnd@TextBlockGenerated@DirectUI@@UEAAJPEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    virtual long get_ContentEnd(::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentStart@TextBlockGenerated@DirectUI@@UEAAJPEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    virtual long get_ContentStart(::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontFamily@TextBlockGenerated@DirectUI@@UEAAJPEAPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long get_FontFamily(::Windows::UI::Xaml::Media::IFontFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontSize@TextBlockGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_FontSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontStretch@TextBlockGenerated@DirectUI@@UEAAJPEAW4FontStretch@Text@UI@Windows@@@Z
    virtual long get_FontStretch(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontStyle@TextBlockGenerated@DirectUI@@UEAAJPEAW4FontStyle@Text@UI@Windows@@@Z
    virtual long get_FontStyle(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontWeight@TextBlockGenerated@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_FontWeight(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Foreground@TextBlockGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_Foreground(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Inlines@TextBlockGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVInline@Documents@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Inlines(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsColorFontEnabled@TextBlockGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsColorFontEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTextScaleFactorEnabled@TextBlockGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsTextScaleFactorEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTextSelectionEnabled@TextBlockGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsTextSelectionEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LineHeight@TextBlockGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_LineHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LineStackingStrategy@TextBlockGenerated@DirectUI@@UEAAJPEAW4LineStackingStrategy@Xaml@UI@Windows@@@Z
    virtual long get_LineStackingStrategy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxLines@TextBlockGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_MaxLines(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OpticalMarginAlignment@TextBlockGenerated@DirectUI@@UEAAJPEAW4OpticalMarginAlignment@Xaml@UI@Windows@@@Z
    virtual long get_OpticalMarginAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Padding@TextBlockGenerated@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_Padding(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedText@TextBlockGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SelectedText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionEnd@TextBlockGenerated@DirectUI@@UEAAJPEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    virtual long get_SelectionEnd(::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionHighlightColor@TextBlockGenerated@DirectUI@@UEAAJPEAPEAUISolidColorBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_SelectionHighlightColor(::Windows::UI::Xaml::Media::ISolidColorBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionStart@TextBlockGenerated@DirectUI@@UEAAJPEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    virtual long get_SelectionStart(::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Text@TextBlockGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Text(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextAlignment@TextBlockGenerated@DirectUI@@UEAAJPEAW4TextAlignment@Xaml@UI@Windows@@@Z
    virtual long get_TextAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextDecorations@TextBlockGenerated@DirectUI@@UEAAJPEAW4TextDecorations@Text@UI@Windows@@@Z
    virtual long get_TextDecorations(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextLineBounds@TextBlockGenerated@DirectUI@@UEAAJPEAW4TextLineBounds@Xaml@UI@Windows@@@Z
    virtual long get_TextLineBounds(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextReadingOrder@TextBlockGenerated@DirectUI@@UEAAJPEAW4TextReadingOrder@Xaml@UI@Windows@@@Z
    virtual long get_TextReadingOrder(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextTrimming@TextBlockGenerated@DirectUI@@UEAAJPEAW4TextTrimming@Xaml@UI@Windows@@@Z
    virtual long get_TextTrimming(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextWrapping@TextBlockGenerated@DirectUI@@UEAAJPEAW4TextWrapping@Xaml@UI@Windows@@@Z
    virtual long get_TextWrapping(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CharacterSpacing@TextBlockGenerated@DirectUI@@UEAAJH@Z
    virtual long put_CharacterSpacing(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontFamily@TextBlockGenerated@DirectUI@@UEAAJPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long put_FontFamily(::Windows::UI::Xaml::Media::IFontFamily *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontSize@TextBlockGenerated@DirectUI@@UEAAJN@Z
    virtual long put_FontSize(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontStretch@TextBlockGenerated@DirectUI@@UEAAJW4FontStretch@Text@UI@Windows@@@Z
    virtual long put_FontStretch(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontStyle@TextBlockGenerated@DirectUI@@UEAAJW4FontStyle@Text@UI@Windows@@@Z
    virtual long put_FontStyle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontWeight@TextBlockGenerated@DirectUI@@UEAAJUFontWeight@Text@UI@Windows@@@Z
    virtual long put_FontWeight(::Windows::UI::Text::FontWeight);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Foreground@TextBlockGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_Foreground(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsColorFontEnabled@TextBlockGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsColorFontEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsTextScaleFactorEnabled@TextBlockGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsTextScaleFactorEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsTextSelectionEnabled@TextBlockGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsTextSelectionEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LineHeight@TextBlockGenerated@DirectUI@@UEAAJN@Z
    virtual long put_LineHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LineStackingStrategy@TextBlockGenerated@DirectUI@@UEAAJW4LineStackingStrategy@Xaml@UI@Windows@@@Z
    virtual long put_LineStackingStrategy(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxLines@TextBlockGenerated@DirectUI@@UEAAJH@Z
    virtual long put_MaxLines(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OpticalMarginAlignment@TextBlockGenerated@DirectUI@@UEAAJW4OpticalMarginAlignment@Xaml@UI@Windows@@@Z
    virtual long put_OpticalMarginAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Padding@TextBlockGenerated@DirectUI@@UEAAJUThickness@Xaml@UI@Windows@@@Z
    virtual long put_Padding(::Windows::UI::Xaml::Thickness);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectionHighlightColor@TextBlockGenerated@DirectUI@@UEAAJPEAUISolidColorBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_SelectionHighlightColor(::Windows::UI::Xaml::Media::ISolidColorBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Text@TextBlockGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Text(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextAlignment@TextBlockGenerated@DirectUI@@UEAAJW4TextAlignment@Xaml@UI@Windows@@@Z
    virtual long put_TextAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextDecorations@TextBlockGenerated@DirectUI@@UEAAJW4TextDecorations@Text@UI@Windows@@@Z
    virtual long put_TextDecorations(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextLineBounds@TextBlockGenerated@DirectUI@@UEAAJW4TextLineBounds@Xaml@UI@Windows@@@Z
    virtual long put_TextLineBounds(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextReadingOrder@TextBlockGenerated@DirectUI@@UEAAJW4TextReadingOrder@Xaml@UI@Windows@@@Z
    virtual long put_TextReadingOrder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextTrimming@TextBlockGenerated@DirectUI@@UEAAJW4TextTrimming@Xaml@UI@Windows@@@Z
    virtual long put_TextTrimming(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextWrapping@TextBlockGenerated@DirectUI@@UEAAJW4TextWrapping@Xaml@UI@Windows@@@Z
    virtual long put_TextWrapping(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ContextMenuOpening@TextBlockGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ContextMenuOpening(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_IsTextTrimmedChanged@TextBlockGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_IsTextTrimmedChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SelectionChanged@TextBlockGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SelectionChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TextBlockGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TextBlockGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TextBlockGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TextBlockGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
