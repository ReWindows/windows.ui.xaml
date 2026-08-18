#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
namespace DirectUI {
class DebugSettingsGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindingFailedEventSourceNoRef@DebugSettingsGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UIBindingFailedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIBindingFailedEventArgs@234@@2@@Z
    long GetBindingFailedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@DebugSettingsGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BindingFailed@DebugSettingsGenerated@DirectUI@@UEAAJPEAUIBindingFailedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_BindingFailed(::Windows::UI::Xaml::IBindingFailedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnableFrameRateCounter@DebugSettingsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_EnableFrameRateCounter(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnableRedrawRegions@DebugSettingsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_EnableRedrawRegions(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsBindingTracingEnabled@DebugSettingsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsBindingTracingEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOverdrawHeatMapEnabled@DebugSettingsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsOverdrawHeatMapEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTextPerformanceVisualizationEnabled@DebugSettingsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsTextPerformanceVisualizationEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EnableFrameRateCounter@DebugSettingsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_EnableFrameRateCounter(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EnableRedrawRegions@DebugSettingsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_EnableRedrawRegions(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsBindingTracingEnabled@DebugSettingsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsBindingTracingEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsOverdrawHeatMapEnabled@DebugSettingsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsOverdrawHeatMapEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsTextPerformanceVisualizationEnabled@DebugSettingsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsTextPerformanceVisualizationEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BindingFailed@DebugSettingsGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BindingFailed(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DebugSettingsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DebugSettingsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DebugSettingsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DebugSettingsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
