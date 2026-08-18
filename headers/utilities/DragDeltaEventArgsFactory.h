#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class DragDeltaEventArgsFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithHorizontalChangeAndVerticalChange@DragDeltaEventArgsFactory@DirectUI@@UEAAJNNPEAUIInspectable@@PEAPEAU3@PEAPEAUIDragDeltaEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long CreateInstanceWithHorizontalChangeAndVerticalChange(double, double, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DragDeltaEventArgsFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DragDeltaEventArgsFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DragDeltaEventArgsFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithHorizontalChangeAndVerticalChangeImpl@DragDeltaEventArgsFactory@DirectUI@@AEAAJNNPEAUIInspectable@@PEAPEAU3@PEAPEAUIDragDeltaEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long CreateInstanceWithHorizontalChangeAndVerticalChangeImpl(double, double, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs * *);
};
} // namespace DirectUI
