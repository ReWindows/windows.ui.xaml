#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class XamlCompositionBrushBaseFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@XamlCompositionBrushBaseFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUIXamlCompositionBrushBase@Media@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Media::IXamlCompositionBrushBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FallbackColorProperty@XamlCompositionBrushBaseFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_FallbackColorProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlCompositionBrushBaseFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlCompositionBrushBaseFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@XamlCompositionBrushBaseFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlCompositionBrushBaseFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
