#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class XamlCompositionBrushBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBrushForXamlRootImpl@XamlCompositionBrushBase@DirectUI@@QEAAJPEAUIInspectable@@PEAUICompositionBrush@Composition@UI@Windows@@@Z
    long ClearBrushForXamlRootImpl(IInspectable *, ::Windows::UI::Composition::ICompositionBrush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushForXamlRootImpl@XamlCompositionBrushBase@DirectUI@@QEAAJPEAUIInspectable@@PEAPEAUICompositionBrush@Composition@UI@Windows@@@Z
    long GetBrushForXamlRootImpl(IInspectable *, ::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPrivateOverrides@XamlCompositionBrushBase@DirectUI@@SA_NPEAVCDependencyObject@@@Z
    static bool HasPrivateOverrides(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedFromCore@XamlCompositionBrushBase@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long OnConnectedFromCore(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedFromCore@XamlCompositionBrushBase@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long OnDisconnectedFromCore(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementConnectedFromCore@XamlCompositionBrushBase@DirectUI@@SAJPEAVCDependencyObject@@0@Z
    static long OnElementConnectedFromCore(CDependencyObject *, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrushForXamlRootImpl@XamlCompositionBrushBase@DirectUI@@QEAAJPEAUIInspectable@@PEAUICompositionBrush@Composition@UI@Windows@@@Z
    long SetBrushForXamlRootImpl(IInspectable *, ::Windows::UI::Composition::ICompositionBrush *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateOverridesNoRef@XamlCompositionBrushBase@DirectUI@@AEAAPEAUIXamlCompositionBrushBaseOverridesPrivate@Media@Xaml@UI@Windows@@XZ
    ::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverridesPrivate * GetPrivateOverridesNoRef();
};
} // namespace DirectUI
