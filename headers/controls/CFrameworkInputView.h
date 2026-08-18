#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CFrameworkInputView {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFrameworkInputView@@QEAA@PEAVCSoftKeyboardHandlerImpl@@@Z
    CFrameworkInputView(CSoftKeyboardHandlerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterHandler@CFrameworkInputView@@QEAAJPEAUIUIContext@UI@Windows@@@Z
    long RegisterHandler(::Windows::UI::IUIContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterHandler@CFrameworkInputView@@QEAAJXZ
    long UnregisterHandler();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputPaneRect@CFrameworkInputView@@AEAAJV?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@PEAUtagRECT@@PEAE@Z
    long GetInputPaneRect(WindissectOpaque, tagRECT *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOcclusionsChanged@CFrameworkInputView@@AEAAJPEAUICoreFrameworkInputView@Core@ViewManagement@UI@Windows@@PEAUICoreFrameworkInputViewOcclusionsChangedEventArgs@3456@@Z
    long OnOcclusionsChanged(::Windows::UI::ViewManagement::Core::ICoreFrameworkInputView *, ::Windows::UI::ViewManagement::Core::ICoreFrameworkInputViewOcclusionsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrimaryViewAnimationStarting@CFrameworkInputView@@AEAAJPEAUICoreFrameworkInputView@Core@ViewManagement@UI@Windows@@PEAUICoreFrameworkInputViewAnimationStartingEventArgs@3456@@Z
    long OnPrimaryViewAnimationStarting(::Windows::UI::ViewManagement::Core::ICoreFrameworkInputView *, ::Windows::UI::ViewManagement::Core::ICoreFrameworkInputViewAnimationStartingEventArgs *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFrameworkInputView@@EEAA@XZ
    virtual ~CFrameworkInputView();
};
