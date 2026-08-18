#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class INPCListenerBase {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPropertyChangedHandler@INPCListenerBase@DirectUI@@IEAAJPEAUIInspectable@@@Z
    long AddPropertyChangedHandler(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectPropertyChangedHandler@INPCListenerBase@DirectUI@@IEAAJPEAUIInspectable@@@Z
    long DisconnectPropertyChangedHandler(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePropertyChangedHandler@INPCListenerBase@DirectUI@@IEAAJPEAUIInspectable@@0@Z
    long UpdatePropertyChangedHandler(IInspectable *, IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1INPCListenerBase@DirectUI@@IEAA@XZ
    ~INPCListenerBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChangedCallback@INPCListenerBase@DirectUI@@AEAAJPEAUIPropertyChangedEventArgs@Data@Xaml@UI@Windows@@@Z
    long OnPropertyChangedCallback(::Windows::UI::Xaml::Data::IPropertyChangedEventArgs *);
};
} // namespace DirectUI
