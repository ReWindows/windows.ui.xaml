#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class DragStartedEventArgsFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithHorizontalOffsetAndVerticalOffset@DragStartedEventArgsFactory@DirectUI@@UEAAJNNPEAUIInspectable@@PEAPEAU3@PEAPEAUIDragStartedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long CreateInstanceWithHorizontalOffsetAndVerticalOffset(double, double, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DragStartedEventArgsFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DragStartedEventArgsFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DragStartedEventArgsFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithHorizontalOffsetAndVerticalOffsetImpl@DragStartedEventArgsFactory@DirectUI@@AEAAJNNPEAUIInspectable@@PEAPEAU3@PEAPEAUIDragStartedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long CreateInstanceWithHorizontalOffsetAndVerticalOffsetImpl(double, double, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs * *);
};
} // namespace DirectUI
