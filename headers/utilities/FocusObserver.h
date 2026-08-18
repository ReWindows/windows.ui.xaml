#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 25 member(s).
class FocusObserver {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelFocusRestore@FocusObserver@@UEAAXXZ
    virtual void CancelFocusRestore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DepartFocus@FocusObserver@@QEAAJW4FocusNavigationDirection@DirectUI@@U_GUID@@PEAI@Z
    long DepartFocus(int, _GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationMode@FocusObserver@@UEBA?AW4CoreWindowActivationMode@Core@UI@Windows@@XZ
    virtual int GetActivationMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCorrelationIdFromArgs@FocusObserver@@SAJPEAUINavigationFocusEventArgs@Core@UI@Windows@@PEAU_GUID@@@Z
    static long GetCorrelationIdFromArgs(::Windows::UI::Core::INavigationFocusEventArgs *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOriginFromInteraction@FocusObserver@@QEAA?AUXRECTF_RB@@XZ
    XRECTF_RB GetOriginFromInteraction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@FocusObserver@@UEAAJQEAUIInternalCoreWindowFocus@Core@UI@Windows@@@Z
    virtual long Init(::Windows::UI::Core::IInternalCoreWindowFocus * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActivated@FocusObserver@@UEBA_NXZ
    virtual bool IsActivated() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateFocus@FocusObserver@@QEAAJAEBVFocusMovement@Focus@@PEA_N@Z
    long NavigateFocus(::Focus::FocusMovement const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateFocusXY@FocusObserver@@QEAA?BVFocusMovementResult@Focus@@PEAVCDependencyObject@@W4FocusNavigationDirection@DirectUI@@AEBUXRECTF_RB@@@Z
    ::Focus::FocusMovementResult NavigateFocusXY(CDependencyObject *, int, XRECTF_RB const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessKeyboardInput@FocusObserver@@UEAAXXZ
    virtual void ProcessKeyboardInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreFocus@FocusObserver@@UEAAJXZ
    virtual long RestoreFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreFocusImmediately@FocusObserver@@UEAAJXZ
    virtual long RestoreFocusImmediately();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsModalLoop@FocusObserver@@UEAAJ_N@Z
    virtual long SetIsModalLoop(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInteraction@FocusObserver@@QEAAJPEAUIInternalCoreWindowSiteFocus@Core@UI@Windows@@W4NavigationReason@345@AEBURect@Foundation@5@PEAPEAUINavigationFocusEventArgs@345@@Z
    long StartInteraction(::Windows::UI::Core::IInternalCoreWindowSiteFocus *, int, WindissectOpaque const &, ::Windows::UI::Core::INavigationFocusEventArgs * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopInteraction@FocusObserver@@QEAAJXZ
    long StopInteraction();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FocusObserver@@UEAA@XZ
    virtual ~FocusObserver();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComponent@FocusObserver@@MEBA_NXZ
    virtual bool IsComponent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateFocus@FocusObserver@@IEAAJW4NavigationReason@Core@UI@Windows@@@Z
    long NavigateFocus(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateNewOrigin@FocusObserver@@AEAAJW4FocusNavigationDirection@DirectUI@@AEBURect@Foundation@Windows@@PEAU456@@Z
    long CalculateNewOrigin(int, WindissectOpaque const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DepartFocus@FocusObserver@@AEAAJW4FocusNavigationDirection@DirectUI@@AEBURect@Foundation@Windows@@U_GUID@@PEAI@Z
    long DepartFocus(int, WindissectOpaque const &, _GUID, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOriginToComponent@FocusObserver@@AEAAJQEAVCDependencyObject@@PEAURect@Foundation@Windows@@@Z
    long GetOriginToComponent(CDependencyObject * const, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusNavigating@FocusObserver@@AEAAJPEAUIInspectable@@PEAUINavigationFocusEventArgs@Core@UI@Windows@@@Z
    long OnFocusNavigating(IInspectable *, ::Windows::UI::Core::INavigationFocusEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInteraction@FocusObserver@@AEAAJW4NavigationReason@Core@UI@Windows@@AEBURect@Foundation@5@U_GUID@@@Z
    long StartInteraction(int, WindissectOpaque const &, _GUID);
};
