#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CFrameworkInputViewHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFrameworkInputViewHandler@@QEAAJPEAUIUIContext@UI@Windows@@@Z
    long Initialize(::Windows::UI::IUIContext *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFrameworkInputViewHandler@@UEAA@XZ
    virtual ~CFrameworkInputViewHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameworkInputViewOcclusionsChanged@CFrameworkInputViewHandler@@AEAAJPEAUICoreInputView@Core@ViewManagement@UI@Windows@@PEAUIFrameworkInputViewOcclusionsChangedEventArgs@34Internal@56@@Z
    long OnFrameworkInputViewOcclusionsChanged(::Windows::UI::ViewManagement::Core::ICoreInputView *, ::Windows::UI::Internal::ViewManagement::Core::IFrameworkInputViewOcclusionsChangedEventArgs *);
};
