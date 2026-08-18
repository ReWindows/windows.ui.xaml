#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace InkingExperiences::InkToTextEngine {
class UpdateObject {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidatesSessionId@UpdateObject@InkToTextEngine@InkingExperiences@@UEAAJAEAI@Z
    virtual long GetCandidatesSessionId(unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidatesSessionType@UpdateObject@InkToTextEngine@InkingExperiences@@UEAAJAEAW4CandidatesSessionType@3@@Z
    virtual long GetCandidatesSessionType(int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHitTestSource@UpdateObject@InkToTextEngine@InkingExperiences@@UEAAJAEAW4HitTestSource@3@@Z
    virtual long GetHitTestSource(int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRectForHitTest@UpdateObject@InkToTextEngine@InkingExperiences@@UEAAJAEAURect@Foundation@Windows@@@Z
    virtual long GetRectForHitTest(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdateType@UpdateObject@InkToTextEngine@InkingExperiences@@UEAAJAEAW4ContentUpdateType@3@@Z
    virtual long GetUpdateType(int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldInsertSpaceBeforeIfNecessary@UpdateObject@InkToTextEngine@InkingExperiences@@UEAAJAEA_N@Z
    virtual long ShouldInsertSpaceBeforeIfNecessary(bool &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UpdateObject@InkToTextEngine@InkingExperiences@@QEAA@XZ
    UpdateObject();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UpdateObject@InkToTextEngine@InkingExperiences@@UEAA@XZ
    virtual ~UpdateObject();
};
} // namespace InkingExperiences::InkToTextEngine
