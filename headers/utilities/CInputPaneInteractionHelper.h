#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CInputPaneInteractionHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CInputPaneInteractionHelper@@SAJPEAUIXcpInputPaneHandler@@PEAPEAV1@@Z
    static long Create(IXcpInputPaneHandler *, CInputPaneInteractionHelper * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInputPaneHandler@CInputPaneInteractionHelper@@UEAAJPEAUICoreWindow@Core@UI@Windows@@PEAVCContentRoot@@@Z
    virtual long RegisterInputPaneHandler(::Windows::UI::Core::ICoreWindow *, CContentRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterInputPaneHandler@CInputPaneInteractionHelper@@UEAAJXZ
    virtual long UnregisterInputPaneHandler();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputPaneInteractionHelper@@EEAA@XZ
    virtual ~CInputPaneInteractionHelper();
};
