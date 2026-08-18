#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class ActivationAPI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateAutomationInstance@ActivationAPI@DirectUI@@SAJPEBVCClassInfo@@PEAVCDependencyObject@@PEAUIInspectable@@PEAPEAU5@@Z
    static long ActivateAutomationInstance(CClassInfo const *, CDependencyObject *, IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateAutomationInstance@ActivationAPI@DirectUI@@SAJW4KnownTypeIndex@@PEAVCDependencyObject@@PEAUIInspectable@@PEAPEAU5@@Z
    static long ActivateAutomationInstance(int, CDependencyObject *, IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateAutomationInstance@ActivationAPI@DirectUI@@SAJW4KnownTypeIndex@@PEAVCDependencyObject@@AEBU_GUID@@PEAPEAX@Z
    static long ActivateAutomationInstance(int, CDependencyObject *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateCoreInstance@ActivationAPI@DirectUI@@SAJPEBVCClassInfo@@PEAPEAVCDependencyObject@@@Z
    static long ActivateCoreInstance(CClassInfo const *, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ActivationAPI@DirectUI@@SAJPEBVCClassInfo@@PEAUIInspectable@@PEAPEAU4@@Z
    static long ActivateInstance(CClassInfo const *, IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance2@ActivationAPI@DirectUI@@SAJPEBVCClassInfo@@PEAPEAUIInspectable@@@Z
    static long ActivateInstance2(CClassInfo const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstanceFromString@ActivationAPI@DirectUI@@SAJPEBVCClassInfo@@AEBVxstring_ptr_view@@PEAPEAUIInspectable@@@Z
    static long ActivateInstanceFromString(CClassInfo const *, xstring_ptr_view const &, IInspectable * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateMedidPlaybackItemInstanceFromUri@ActivationAPI@DirectUI@@CAJAEBVxstring_ptr_view@@PEAPEAUIInspectable@@@Z
    static long ActivateMedidPlaybackItemInstanceFromUri(xstring_ptr_view const &, IInspectable * *);
};
} // namespace DirectUI
