#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class RichTextBlockCommandHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@RichTextBlockCommandHandler@@UEAAJPEAU?$IAsyncOperation@PEAUIUICommand@Popups@UI@Windows@@@Foundation@Windows@@W4AsyncStatus@34ABI@@@Z
    virtual long Invoke(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@RichTextBlockCommandHandler@@UEAAJPEAUIUICommand@Popups@UI@Windows@@@Z
    virtual long Invoke(::Windows::UI::Popups::IUICommand *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RichTextBlockCommandHandler@@UEAA@XZ
    virtual ~RichTextBlockCommandHandler();
};
