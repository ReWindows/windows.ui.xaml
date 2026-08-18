#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class DataErrorsChangedEventArgsFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DataErrorsChangedEventArgsFactory@DirectUI@@UEAAJPEAUHSTRING__@@PEAPEAUIDataErrorsChangedEventArgs@Data@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(HSTRING__*, ::Windows::UI::Xaml::Data::IDataErrorsChangedEventArgs * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataErrorsChangedEventArgsFactory@DirectUI@@QEAA@XZ
    DataErrorsChangedEventArgsFactory();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DataErrorsChangedEventArgsFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DataErrorsChangedEventArgsFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DataErrorsChangedEventArgsFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
