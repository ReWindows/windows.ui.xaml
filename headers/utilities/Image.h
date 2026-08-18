#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class Image {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsCastingSourceImpl@Image@DirectUI@@QEAAJPEAPEAUICastingSource@Casting@Media@Windows@@@Z
    long GetAsCastingSourceImpl(::Windows::Media::Casting::ICastingSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPlayToConnectionShutdown@Image@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long OnPlayToConnectionShutdown(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlayToSourceImpl@Image@DirectUI@@QEAAJPEAPEAUIPlayToSource@PlayTo@Media@Windows@@@Z
    long get_PlayToSourceImpl(::Windows::Media::PlayTo::IPlayToSource * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Image@DirectUI@@UEAA@XZ
    virtual ~Image();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@Image@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
};
} // namespace DirectUI
