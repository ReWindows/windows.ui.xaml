#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class CurrentChangingEventArgsFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CurrentChangingEventArgsFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUICurrentChangingEventArgs@Data@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Data::ICurrentChangingEventArgs * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithCancelableParameter@CurrentChangingEventArgsFactory@DirectUI@@UEAAJEPEAUIInspectable@@PEAPEAU3@PEAPEAUICurrentChangingEventArgs@Data@Xaml@UI@Windows@@@Z
    virtual long CreateWithCancelableParameter(unsigned char, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Data::ICurrentChangingEventArgs * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CurrentChangingEventArgsFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CurrentChangingEventArgsFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CurrentChangingEventArgsFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
