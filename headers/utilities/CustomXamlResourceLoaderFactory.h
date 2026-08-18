#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class CustomXamlResourceLoaderFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CustomXamlResourceLoaderFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUICustomXamlResourceLoader@Resources@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@CustomXamlResourceLoaderFactory@DirectUI@@UEAAJPEAPEAUICustomXamlResourceLoader@Resources@Xaml@UI@Windows@@@Z
    virtual long get_Current(::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Current@CustomXamlResourceLoaderFactory@DirectUI@@UEAAJPEAUICustomXamlResourceLoader@Resources@Xaml@UI@Windows@@@Z
    virtual long put_Current(::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CustomXamlResourceLoaderFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CustomXamlResourceLoaderFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CustomXamlResourceLoaderFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CurrentImpl@CustomXamlResourceLoaderFactory@DirectUI@@AEAAJPEAUICustomXamlResourceLoader@Resources@Xaml@UI@Windows@@@Z
    long put_CurrentImpl(::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader *);
};
} // namespace DirectUI
