#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class ParserServiceProviderGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@ParserServiceProviderGenerated@DirectUI@@UEAAJUTypeName@Interop@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetService(::Windows::UI::Xaml::Interop::TypeName, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ParserServiceProviderGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@ParserServiceProviderGenerated@DirectUI@@UEAAJPEAUHSTRING__@@PEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long Resolve(HSTRING__*, ::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaseUri@ParserServiceProviderGenerated@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_BaseUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RootObject@ParserServiceProviderGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_RootObject(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetObject@ParserServiceProviderGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_TargetObject(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetProperty@ParserServiceProviderGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_TargetProperty(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BaseUri@ParserServiceProviderGenerated@DirectUI@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long put_BaseUri(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ParserServiceProviderGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ParserServiceProviderGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ParserServiceProviderGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
