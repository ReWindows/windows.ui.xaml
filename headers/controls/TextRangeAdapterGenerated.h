#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class TextRangeAdapterGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelection@TextRangeAdapterGenerated@DirectUI@@UEAAJXZ
    virtual long AddToSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@TextRangeAdapterGenerated@DirectUI@@UEAAJPEAPEAUITextRangeProvider@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long Clone(::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@TextRangeAdapterGenerated@DirectUI@@UEAAJPEAUITextRangeProvider@Provider@Automation@Xaml@UI@Windows@@PEAE@Z
    virtual long Compare(::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareEndpoints@TextRangeAdapterGenerated@DirectUI@@UEAAJW4TextPatternRangeEndpoint@Text@Automation@Xaml@UI@Windows@@PEAUITextRangeProvider@Provider@5678@0PEAH@Z
    virtual long CompareEndpoints(int, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandToEnclosingUnit@TextRangeAdapterGenerated@DirectUI@@UEAAJW4TextUnit@Text@Automation@Xaml@UI@Windows@@@Z
    virtual long ExpandToEnclosingUnit(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAttribute@TextRangeAdapterGenerated@DirectUI@@UEAAJHPEAUIInspectable@@EPEAPEAUITextRangeProvider@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long FindAttribute(int, IInspectable *, unsigned char, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindText@TextRangeAdapterGenerated@DirectUI@@UEAAJPEAUHSTRING__@@EEPEAPEAUITextRangeProvider@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long FindText(HSTRING__*, unsigned char, unsigned char, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeValue@TextRangeAdapterGenerated@DirectUI@@UEAAJHPEAPEAUIInspectable@@@Z
    virtual long GetAttributeValue(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRectangles@TextRangeAdapterGenerated@DirectUI@@UEAAJPEAIPEAPEAN@Z
    virtual long GetBoundingRectangles(unsigned int *, double * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildren@TextRangeAdapterGenerated@DirectUI@@UEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetChildren(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnclosingElement@TextRangeAdapterGenerated@DirectUI@@UEAAJPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetEnclosingElement(::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@TextRangeAdapterGenerated@DirectUI@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long GetText(int, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TextRangeAdapterGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Move@TextRangeAdapterGenerated@DirectUI@@UEAAJW4TextUnit@Text@Automation@Xaml@UI@Windows@@HPEAH@Z
    virtual long Move(int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveEndpointByRange@TextRangeAdapterGenerated@DirectUI@@UEAAJW4TextPatternRangeEndpoint@Text@Automation@Xaml@UI@Windows@@PEAUITextRangeProvider@Provider@5678@0@Z
    virtual long MoveEndpointByRange(int, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveEndpointByUnit@TextRangeAdapterGenerated@DirectUI@@UEAAJW4TextPatternRangeEndpoint@Text@Automation@Xaml@UI@Windows@@W4TextUnit@45678@HPEAH@Z
    virtual long MoveEndpointByUnit(int, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelection@TextRangeAdapterGenerated@DirectUI@@UEAAJXZ
    virtual long RemoveFromSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoView@TextRangeAdapterGenerated@DirectUI@@UEAAJE@Z
    virtual long ScrollIntoView(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@TextRangeAdapterGenerated@DirectUI@@UEAAJXZ
    virtual long Select();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TextRangeAdapterGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TextRangeAdapterGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TextRangeAdapterGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
