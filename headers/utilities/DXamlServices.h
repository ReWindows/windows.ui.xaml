#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class DXamlServices {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivatePeer@DXamlServices@DirectUI@@YAJW4KnownTypeIndex@@PEAPEAVDependencyObject@2@@Z
    long ActivatePeer(int, ::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentCoreWindowNoRef@DXamlServices@DirectUI@@YAPEAUICoreWindow@Core@UI@Windows@@XZ
    ::Windows::UI::Core::ICoreWindow * GetCurrentCoreWindowNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPeer@DXamlServices@DirectUI@@YAJPEAVCDependencyObject@@PEAPEAVDependencyObject@2@@Z
    long GetPeer(CDependencyObject *, ::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPeer@DXamlServices@DirectUI@@YAJPEAVCDependencyObject@@AEBU_GUID@@PEAPEAX@Z
    long GetPeer(CDependencyObject *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSafeHandle@DXamlServices@DirectUI@@YAPEAVCCoreServices@@XZ
    CCoreServices * GetSafeHandle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCompositionTargetRenderedEventHandlers@DXamlServices@DirectUI@@YA_NXZ
    bool HasCompositionTargetRenderedEventHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldStoreSourceInformation@DXamlServices@DirectUI@@YA_NXZ
    bool ShouldStoreSourceInformation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPeer@DXamlServices@DirectUI@@YAJPEAVCDependencyObject@@AEBU_GUID@@PEAPEAX@Z
    long TryGetPeer(CDependencyObject *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPeer@DXamlServices@DirectUI@@YAJPEAVCDependencyObject@@PEAPEAVDependencyObject@2@@Z
    long TryGetPeer(CDependencyObject *, ::DirectUI::DependencyObject * *);
};
} // namespace DirectUI
