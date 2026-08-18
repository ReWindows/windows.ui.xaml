#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class HandwritingViewCandidatesCanvasHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringCandidatesToTopIfVisible@HandwritingViewCandidatesCanvasHost@@UEAAJXZ
    virtual long BringCandidatesToTopIfVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HandwritingViewCandidatesCanvasHost@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@HandwritingViewCandidatesCanvasHost@@UEAAJPEAVCHandwritingView@@AEBUCandidateConfig@CHandwritingViewCandidatesBar@@@Z
    virtual long Initialize(CHandwritingView *, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@HandwritingViewCandidatesCanvasHost@@UEAAJAEBUXPOINTF@@0@Z
    virtual long SetPosition(XPOINTF const &, XPOINTF const &);
};
