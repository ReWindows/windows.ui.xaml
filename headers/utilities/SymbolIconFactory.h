#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class SymbolIconFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithSymbol@SymbolIconFactory@DirectUI@@UEAAJW4Symbol@Controls@Xaml@UI@Windows@@PEAPEAUISymbolIcon@4567@@Z
    virtual long CreateInstanceWithSymbol(int, ::Windows::UI::Xaml::Controls::ISymbolIcon * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SymbolProperty@SymbolIconFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_SymbolProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SymbolIconFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SymbolIconFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SymbolIconFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SymbolIconFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithSymbolImpl@SymbolIconFactory@DirectUI@@AEAAJW4Symbol@Controls@Xaml@UI@Windows@@PEAPEAUISymbolIcon@4567@@Z
    long CreateInstanceWithSymbolImpl(int, ::Windows::UI::Xaml::Controls::ISymbolIcon * *);
};
} // namespace DirectUI
