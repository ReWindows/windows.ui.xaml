#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class SwapChainPanelGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreIndependentInputSource@SwapChainPanelGenerated@DirectUI@@UEAAJW4CoreInputDeviceTypes@Core@UI@Windows@@PEAPEAUICoreInputSourceBase@456@@Z
    virtual long CreateCoreIndependentInputSource(int, ::Windows::UI::Core::ICoreInputSourceBase * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionScaleChangedEventSourceNoRef@SwapChainPanelGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVSwapChainPanel@Controls@Xaml@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@UISwapChainPanel@Controls@Xaml@UI@3@UIInspectable@@@2@@Z
    long GetCompositionScaleChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SwapChainPanelGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CompositionScaleChanged@SwapChainPanelGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVSwapChainPanel@Controls@Xaml@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CompositionScaleChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompositionScaleX@SwapChainPanelGenerated@DirectUI@@UEAAJPEAM@Z
    virtual long get_CompositionScaleX(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompositionScaleY@SwapChainPanelGenerated@DirectUI@@UEAAJPEAM@Z
    virtual long get_CompositionScaleY(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CompositionScaleChanged@SwapChainPanelGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CompositionScaleChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SwapChainPanelGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SwapChainPanelGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SwapChainPanelGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
