#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ItemIndexRangeFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ItemIndexRangeFactory@DirectUI@@UEAAJHIPEAUIInspectable@@PEAPEAU3@PEAPEAUIItemIndexRange@Data@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(int, unsigned int, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Data::IItemIndexRange * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckActivationAllowed@ItemIndexRangeFactory@DirectUI@@MEAAJXZ
    virtual long CheckActivationAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ItemIndexRangeFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ItemIndexRangeFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ItemIndexRangeFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceImpl@ItemIndexRangeFactory@DirectUI@@AEAAJHIPEAUIInspectable@@PEAPEAU3@PEAPEAUIItemIndexRange@Data@Xaml@UI@Windows@@@Z
    long CreateInstanceImpl(int, unsigned int, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Data::IItemIndexRange * *);
};
} // namespace DirectUI
