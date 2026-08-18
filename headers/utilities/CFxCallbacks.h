#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class CFxCallbacks {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DXamlCore_CalculateAvailableMonitorRect@CFxCallbacks@@SAJPEAVCUIElement@@UPoint@Foundation@Windows@@PEAURect@45@@Z
    static long DXamlCore_CalculateAvailableMonitorRect(CUIElement *, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DXamlCore_GetContentBoundsForElement@CFxCallbacks@@SAJPEAVCDependencyObject@@PEAURect@Foundation@Windows@@@Z
    static long DXamlCore_GetContentBoundsForElement(CDependencyObject *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DXamlCore_GetVisibleContentBoundsForElement@CFxCallbacks@@SAJPEAVCDependencyObject@@PEAURect@Foundation@Windows@@@Z
    static long DXamlCore_GetVisibleContentBoundsForElement(CDependencyObject *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameworkCallbacks_LoadThemeResources@CFxCallbacks@@QEAAJXZ
    long FrameworkCallbacks_LoadThemeResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDragDrop_CheckIfCustomVisualShouldBeCleared@CFxCallbacks@@QEAA_NXZ
    bool HasDragDrop_CheckIfCustomVisualShouldBeCleared();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDragEventArgs_GetIsDeferred@CFxCallbacks@@QEAA_NXZ
    bool HasDragEventArgs_GetIsDeferred();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFrameworkCallbacks_EnsureImmersiveResource@CFxCallbacks@@QEAA_NXZ
    bool HasFrameworkCallbacks_EnsureImmersiveResource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRaiseDragDropEventAsyncOperation_CheckIfAcceptedOperationShouldBeReset@CFxCallbacks@@QEAA_NXZ
    bool HasRaiseDragDropEventAsyncOperation_CheckIfAcceptedOperationShouldBeReset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRaiseDragDropEventAsyncOperation_SetAcceptedOperationSetterUIElement@CFxCallbacks@@QEAA_NXZ
    bool HasRaiseDragDropEventAsyncOperation_SetAcceptedOperationSetterUIElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasUIElement_GetDManipElementAndProperty@CFxCallbacks@@QEAA_NXZ
    bool HasUIElement_GetDManipElementAndProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?JupiterWindow_ReleasePointerCapture@CFxCallbacks@@SAXXZ
    static void JupiterWindow_ReleasePointerCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?JupiterWindow_SetPointerCapture@CFxCallbacks@@SAXXZ
    static void JupiterWindow_SetPointerCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIElement_GetDManipElement@CFxCallbacks@@QEAAJPEAVCUIElement@@PEAPEAVCDependencyObject@@@Z
    long UIElement_GetDManipElement(CUIElement *, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlIsland_SetOwner@CFxCallbacks@@SAXPEAUIXamlIsland@Hosting@Xaml@UI@Windows@@PEAUIAppWindow@WindowManagement@56@@Z
    static void XamlIsland_SetOwner(::Windows::UI::Xaml::Hosting::IXamlIsland *, ::Windows::UI::WindowManagement::IAppWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlRoot_RaiseChanged@CFxCallbacks@@SAXPEAUIInspectable@@@Z
    static void XamlRoot_RaiseChanged(IInspectable *);
};
