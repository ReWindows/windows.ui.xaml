#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class DragCompletedEventArgsFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled@DragCompletedEventArgsFactory@DirectUI@@UEAAJNNEPEAUIInspectable@@PEAPEAU3@PEAPEAUIDragCompletedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(double, double, unsigned char, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DragCompletedEventArgsFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DragCompletedEventArgsFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DragCompletedEventArgsFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithHorizontalChangeVerticalChangeAndCanceledImpl@DragCompletedEventArgsFactory@DirectUI@@AEAAJNNEPEAUIInspectable@@PEAPEAU3@PEAPEAUIDragCompletedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long CreateInstanceWithHorizontalChangeVerticalChangeAndCanceledImpl(double, double, unsigned char, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs * *);
};
} // namespace DirectUI
