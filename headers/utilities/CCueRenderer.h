#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 26 member(s).
namespace DirectUI {
class CCueRenderer {
public:
    class CCueItem;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCue@CCueRenderer@DirectUI@@QEAAJAEBV?$ComPtr@UIMediaCue@Core@Media@Windows@@@ctl@@@Z
    long AddCue(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToFullWindowMediaRoot@CCueRenderer@DirectUI@@QEAAJXZ
    long AddToFullWindowMediaRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToOwner@CCueRenderer@DirectUI@@QEAAJXZ
    long AddToOwner();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCueRenderer@DirectUI@@QEAA@PEAVCTimedTextSource@1@@Z
    CCueRenderer(::DirectUI::CTimedTextSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCues@CCueRenderer@DirectUI@@QEAAJXZ
    long ClearCues();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCueRenderer@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long Initialize(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCue@CCueRenderer@DirectUI@@QEAAJAEBV?$ComPtr@UIMediaCue@Core@Media@Windows@@@ctl@@@Z
    long RemoveCue(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromFullWindowMediaRoot@CCueRenderer@DirectUI@@QEAAJXZ
    long RemoveFromFullWindowMediaRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromOwner@CCueRenderer@DirectUI@@QEAAJXZ
    long RemoveFromOwner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CCueRenderer@DirectUI@@QEAAJXZ
    long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMTCOffset@CCueRenderer@DirectUI@@QEAAJN@Z
    long SetMTCOffset(double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCueRenderer@DirectUI@@QEAA@XZ
    ~CCueRenderer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCueContainerToVisualTree@CCueRenderer@DirectUI@@AEAAJXZ
    long AddCueContainerToVisualTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCueInternal@CCueRenderer@DirectUI@@AEAAJAEBV?$ComPtr@UIMediaCue@Core@Media@Windows@@@ctl@@@Z
    long AddCueInternal(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateActualVideoSize@CCueRenderer@DirectUI@@AEAAJXZ
    long CalculateActualVideoSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushPendingRemove@CCueRenderer@DirectUI@@AEAAJXZ
    long FlushPendingRemove();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalVideoSize@CCueRenderer@DirectUI@@AEAAJPEAH0@Z
    long GetNaturalVideoSize(int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowLayoutBoundsChanged@CCueRenderer@DirectUI@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Z
    long OnCoreWindowLayoutBoundsChanged(::Windows::UI::Core::ICoreWindow *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrientationChanged@CCueRenderer@DirectUI@@AEAAJPEAUIDisplayInformation@Display@Graphics@Windows@@PEAUIInspectable@@@Z
    long OnOrientationChanged(::Windows::Graphics::Display::IDisplayInformation *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@CCueRenderer@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCueInternal@CCueRenderer@DirectUI@@AEAAJAEBV?$ComPtr@UIMediaCue@Core@Media@Windows@@@ctl@@@Z
    long RemoveCueInternal(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCues@CCueRenderer@DirectUI@@AEAAJXZ
    long ResetCues();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNaturalVideoSize@CCueRenderer@DirectUI@@AEAAJXZ
    long SetNaturalVideoSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBounds@CCueRenderer@DirectUI@@AEAAJXZ
    long UpdateBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClipping@CCueRenderer@DirectUI@@AEAAJXZ
    long UpdateClipping();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVideoSize@CCueRenderer@DirectUI@@AEAAJXZ
    long UpdateVideoSize();
};
} // namespace DirectUI
