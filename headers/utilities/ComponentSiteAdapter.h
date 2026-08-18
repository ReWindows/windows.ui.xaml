#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 25 member(s).
class ComponentSiteAdapter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ComponentSiteAdapter@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComponentSiteAdapter@@QEAA@PEAUIComponentSite@Private@Foundation@Windows@@AEBV?$weakref_ptr@VCUIElement@@@xref@@@Z
    ComponentSiteAdapter(WindissectOpaque *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ComponentSiteAdapter@@SAPEAV1@QEAVCDependencyObject@@@Z
    static ComponentSiteAdapter * Get(CDependencyObject * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ComponentSiteAdapter@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ComponentSiteAdapter@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ComponentSiteAdapter@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ComponentSiteAdapter@@QEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveFocusToComponent@ComponentSiteAdapter@@QEAAJXZ
    long MoveFocusToComponent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateFocus@ComponentSiteAdapter@@QEAAJW4NavigationReason@Core@UI@Windows@@AEBURect@Foundation@5@@Z
    long NavigateFocus(int, WindissectOpaque const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ComponentSiteAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComponentSiteAdapter@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeFocusFromComponent@ComponentSiteAdapter@@QEAAJXZ
    long TakeFocusFromComponent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplayInformation@ComponentSiteAdapter@@QEAAJXZ
    long UpdateDisplayInformation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComponentSiteAdapter@@UEAA@XZ
    virtual ~ComponentSiteAdapter();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusManager@ComponentSiteAdapter@@AEBAPEAVCFocusManager@@XZ
    CFocusManager * GetFocusManager() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusDeparting@ComponentSiteAdapter@@AEAAJPEAUICoreWindowSite@Core@UI@Windows@@PEAUINavigationFocusEventArgs@345@@Z
    long OnFocusDeparting(::Windows::UI::Core::ICoreWindowSite *, ::Windows::UI::Core::INavigationFocusEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessExited@ComponentSiteAdapter@@AEAAJXZ
    long OnProcessExited();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowActivated@ComponentSiteAdapter@@AEAAJPEAUICoreWindowSite@Core@UI@Windows@@PEAUIComponentWindowActivatedEventArgs@345@@Z
    long OnWindowActivated(::Windows::UI::Core::ICoreWindowSite *, ::Windows::UI::Core::IComponentWindowActivatedEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirty@ComponentSiteAdapter@@AEAAXXZ
    void SetDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentInteraction@ComponentSiteAdapter@@AEAAXPEAUINavigationFocusEventArgs@Core@UI@Windows@@@Z
    void UpdateCurrentInteraction(::Windows::UI::Core::INavigationFocusEventArgs *);
};
