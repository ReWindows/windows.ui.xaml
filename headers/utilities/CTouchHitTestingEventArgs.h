#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
namespace DirectUI {
class CTouchHitTestingEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateProximityToPolygon@CTouchHitTestingEventArgs@DirectUI@@UEAAJIPEAUPoint@Foundation@Windows@@PEAUCoreProximityEvaluation@Core@UI@5@@Z
    virtual long EvaluateProximityToPolygon(unsigned int, WindissectOpaque *, ::Windows::UI::Core::CoreProximityEvaluation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateProximityToRect@CTouchHitTestingEventArgs@DirectUI@@UEAAJURect@Foundation@Windows@@PEAUCoreProximityEvaluation@Core@UI@5@@Z
    virtual long EvaluateProximityToRect(WindissectOpaque, ::Windows::UI::Core::CoreProximityEvaluation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInstance@CTouchHitTestingEventArgs@DirectUI@@UEAAJPEAVCContentRoot@@UPoint@Foundation@Windows@@URect@56@2II@Z
    virtual long InitializeInstance(CContentRoot *, WindissectOpaque, WindissectOpaque, WindissectOpaque, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CTouchHitTestingEventArgs@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundingBox@CTouchHitTestingEventArgs@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_BoundingBox(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CTouchHitTestingEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Point@CTouchHitTestingEventArgs@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Point(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProximityEvaluation@CTouchHitTestingEventArgs@DirectUI@@UEAAJPEAUCoreProximityEvaluation@Core@UI@Windows@@@Z
    virtual long get_ProximityEvaluation(::Windows::UI::Core::CoreProximityEvaluation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CTouchHitTestingEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProximityEvaluation@CTouchHitTestingEventArgs@DirectUI@@UEAAJUCoreProximityEvaluation@Core@UI@Windows@@@Z
    virtual long put_ProximityEvaluation(::Windows::UI::Core::CoreProximityEvaluation);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTouchHitTestingEventArgs@DirectUI@@UEAA@XZ
    virtual ~CTouchHitTestingEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CTouchHitTestingEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CTouchHitTestingEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
};
} // namespace DirectUI
