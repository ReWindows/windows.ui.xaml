#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace DirectUI {
class XamlCompositionBrushBaseGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBrushForXamlRoot@XamlCompositionBrushBaseGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAUICompositionBrush@Composition@UI@Windows@@@Z
    virtual long ClearBrushForXamlRoot(IInspectable *, ::Windows::UI::Composition::ICompositionBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCompositionBrushMap@XamlCompositionBrushBaseGenerated@DirectUI@@UEAAJXZ
    virtual long ClearCompositionBrushMap();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushForXamlRoot@XamlCompositionBrushBaseGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUICompositionBrush@Composition@UI@Windows@@@Z
    virtual long GetBrushForXamlRoot(IInspectable *, ::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@XamlCompositionBrushBaseGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@XamlCompositionBrushBaseGenerated@DirectUI@@UEAAJXZ
    virtual long OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedProtected@XamlCompositionBrushBaseGenerated@DirectUI@@QEAAJXZ
    long OnConnectedProtected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@XamlCompositionBrushBaseGenerated@DirectUI@@UEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedProtected@XamlCompositionBrushBaseGenerated@DirectUI@@QEAAJXZ
    long OnDisconnectedProtected();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrushForXamlRoot@XamlCompositionBrushBaseGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAUICompositionBrush@Composition@UI@Windows@@@Z
    virtual long SetBrushForXamlRoot(IInspectable *, ::Windows::UI::Composition::ICompositionBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompositionBrush@XamlCompositionBrushBaseGenerated@DirectUI@@UEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z
    virtual long get_CompositionBrush(::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FallbackColor@XamlCompositionBrushBaseGenerated@DirectUI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_FallbackColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CompositionBrush@XamlCompositionBrushBaseGenerated@DirectUI@@UEAAJPEAUICompositionBrush@Composition@UI@Windows@@@Z
    virtual long put_CompositionBrush(::Windows::UI::Composition::ICompositionBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FallbackColor@XamlCompositionBrushBaseGenerated@DirectUI@@UEAAJUColor@UI@Windows@@@Z
    virtual long put_FallbackColor(::Windows::UI::Color);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlCompositionBrushBaseGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlCompositionBrushBaseGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@XamlCompositionBrushBaseGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlCompositionBrushBaseGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
