#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace CHandwritingViewCandidatesBar {
class CCandidate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCandidate@CHandwritingViewCandidatesBar@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredSize@CCandidate@CHandwritingViewCandidatesBar@@QEAAJAEAUXSIZEF@@@Z
    long GetDesiredSize(XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CCandidate@CHandwritingViewCandidatesBar@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CCandidate@CHandwritingViewCandidatesBar@@MEAAJXZ
    virtual long OnApplyTemplate();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndConfigureCandidate@CCandidate@CHandwritingViewCandidatesBar@@AEAAJXZ
    long CreateAndConfigureCandidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@CCandidate@CHandwritingViewCandidatesBar@@EEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerEntered(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@CCandidate@CHandwritingViewCandidatesBar@@EEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerExited(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@CCandidate@CHandwritingViewCandidatesBar@@EEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerPressed(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@CCandidate@CHandwritingViewCandidatesBar@@EEAAJPEAVCEventArgs@@@Z
    virtual long OnTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColors@CCandidate@CHandwritingViewCandidatesBar@@AEAAJXZ
    long UpdateColors();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCandidate@CHandwritingViewCandidatesBar@@EEAA@XZ
    virtual ~CCandidate();
};
} // namespace CHandwritingViewCandidatesBar
