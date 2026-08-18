#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 75 member(s).
namespace DirectUI {
class RichTextBlockGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySelectionToClipboard@RichTextBlockGenerated@DirectUI@@QEAAJXZ
    long CopySelectionToClipboard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Focus@RichTextBlockGenerated@DirectUI@@UEAAJW4FocusState@Xaml@UI@Windows@@PEAE@Z
    virtual long Focus(int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenuOpeningEventSourceNoRef@RichTextBlockGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIContextMenuOpeningEventHandler@Controls@Xaml@UI@Windows@@UIInspectable@@UIContextMenuEventArgs@2345@@2@@Z
    long GetContextMenuOpeningEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsTextTrimmedChangedEventSourceNoRef@RichTextBlockGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVRichTextBlock@Controls@Xaml@UI@Windows@@PEAVIsTextTrimmedChangedEventArgs@2345@@Foundation@Windows@@UIRichTextBlock@Controls@Xaml@UI@3@UIIsTextTrimmedChangedEventArgs@5673@@2@@Z
    long GetIsTextTrimmedChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionFromPoint@RichTextBlockGenerated@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAPEAUITextPointer@Documents@Xaml@UI@5@@Z
    virtual long GetPositionFromPoint(WindissectOpaque, ::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionChangedEventSourceNoRef@RichTextBlockGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetSelectionChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@RichTextBlockGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@RichTextBlockGenerated@DirectUI@@UEAAJPEAUITextPointer@Documents@Xaml@UI@Windows@@0@Z
    virtual long Select(::Windows::UI::Xaml::Documents::ITextPointer *, ::Windows::UI::Xaml::Documents::ITextPointer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAll@RichTextBlockGenerated@DirectUI@@UEAAJXZ
    virtual long SelectAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ContextMenuOpening@RichTextBlockGenerated@DirectUI@@UEAAJPEAUIContextMenuOpeningEventHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ContextMenuOpening(::Windows::UI::Xaml::Controls::IContextMenuOpeningEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_IsTextTrimmedChanged@RichTextBlockGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVRichTextBlock@Controls@Xaml@UI@Windows@@PEAVIsTextTrimmedChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_IsTextTrimmedChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SelectionChanged@RichTextBlockGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SelectionChanged(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaselineOffset@RichTextBlockGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_BaselineOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Blocks@RichTextBlockGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVBlock@Documents@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Blocks(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CharacterSpacing@RichTextBlockGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_CharacterSpacing(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentEnd@RichTextBlockGenerated@DirectUI@@UEAAJPEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    virtual long get_ContentEnd(::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentStart@RichTextBlockGenerated@DirectUI@@UEAAJPEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    virtual long get_ContentStart(::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontFamily@RichTextBlockGenerated@DirectUI@@UEAAJPEAPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long get_FontFamily(::Windows::UI::Xaml::Media::IFontFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontSize@RichTextBlockGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_FontSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontStretch@RichTextBlockGenerated@DirectUI@@UEAAJPEAW4FontStretch@Text@UI@Windows@@@Z
    virtual long get_FontStretch(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontStyle@RichTextBlockGenerated@DirectUI@@UEAAJPEAW4FontStyle@Text@UI@Windows@@@Z
    virtual long get_FontStyle(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FontWeight@RichTextBlockGenerated@DirectUI@@UEAAJPEAUFontWeight@Text@UI@Windows@@@Z
    virtual long get_FontWeight(::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Foreground@RichTextBlockGenerated@DirectUI@@UEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_Foreground(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasOverflowContent@RichTextBlockGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_HasOverflowContent(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsColorFontEnabled@RichTextBlockGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsColorFontEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTextScaleFactorEnabled@RichTextBlockGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsTextScaleFactorEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTextSelectionEnabled@RichTextBlockGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsTextSelectionEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LineHeight@RichTextBlockGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_LineHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LineStackingStrategy@RichTextBlockGenerated@DirectUI@@UEAAJPEAW4LineStackingStrategy@Xaml@UI@Windows@@@Z
    virtual long get_LineStackingStrategy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxLines@RichTextBlockGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_MaxLines(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OpticalMarginAlignment@RichTextBlockGenerated@DirectUI@@UEAAJPEAW4OpticalMarginAlignment@Xaml@UI@Windows@@@Z
    virtual long get_OpticalMarginAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverflowContentTarget@RichTextBlockGenerated@DirectUI@@UEAAJPEAPEAUIRichTextBlockOverflow@Controls@Xaml@UI@Windows@@@Z
    virtual long get_OverflowContentTarget(::Windows::UI::Xaml::Controls::IRichTextBlockOverflow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Padding@RichTextBlockGenerated@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_Padding(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedText@RichTextBlockGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SelectedText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionEnd@RichTextBlockGenerated@DirectUI@@UEAAJPEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    virtual long get_SelectionEnd(::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionHighlightColor@RichTextBlockGenerated@DirectUI@@UEAAJPEAPEAUISolidColorBrush@Media@Xaml@UI@Windows@@@Z
    virtual long get_SelectionHighlightColor(::Windows::UI::Xaml::Media::ISolidColorBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionStart@RichTextBlockGenerated@DirectUI@@UEAAJPEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    virtual long get_SelectionStart(::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextAlignment@RichTextBlockGenerated@DirectUI@@UEAAJPEAW4TextAlignment@Xaml@UI@Windows@@@Z
    virtual long get_TextAlignment(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextDecorations@RichTextBlockGenerated@DirectUI@@UEAAJPEAW4TextDecorations@Text@UI@Windows@@@Z
    virtual long get_TextDecorations(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextIndent@RichTextBlockGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_TextIndent(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextLineBounds@RichTextBlockGenerated@DirectUI@@UEAAJPEAW4TextLineBounds@Xaml@UI@Windows@@@Z
    virtual long get_TextLineBounds(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextReadingOrder@RichTextBlockGenerated@DirectUI@@UEAAJPEAW4TextReadingOrder@Xaml@UI@Windows@@@Z
    virtual long get_TextReadingOrder(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextTrimming@RichTextBlockGenerated@DirectUI@@UEAAJPEAW4TextTrimming@Xaml@UI@Windows@@@Z
    virtual long get_TextTrimming(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextWrapping@RichTextBlockGenerated@DirectUI@@UEAAJPEAW4TextWrapping@Xaml@UI@Windows@@@Z
    virtual long get_TextWrapping(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CharacterSpacing@RichTextBlockGenerated@DirectUI@@UEAAJH@Z
    virtual long put_CharacterSpacing(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontFamily@RichTextBlockGenerated@DirectUI@@UEAAJPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    virtual long put_FontFamily(::Windows::UI::Xaml::Media::IFontFamily *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontSize@RichTextBlockGenerated@DirectUI@@UEAAJN@Z
    virtual long put_FontSize(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontStretch@RichTextBlockGenerated@DirectUI@@UEAAJW4FontStretch@Text@UI@Windows@@@Z
    virtual long put_FontStretch(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontStyle@RichTextBlockGenerated@DirectUI@@UEAAJW4FontStyle@Text@UI@Windows@@@Z
    virtual long put_FontStyle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontWeight@RichTextBlockGenerated@DirectUI@@UEAAJUFontWeight@Text@UI@Windows@@@Z
    virtual long put_FontWeight(::Windows::UI::Text::FontWeight);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Foreground@RichTextBlockGenerated@DirectUI@@UEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_Foreground(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsColorFontEnabled@RichTextBlockGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsColorFontEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsTextScaleFactorEnabled@RichTextBlockGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsTextScaleFactorEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsTextSelectionEnabled@RichTextBlockGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsTextSelectionEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LineHeight@RichTextBlockGenerated@DirectUI@@UEAAJN@Z
    virtual long put_LineHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LineStackingStrategy@RichTextBlockGenerated@DirectUI@@UEAAJW4LineStackingStrategy@Xaml@UI@Windows@@@Z
    virtual long put_LineStackingStrategy(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxLines@RichTextBlockGenerated@DirectUI@@UEAAJH@Z
    virtual long put_MaxLines(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OpticalMarginAlignment@RichTextBlockGenerated@DirectUI@@UEAAJW4OpticalMarginAlignment@Xaml@UI@Windows@@@Z
    virtual long put_OpticalMarginAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OverflowContentTarget@RichTextBlockGenerated@DirectUI@@UEAAJPEAUIRichTextBlockOverflow@Controls@Xaml@UI@Windows@@@Z
    virtual long put_OverflowContentTarget(::Windows::UI::Xaml::Controls::IRichTextBlockOverflow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Padding@RichTextBlockGenerated@DirectUI@@UEAAJUThickness@Xaml@UI@Windows@@@Z
    virtual long put_Padding(::Windows::UI::Xaml::Thickness);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectionHighlightColor@RichTextBlockGenerated@DirectUI@@UEAAJPEAUISolidColorBrush@Media@Xaml@UI@Windows@@@Z
    virtual long put_SelectionHighlightColor(::Windows::UI::Xaml::Media::ISolidColorBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextAlignment@RichTextBlockGenerated@DirectUI@@UEAAJW4TextAlignment@Xaml@UI@Windows@@@Z
    virtual long put_TextAlignment(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextDecorations@RichTextBlockGenerated@DirectUI@@UEAAJW4TextDecorations@Text@UI@Windows@@@Z
    virtual long put_TextDecorations(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextIndent@RichTextBlockGenerated@DirectUI@@UEAAJN@Z
    virtual long put_TextIndent(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextLineBounds@RichTextBlockGenerated@DirectUI@@UEAAJW4TextLineBounds@Xaml@UI@Windows@@@Z
    virtual long put_TextLineBounds(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextReadingOrder@RichTextBlockGenerated@DirectUI@@UEAAJW4TextReadingOrder@Xaml@UI@Windows@@@Z
    virtual long put_TextReadingOrder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextTrimming@RichTextBlockGenerated@DirectUI@@UEAAJW4TextTrimming@Xaml@UI@Windows@@@Z
    virtual long put_TextTrimming(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextWrapping@RichTextBlockGenerated@DirectUI@@UEAAJW4TextWrapping@Xaml@UI@Windows@@@Z
    virtual long put_TextWrapping(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ContextMenuOpening@RichTextBlockGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ContextMenuOpening(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_IsTextTrimmedChanged@RichTextBlockGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_IsTextTrimmedChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SelectionChanged@RichTextBlockGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SelectionChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RichTextBlockGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RichTextBlockGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@RichTextBlockGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RichTextBlockGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
