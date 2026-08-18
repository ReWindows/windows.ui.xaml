#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class PropertyPathFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PropertyPathFactory@DirectUI@@UEAAJPEAUHSTRING__@@PEAPEAUIPropertyPath@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(HSTRING__*, ::Windows::UI::Xaml::IPropertyPath * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PropertyPathFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PropertyPathFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PropertyPathFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PropertyPathFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceImpl@PropertyPathFactory@DirectUI@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyPath@Xaml@UI@Windows@@@Z
    long CreateInstanceImpl(HSTRING__*, ::Windows::UI::Xaml::IPropertyPath * *);
};
} // namespace DirectUI
