#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class CaptureElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourceImpl@CaptureElement@DirectUI@@QEAAJPEAUIMediaCapture@Capture@Media@Windows@@@Z
    long put_SourceImpl(::Windows::Media::Capture::IMediaCapture *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CaptureElement@DirectUI@@UEAA@XZ
    virtual ~CaptureElement();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@CaptureElement@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
};
} // namespace DirectUI
