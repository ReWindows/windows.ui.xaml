#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace TouchTextSelection {
class CHandleProcessor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndGripperDrag@CHandleProcessor@TouchTextSelection@@UEAAJXZ
    virtual long OnEndGripperDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGripperDrag@CHandleProcessor@TouchTextSelection@@UEAAJUtagPOINT@@IPEAU3@@Z
    virtual long OnGripperDrag(tagPOINT, unsigned int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartGripperDrag@CHandleProcessor@TouchTextSelection@@UEAAJUtagPOINT@@I@Z
    virtual long OnStartGripperDrag(tagPOINT, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGripperDisplayLocation@CHandleProcessor@TouchTextSelection@@UEAAXUtagPOINT@@0I@Z
    virtual void SetGripperDisplayLocation(tagPOINT, tagPOINT, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHimetricsPerPixel@CHandleProcessor@TouchTextSelection@@UEAAJM@Z
    virtual long SetHimetricsPerPixel(float);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalcLogicalPos@CHandleProcessor@TouchTextSelection@@AEAA?AUtagPOINT@@XZ
    tagPOINT _CalcLogicalPos();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsInputWithinHorizontalMovementRect@CHandleProcessor@TouchTextSelection@@AEAA_NAEBUtagPOINT@@@Z
    bool _IsInputWithinHorizontalMovementRect(tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadSafetyZoneSettings@CHandleProcessor@TouchTextSelection@@AEAAXXZ
    void _LoadSafetyZoneSettings();
};
} // namespace TouchTextSelection
