#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class HandwritingViewCandidatesPopupHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringCandidatesToTopIfVisible@HandwritingViewCandidatesPopupHost@@UEAAJXZ
    virtual long BringCandidatesToTopIfVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HandwritingViewCandidatesPopupHost@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAreCandidatesVisible@HandwritingViewCandidatesPopupHost@@UEAAJAEA_N@Z
    virtual long GetAreCandidatesVisible(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@HandwritingViewCandidatesPopupHost@@UEAAJW4HideCandidatesHostReason@HandwritingViewCandidatesHost@@@Z
    virtual long Hide(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@HandwritingViewCandidatesPopupHost@@UEAAJPEAVCHandwritingView@@AEBUCandidateConfig@CHandwritingViewCandidatesBar@@@Z
    virtual long Initialize(CHandwritingView *, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@HandwritingViewCandidatesPopupHost@@UEAAJAEBUXPOINTF@@0@Z
    virtual long SetPosition(XPOINTF const &, XPOINTF const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShouldConstrainToRootBounds@HandwritingViewCandidatesPopupHost@@QEAAJ_N@Z
    long SetShouldConstrainToRootBounds(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@HandwritingViewCandidatesPopupHost@@UEAAJ_NM@Z
    virtual long Show(bool, float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HandwritingViewCandidatesPopupHost@@UEAA@XZ
    virtual ~HandwritingViewCandidatesPopupHost();
};
