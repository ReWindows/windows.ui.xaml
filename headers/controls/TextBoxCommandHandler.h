#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class TextBoxCommandHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@TextBoxCommandHandler@@UEAAJPEAU?$IAsyncOperation@PEAUIUICommand@Popups@UI@Windows@@@Foundation@Windows@@W4AsyncStatus@34ABI@@@Z
    virtual long Invoke(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@TextBoxCommandHandler@@UEAAJPEAUIUICommand@Popups@UI@Windows@@@Z
    virtual long Invoke(::Windows::UI::Popups::IUICommand *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextBoxCommandHandler@@QEAA@PEAVCTextBoxBase@@@Z
    TextBoxCommandHandler(CTextBoxBase *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextBoxCommandHandler@@UEAA@XZ
    virtual ~TextBoxCommandHandler();
};
