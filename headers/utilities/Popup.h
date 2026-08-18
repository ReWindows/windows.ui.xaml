#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 40 member(s).
namespace DirectUI {
class Popup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWindowCaches@Popup@DirectUI@@QEAAXXZ
    void ClearWindowCaches();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChild@Popup@DirectUI@@UEAAJHPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetChild(int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCount@Popup@DirectUI@@UEAAJPEAH@Z
    virtual long GetChildrenCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextTabStopOverride@Popup@DirectUI@@UEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetNextTabStopOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@Popup@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousTabStopOverride@Popup@DirectUI@@UEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetPreviousTabStopOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShouldUIAPeerExposeWindowPattern@Popup@DirectUI@@QEAAJPEA_N@Z
    long GetShouldUIAPeerExposeWindowPattern(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupWindowPositionChangedHandler@Popup@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long HookupWindowPositionChangedHandler(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupWindowPositionChangedHandlerImpl@Popup@DirectUI@@QEAAJXZ
    long HookupWindowPositionChangedHandlerImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Popup@DirectUI@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LightDismiss@Popup@DirectUI@@QEAAJW4FocusState@Xaml@UI@Windows@@@Z
    long LightDismiss(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosed@Popup@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long OnClosed(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostWindowPositionChanged@Popup@DirectUI@@SAXPEAVCDependencyObject@@@Z
    static void OnHostWindowPositionChanged(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandLostFocus@Popup@DirectUI@@SAXPEAVCDependencyObject@@@Z
    static void OnIslandLostFocus(CDependencyObject *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Popup@DirectUI@@QEAA@XZ
    Popup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDismissalTriggerFlags@Popup@DirectUI@@QEAAJI@Z
    long SetDismissalTriggerFlags(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@Popup@DirectUI@@QEAAJQEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long SetOwner(::Windows::UI::Xaml::IDependencyObject * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TruncateAutomationName@Popup@DirectUI@@SAJPEAPEAUHSTRING__@@@Z
    static long TruncateAutomationName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Popup@DirectUI@@UEAA@XZ
    virtual ~Popup();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfDataContextChange@Popup@DirectUI@@MEAAXAEBUDataContextChangedParams@2@@Z
    virtual void NotifyOfDataContextChange(::DirectUI::DataContextChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@Popup@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectVisualChildren@Popup@DirectUI@@MEAAJXZ
    virtual long OnDisconnectVisualChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@Popup@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@Popup@DirectUI@@AEAAJXZ
    long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlipMajorPlacementAndJustificationIfOutOfBounds@Popup@DirectUI@@CAXPEAW4MajorPlacementMode@12@PEAW4PreferredJustification@12@AEBUPoint@Foundation@Windows@@AEBUSize@67@AEBURect@67@PEA_N@Z
    static void FlipMajorPlacementAndJustificationIfOutOfBounds(int *, int *, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetJustificationFromPlacement@Popup@DirectUI@@CA?AW4PreferredJustification@12@W4PopupPlacementMode@Primitives@Controls@Xaml@UI@Windows@@W4FlowDirection@789@@Z
    static int GetJustificationFromPlacement(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMajorPlacementFromPlacement@Popup@DirectUI@@CA?AW4MajorPlacementMode@12@W4PopupPlacementMode@Primitives@Controls@Xaml@UI@Windows@@W4FlowDirection@789@@Z
    static int GetMajorPlacementFromPlacement(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlacementFromMajorPlacementAndJustification@Popup@DirectUI@@CA?AW4PopupPlacementMode@Primitives@Controls@Xaml@UI@Windows@@W4MajorPlacementMode@12@W4PreferredJustification@12@W4FlowDirection@678@@Z
    static int GetPlacementFromMajorPlacementAndJustification(int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTabStop@Popup@DirectUI@@AEAAJEPEAPEAVDependencyObject@2@@Z
    long GetTabStop(unsigned char, ::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAssociatedWithXamlIsland@Popup@DirectUI@@AEBA_NXZ
    bool IsAssociatedWithXamlIsland() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildLoaded@Popup@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnChildLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildSizeChanged@Popup@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnChildSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostWindowPositionChangedImpl@Popup@DirectUI@@AEAAXXZ
    void OnHostWindowPositionChangedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPlacementTargetLayoutUpdated@Popup@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnPlacementTargetLayoutUpdated(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowActivated@Popup@DirectUI@@AEAAJPEAUIInspectable@@PEAUIWindowActivatedEventArgs@Core@UI@Windows@@@Z
    long OnWindowActivated(IInspectable *, ::Windows::UI::Core::IWindowActivatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeChanged@Popup@DirectUI@@AEAAJPEAUIInspectable@@PEAUIWindowSizeChangedEventArgs@Core@UI@Windows@@@Z
    long OnWindowSizeChanged(IInspectable *, ::Windows::UI::Core::IWindowSizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnXamlLostFocus@Popup@DirectUI@@AEAAJXZ
    long OnXamlLostFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositionFromMajorPlacementAndJustification@Popup@DirectUI@@CAXPEAUPoint@Foundation@Windows@@AEBUSize@45@AEBURect@45@W4FlowDirection@Xaml@UI@5@W4MajorPlacementMode@12@W4PreferredJustification@12@@Z
    static void SetPositionFromMajorPlacementAndJustification(WindissectOpaque *, WindissectOpaque const &, WindissectOpaque const &, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositionFromPlacement@Popup@DirectUI@@AEAAJMM@Z
    long SetPositionFromPlacement(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDismiss@Popup@DirectUI@@AEAAJW4DismissalTriggerFlags@12@PEAE@Z
    long ShouldDismiss(int, unsigned char *);
};
} // namespace DirectUI
