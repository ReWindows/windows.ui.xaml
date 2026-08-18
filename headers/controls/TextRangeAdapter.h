#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
namespace DirectUI {
class TextRangeAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelectionImpl@TextRangeAdapter@DirectUI@@UEAAJXZ
    virtual long AddToSelectionImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneImpl@TextRangeAdapter@DirectUI@@UEAAJPEAPEAUITextRangeProvider@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long CloneImpl(::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareEndpointsImpl@TextRangeAdapter@DirectUI@@UEAAJW4TextPatternRangeEndpoint@Text@Automation@Xaml@UI@Windows@@PEAUITextRangeProvider@Provider@5678@0PEAH@Z
    virtual long CompareEndpointsImpl(int, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareImpl@TextRangeAdapter@DirectUI@@UEAAJPEAUITextRangeProvider@Provider@Automation@Xaml@UI@Windows@@PEAE@Z
    virtual long CompareImpl(::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandToEnclosingUnitImpl@TextRangeAdapter@DirectUI@@UEAAJW4TextUnit@Text@Automation@Xaml@UI@Windows@@@Z
    virtual long ExpandToEnclosingUnitImpl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAttributeImpl@TextRangeAdapter@DirectUI@@UEAAJHPEAUIInspectable@@EPEAPEAUITextRangeProvider@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long FindAttributeImpl(int, IInspectable *, unsigned char, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextImpl@TextRangeAdapter@DirectUI@@UEAAJPEAUHSTRING__@@EEPEAPEAUITextRangeProvider@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long FindTextImpl(HSTRING__*, unsigned char, unsigned char, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeValueImpl@TextRangeAdapter@DirectUI@@UEAAJHPEAPEAUIInspectable@@@Z
    virtual long GetAttributeValueImpl(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRectanglesImpl@TextRangeAdapter@DirectUI@@UEAAJPEAIPEAPEAN@Z
    virtual long GetBoundingRectanglesImpl(unsigned int *, double * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenImpl@TextRangeAdapter@DirectUI@@UEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetChildrenImpl(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnclosingElementImpl@TextRangeAdapter@DirectUI@@UEAAJPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetEnclosingElementImpl(::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextImpl@TextRangeAdapter@DirectUI@@UEAAJHPEAPEAUHSTRING__@@@Z
    virtual long GetTextImpl(int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveEndpointByRangeImpl@TextRangeAdapter@DirectUI@@UEAAJW4TextPatternRangeEndpoint@Text@Automation@Xaml@UI@Windows@@PEAUITextRangeProvider@Provider@5678@0@Z
    virtual long MoveEndpointByRangeImpl(int, ::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveEndpointByUnitImpl@TextRangeAdapter@DirectUI@@UEAAJW4TextPatternRangeEndpoint@Text@Automation@Xaml@UI@Windows@@W4TextUnit@45678@HPEAH@Z
    virtual long MoveEndpointByUnitImpl(int, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveImpl@TextRangeAdapter@DirectUI@@UEAAJW4TextUnit@Text@Automation@Xaml@UI@Windows@@HPEAH@Z
    virtual long MoveImpl(int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TextRangeAdapter@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelectionImpl@TextRangeAdapter@DirectUI@@UEAAJXZ
    virtual long RemoveFromSelectionImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoViewImpl@TextRangeAdapter@DirectUI@@UEAAJE@Z
    virtual long ScrollIntoViewImpl(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectImpl@TextRangeAdapter@DirectUI@@UEAAJXZ
    virtual long SelectImpl();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextRangeAdapter@DirectUI@@UEAA@XZ
    virtual ~TextRangeAdapter();
};
} // namespace DirectUI
