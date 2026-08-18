#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class TextAdapterGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@TextAdapterGenerated@DirectUI@@UEAAJPEAIPEAPEAPEAUITextRangeProvider@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetSelection(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TextAdapterGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleRanges@TextAdapterGenerated@DirectUI@@UEAAJPEAIPEAPEAPEAUITextRangeProvider@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetVisibleRanges(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromChild@TextAdapterGenerated@DirectUI@@UEAAJPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@PEAPEAUITextRangeProvider@45678@@Z
    virtual long RangeFromChild(::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple *, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeFromPoint@TextAdapterGenerated@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAPEAUITextRangeProvider@Provider@Automation@Xaml@UI@5@@Z
    virtual long RangeFromPoint(WindissectOpaque, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DocumentRange@TextAdapterGenerated@DirectUI@@UEAAJPEAPEAUITextRangeProvider@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long get_DocumentRange(::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedTextSelection@TextAdapterGenerated@DirectUI@@UEAAJPEAW4SupportedTextSelection@Automation@Xaml@UI@Windows@@@Z
    virtual long get_SupportedTextSelection(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TextAdapterGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TextAdapterGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TextAdapterGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
