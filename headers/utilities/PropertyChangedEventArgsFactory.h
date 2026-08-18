#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class PropertyChangedEventArgsFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PropertyChangedEventArgsFactory@DirectUI@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAPEAU4@PEAPEAUIPropertyChangedEventArgs@Data@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(HSTRING__*, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Data::IPropertyChangedEventArgs * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PropertyChangedEventArgsFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PropertyChangedEventArgsFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PropertyChangedEventArgsFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
