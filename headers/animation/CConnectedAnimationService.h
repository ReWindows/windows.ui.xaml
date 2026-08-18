#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class CConnectedAnimationService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelAllAnimationsAndResetDefaults@CConnectedAnimationService@@QEAAJXZ
    long CancelAllAnimationsAndResetDefaults();
    // Category: Method | Source: PE Export
    // Symbol: ?ControlsManagedPeerLifetime@CConnectedAnimationService@@UEAAIXZ
    virtual unsigned int ControlsManagedPeerLifetime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnimation@CConnectedAnimationService@@QEAAJAEBVxstring_ptr_view@@PEAPEAVCConnectedAnimation@@@Z
    long CreateAnimation(xstring_ptr_view const &, CConnectedAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoordinatedAnimation@CConnectedAnimationService@@QEAAJPEAVCConnectedAnimation@@PEAPEAV2@@Z
    long CreateCoordinatedAnimation(CConnectedAnimation *, CConnectedAnimation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimation@CConnectedAnimationService@@QEAAJAEBVxstring_ptr_view@@PEAPEAVCConnectedAnimation@@@Z
    long GetAnimation(xstring_ptr_view const &, CConnectedAnimation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationDuration@CConnectedAnimationService@@QEAA?BUTimeSpan@Foundation@Windows@@XZ
    WindissectOpaque GetAnimationDuration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultEasingFunction@CConnectedAnimationService@@QEAAJPEAPEAUICompositionEasingFunction@Composition@UI@Windows@@@Z
    long GetDefaultEasingFunction(::Windows::UI::Composition::ICompositionEasingFunction * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CConnectedAnimationService@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloadingElement@CConnectedAnimationService@@QEAAJPEAVCUIElement@@PEA_N@Z
    long OnUnloadingElement(CUIElement *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreCommit@CConnectedAnimationService@@QEAAJXZ
    long PreCommit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRenderWalk@CConnectedAnimationService@@QEAAJXZ
    long PreRenderWalk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimeoutAnimations@CConnectedAnimationService@@QEAAJXZ
    long TimeoutAnimations();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConnectedAnimationService@@UEAA@XZ
    virtual ~CConnectedAnimationService();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupRetainedElements@CConnectedAnimationService@@AEAAJXZ
    long CleanupRetainedElements();
};
