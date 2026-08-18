#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class RichTextBlock {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@RichTextBlock@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionFromPointImpl@RichTextBlock@DirectUI@@QEAAJUPoint@Foundation@Windows@@PEAPEAUITextPointer@Documents@Xaml@UI@5@@Z
    long GetPositionFromPointImpl(WindissectOpaque, ::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@RichTextBlock@DirectUI@@UEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectImpl@RichTextBlock@DirectUI@@QEAAJPEAUITextPointer@Documents@Xaml@UI@Windows@@0@Z
    long SelectImpl(::Windows::UI::Xaml::Documents::ITextPointer *, ::Windows::UI::Xaml::Documents::ITextPointer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaselineOffsetImpl@RichTextBlock@DirectUI@@QEAAJPEAN@Z
    long get_BaselineOffsetImpl(double *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectVisualChildren@RichTextBlock@DirectUI@@MEAAJXZ
    virtual long OnDisconnectVisualChildren();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentEdge@RichTextBlock@DirectUI@@AEAAJW4Enum@ElementEdge@CTextPointerWrapper@@PEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    long GetContentEdge(int, ::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionEdge@RichTextBlock@DirectUI@@AEAAJW4Enum@ElementEdge@CTextPointerWrapper@@PEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    long GetSelectionEdge(int, ::Windows::UI::Xaml::Documents::ITextPointer * *);
};
} // namespace DirectUI
