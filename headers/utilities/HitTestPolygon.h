#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class HitTestPolygon {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipToPolygon@HitTestPolygon@@QEAAJIPEBUXPOINTF@@@Z
    long ClipToPolygon(unsigned int, XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipToRect@HitTestPolygon@@QEAAJAEBUXRECTF_WH@@@Z
    long ClipToRect(XRECTF_WH const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@HitTestPolygon@@QEBAXPEAV1@@Z
    void CopyTo(HitTestPolygon *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPolygonBounds@HitTestPolygon@@QEBA?AUXRECTF_RB@@XZ
    XRECTF_RB GetPolygonBounds() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HitTestPolygon@@QEAA@AEBV0@@Z
    HitTestPolygon(HitTestPolygon const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IntersectsPolygon@HitTestPolygon@@QEBAJIPEBUXPOINTF@@PEAI@Z
    long IntersectsPolygon(unsigned int, XPOINTF const *, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IntersectsRect@HitTestPolygon@@QEBAIAEBUXRECTF_RB@@@Z
    unsigned int IntersectsRect(XRECTF_RB const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IntersectsRect@HitTestPolygon@@QEBAIAEBUXRECTF_WH@@@Z
    unsigned int IntersectsRect(XRECTF_WH const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEmpty@HitTestPolygon@@QEAAXXZ
    void SetEmpty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPoints@HitTestPolygon@@QEAAXIPEBUXPOINTF@@@Z
    void SetPoints(unsigned int, XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform@HitTestPolygon@@QEAAXAEBVCMILMatrix@@@Z
    void Transform(CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform@HitTestPolygon@@QEAAXAEBVCMILMatrix4x4@@@Z
    void Transform(CMILMatrix4x4const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformWorldToLocalWithInverse@HitTestPolygon@@QEAA_NAEBVCMILMatrix4x4@@@Z
    bool TransformWorldToLocalWithInverse(CMILMatrix4x4const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateFromPoints@HitTestPolygon@@QEAA_NXZ
    bool UpdateStateFromPoints();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateFromRect@HitTestPolygon@@QEAAXXZ
    void UpdateStateFromRect();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HitTestPolygon@@QEAA@XZ
    ~HitTestPolygon();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Ensure3DMode@HitTestPolygon@@AEAAXXZ
    void Ensure3DMode();
};
