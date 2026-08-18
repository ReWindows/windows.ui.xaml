#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class RichTextBlockOverflow {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@RichTextBlockOverflow@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionFromPointImpl@RichTextBlockOverflow@DirectUI@@QEAAJUPoint@Foundation@Windows@@PEAPEAUITextPointer@Documents@Xaml@UI@5@@Z
    long GetPositionFromPointImpl(WindissectOpaque, ::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@RichTextBlockOverflow@DirectUI@@UEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaselineOffsetImpl@RichTextBlockOverflow@DirectUI@@QEAAJPEAN@Z
    long get_BaselineOffsetImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentSourceImpl@RichTextBlockOverflow@DirectUI@@QEAAJPEAPEAUIRichTextBlock@Controls@Xaml@UI@Windows@@@Z
    long get_ContentSourceImpl(::Windows::UI::Xaml::Controls::IRichTextBlock * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentEdge@RichTextBlockOverflow@DirectUI@@AEAAJW4Enum@ElementEdge@CTextPointerWrapper@@PEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    long GetContentEdge(int, ::Windows::UI::Xaml::Documents::ITextPointer * *);
};
} // namespace DirectUI
