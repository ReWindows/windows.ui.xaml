#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 24 member(s).
class CHandwritingViewCandidatesBar {
public:
    class CCandidate;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CHandwritingViewCandidatesBar@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfiguredHeight@CHandwritingViewCandidatesBar@@QEAAJAEAM@Z
    long GetConfiguredHeight(float &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CHandwritingViewCandidatesBar@@QEAAJPEAVCHandwritingView@@AEBUCandidateConfig@1@@Z
    long Initialize(CHandwritingView *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCandidateAppliedTemplate@CHandwritingViewCandidatesBar@@QEAAJXZ
    long OnCandidateAppliedTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCandidateSelected@CHandwritingViewCandidatesBar@@QEAAJPEAVCCandidate@1@@Z
    long OnCandidateSelected(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllCandidates@CHandwritingViewCandidatesBar@@QEAAJXZ
    long RemoveAllCandidates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestWidth@CHandwritingViewCandidatesBar@@QEAAJAEA_NAEAM@Z
    long RequestWidth(bool &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHorizontalScrollMode@CHandwritingViewCandidatesBar@@QEAAJ_N@Z
    long SetHorizontalScrollMode(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxWidth@CHandwritingViewCandidatesBar@@QEAAJM@Z
    long SetMaxWidth(float);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListeners@CHandwritingViewCandidatesBar@@AEAAJXZ
    long AddEventListeners();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigPagingButtons@CHandwritingViewCandidatesBar@@AEAAJPEAVCHandwritingView@@@Z
    long ConfigPagingButtons(CHandwritingView *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderThickness@CHandwritingViewCandidatesBar@@AEAAJAEAUXRECTF_RB@@@Z
    long GetBorderThickness(XRECTF_RB &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandwritingView@CHandwritingViewCandidatesBar@@AEAAPEAVCHandwritingView@@XZ
    CHandwritingView * GetHandwritingView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNextPageButtonClicked@CHandwritingViewCandidatesBar@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnNextPageButtonClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@CHandwritingViewCandidatesBar@@EEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerEntered(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@CHandwritingViewCandidatesBar@@EEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerExited(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviousPageButtonClicked@CHandwritingViewCandidatesBar@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnPreviousPageButtonClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageNext@CHandwritingViewCandidatesBar@@AEAAJXZ
    long PageNext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PagePrevious@CHandwritingViewCandidatesBar@@AEAAJXZ
    long PagePrevious();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListeners@CHandwritingViewCandidatesBar@@AEAAJXZ
    long RemoveEventListeners();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePagingButtonVisibility@CHandwritingViewCandidatesBar@@AEAAJXZ
    long UpdatePagingButtonVisibility();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHandwritingViewCandidatesBar@@EEAA@XZ
    virtual ~CHandwritingViewCandidatesBar();
};
