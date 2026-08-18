#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class HandwritingViewCandidatesHost {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAreCandidatesVisible@HandwritingViewCandidatesHost@@UEAAJAEA_N@Z
    virtual long GetAreCandidatesVisible(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@HandwritingViewCandidatesHost@@UEAAJW4HideCandidatesHostReason@1@@Z
    virtual long Hide(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@HandwritingViewCandidatesHost@@UEAAJPEAVCHandwritingView@@AEBUCandidateConfig@CHandwritingViewCandidatesBar@@@Z
    virtual long Initialize(CHandwritingView *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PermitHide@HandwritingViewCandidatesHost@@QEAAJXZ
    long PermitHide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@HandwritingViewCandidatesHost@@UEAAJ_NM@Z
    virtual long Show(bool, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnInitialize@HandwritingViewCandidatesHost@@QEAAJXZ
    long UnInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HandwritingViewCandidatesHost@@UEAA@XZ
    virtual ~HandwritingViewCandidatesHost();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsCandidatesHostVisible@HandwritingViewCandidatesHost@@IEAAJAEA_N@Z
    long GetIsCandidatesHostVisible(bool &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HandwritingViewCandidatesHost@@IEAA@PEAVCCoreServices@@@Z
    HandwritingViewCandidatesHost(CCoreServices *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideCandidatesTimerTick@HandwritingViewCandidatesHost@@AEAAJXZ
    long OnHideCandidatesTimerTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartHideCandidatesTimer@HandwritingViewCandidatesHost@@AEAAJM@Z
    long StartHideCandidatesTimer(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopHideCandidatesTimer@HandwritingViewCandidatesHost@@AEAAJXZ
    long StopHideCandidatesTimer();
};
