#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace DirectUI {
class RichTextBlockOverflowGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Focus@RichTextBlockOverflowGenerated@DirectUI@@UEAAJW4FocusState@Xaml@UI@Windows@@PEAE@Z
    virtual long Focus(int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsTextTrimmedChangedEventSourceNoRef@RichTextBlockOverflowGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVRichTextBlockOverflow@Controls@Xaml@UI@Windows@@PEAVIsTextTrimmedChangedEventArgs@2345@@Foundation@Windows@@UIRichTextBlockOverflow@Controls@Xaml@UI@3@UIIsTextTrimmedChangedEventArgs@5673@@2@@Z
    long GetIsTextTrimmedChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionFromPoint@RichTextBlockOverflowGenerated@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAPEAUITextPointer@Documents@Xaml@UI@5@@Z
    virtual long GetPositionFromPoint(WindissectOpaque, ::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@RichTextBlockOverflowGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_IsTextTrimmedChanged@RichTextBlockOverflowGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVRichTextBlockOverflow@Controls@Xaml@UI@Windows@@PEAVIsTextTrimmedChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_IsTextTrimmedChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaselineOffset@RichTextBlockOverflowGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_BaselineOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentEnd@RichTextBlockOverflowGenerated@DirectUI@@UEAAJPEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    virtual long get_ContentEnd(::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentSource@RichTextBlockOverflowGenerated@DirectUI@@UEAAJPEAPEAUIRichTextBlock@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ContentSource(::Windows::UI::Xaml::Controls::IRichTextBlock * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentStart@RichTextBlockOverflowGenerated@DirectUI@@UEAAJPEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    virtual long get_ContentStart(::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasOverflowContent@RichTextBlockOverflowGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_HasOverflowContent(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxLines@RichTextBlockOverflowGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_MaxLines(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverflowContentTarget@RichTextBlockOverflowGenerated@DirectUI@@UEAAJPEAPEAUIRichTextBlockOverflow@Controls@Xaml@UI@Windows@@@Z
    virtual long get_OverflowContentTarget(::Windows::UI::Xaml::Controls::IRichTextBlockOverflow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Padding@RichTextBlockOverflowGenerated@DirectUI@@UEAAJPEAUThickness@Xaml@UI@Windows@@@Z
    virtual long get_Padding(::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxLines@RichTextBlockOverflowGenerated@DirectUI@@UEAAJH@Z
    virtual long put_MaxLines(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OverflowContentTarget@RichTextBlockOverflowGenerated@DirectUI@@UEAAJPEAUIRichTextBlockOverflow@Controls@Xaml@UI@Windows@@@Z
    virtual long put_OverflowContentTarget(::Windows::UI::Xaml::Controls::IRichTextBlockOverflow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Padding@RichTextBlockOverflowGenerated@DirectUI@@UEAAJUThickness@Xaml@UI@Windows@@@Z
    virtual long put_Padding(::Windows::UI::Xaml::Thickness);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_IsTextTrimmedChanged@RichTextBlockOverflowGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_IsTextTrimmedChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RichTextBlockOverflowGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RichTextBlockOverflowGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@RichTextBlockOverflowGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RichTextBlockOverflowGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
