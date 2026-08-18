#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
class CoreWindowFocusObserver {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelFocusRestore@CoreWindowFocusObserver@@UEAAXXZ
    virtual void CancelFocusRestore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationMode@CoreWindowFocusObserver@@UEBA?AW4CoreWindowActivationMode@Core@UI@Windows@@XZ
    virtual int GetActivationMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CoreWindowFocusObserver@@UEAAJQEAUIInternalCoreWindowFocus@Core@UI@Windows@@@Z
    virtual long Init(::Windows::UI::Core::IInternalCoreWindowFocus * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActivated@CoreWindowFocusObserver@@UEBA_NXZ
    virtual bool IsActivated() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessKeyboardInput@CoreWindowFocusObserver@@UEAAXXZ
    virtual void ProcessKeyboardInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreFocus@CoreWindowFocusObserver@@UEAAJXZ
    virtual long RestoreFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreFocusImmediately@CoreWindowFocusObserver@@UEAAJXZ
    virtual long RestoreFocusImmediately();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsModalLoop@CoreWindowFocusObserver@@UEAAJ_N@Z
    virtual long SetIsModalLoop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreWindowFocusObserver@@UEAA@XZ
    virtual ~CoreWindowFocusObserver();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComponent@CoreWindowFocusObserver@@MEBA_NXZ
    virtual bool IsComponent() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeInit@CoreWindowFocusObserver@@AEAAJXZ
    long DeInit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetJupiterWindowHandle@CoreWindowFocusObserver@@AEBAPEAUHWND__@@XZ
    HWND__* GetJupiterWindowHandle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMillisecondsLeftForRestore@CoreWindowFocusObserver@@AEBAIXZ
    unsigned int GetMillisecondsLeftForRestore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivated@CoreWindowFocusObserver@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIWindowActivatedEventArgs@345@@Z
    long OnActivated(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IWindowActivatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRestoreFocus@CoreWindowFocusObserver@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Z
    long OnRestoreFocus(::Windows::UI::Core::ICoreWindow *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTick@CoreWindowFocusObserver@@AEAAJXZ
    long RequestTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTickImmediately@CoreWindowFocusObserver@@AEAAJXZ
    long RequestTickImmediately();
};
