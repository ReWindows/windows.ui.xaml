#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CContentRoot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToLiveKeyboardAccelerators@CContentRoot@@QEAAXQEAVCKeyboardAcceleratorCollection@@@Z
    void AddToLiveKeyboardAccelerators(CKeyboardAcceleratorCollection * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CContentRoot@@QEAAJXZ
    long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationProviderNoRef@CContentRoot@@QEBAPEAVCUIAWindow@@XZ
    CUIAWindow * GetAutomationProviderNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerWindow@CContentRoot@@QEBAPEAUHWND__@@XZ
    HWND__* GetOwnerWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIContext@CContentRoot@@QEAAJPEAPEAUIUIContext@UI@Windows@@@Z
    long GetUIContext(::Windows::UI::IUIContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewInstanceId@CContentRoot@@QEAAIXZ
    unsigned int GetViewInstanceId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualIdentifier@CContentRoot@@QEAA_KXZ
    uint64_t GetVisualIdentifier();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePendingXamlRootChangedEventIfNeeded@CContentRoot@@QEAAXXZ
    void RaisePendingXamlRootChangedEventIfNeeded();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CContentRoot@@QEAAIXZ
    unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromLiveKeyboardAccelerators@CContentRoot@@QEAAXQEAVCKeyboardAcceleratorCollection@@@Z
    void RemoveFromLiveKeyboardAccelerators(CKeyboardAcceleratorCollection * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetXamlIslandType@CContentRoot@@QEAAXW4IslandType@1@@Z
    void SetXamlIslandType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLastInputDeviceTypeFromSystem@CContentRoot@@QEAAXXZ
    void UpdateLastInputDeviceTypeFromSystem();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContentRoot@@AEAA@W4Type@0@IPEAVCUIElement@@AEAVCCoreServices@@@Z
    CContentRoot(int, unsigned int, CUIElement *, CCoreServices &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContentRoot@@AEAA@XZ
    ~CContentRoot();
};
