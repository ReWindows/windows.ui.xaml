#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class TextAdapter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionImpl@TextAdapter@DirectUI@@UEAAJPEAIPEAPEAPEAUITextRangeProvider@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetSelectionImpl(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleRangesImpl@TextAdapter@DirectUI@@UEAAJPEAIPEAPEAPEAUITextRangeProvider@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetVisibleRangesImpl(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TextAdapter@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromChildImpl@TextAdapter@DirectUI@@UEAAJPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@PEAPEAUITextRangeProvider@45678@@Z
    virtual long RangeFromChildImpl(::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple *, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromPointImpl@TextAdapter@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAPEAUITextRangeProvider@Provider@Automation@Xaml@UI@5@@Z
    virtual long RangeFromPointImpl(WindissectOpaque, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DocumentRangeImpl@TextAdapter@DirectUI@@UEAAJPEAPEAUITextRangeProvider@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long get_DocumentRangeImpl(::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedTextSelectionImpl@TextAdapter@DirectUI@@UEAAJPEAW4SupportedTextSelection@Automation@Xaml@UI@Windows@@@Z
    virtual long get_SupportedTextSelectionImpl(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Owner@TextAdapter@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long put_Owner(::Windows::UI::Xaml::IUIElement *);
};
} // namespace DirectUI
