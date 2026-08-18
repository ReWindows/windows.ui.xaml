#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class TargetPropertyPathFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TargetPropertyPathFactory@DirectUI@@UEAAJPEAUIDependencyProperty@Xaml@UI@Windows@@PEAPEAUITargetPropertyPath@456@@Z
    virtual long CreateInstance(::Windows::UI::Xaml::IDependencyProperty *, ::Windows::UI::Xaml::ITargetPropertyPath * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TargetPropertyPathFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TargetPropertyPathFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TargetPropertyPathFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TargetPropertyPathFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceImpl@TargetPropertyPathFactory@DirectUI@@AEAAJPEAUIDependencyProperty@Xaml@UI@Windows@@PEAPEAUITargetPropertyPath@456@@Z
    long CreateInstanceImpl(::Windows::UI::Xaml::IDependencyProperty *, ::Windows::UI::Xaml::ITargetPropertyPath * *);
};
} // namespace DirectUI
