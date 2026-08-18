#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ContentDialogMetadata {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOpenDialog@ContentDialogMetadata@DirectUI@@QEAAJPEAUIContentDialog@Controls@Xaml@UI@Windows@@@Z
    long AddOpenDialog(::Windows::UI::Xaml::Controls::IContentDialog *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasOpenDialog@ContentDialogMetadata@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEA_N@Z
    long HasOpenDialog(::Windows::UI::Xaml::IDependencyObject *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOpenDialog@ContentDialogMetadata@DirectUI@@QEAAJPEAUIContentDialog@Controls@Xaml@UI@Windows@@@Z
    long RemoveOpenDialog(::Windows::UI::Xaml::Controls::IContentDialog *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContentDialogMetadata@DirectUI@@UEAA@XZ
    virtual ~ContentDialogMetadata();
};
} // namespace DirectUI
