#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
class CMILMatrix {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CMILMatrix@@QEAAXAEBV1@@Z
    void Append(CMILMatrix const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMILMatrix@@QEAA@_N@Z
    CMILMatrix(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxFactor@CMILMatrix@@QEBAMXZ
    float GetMaxFactor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z
    void GetScaleDimensions(float *, float *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InferAffineMatrix@CMILMatrix@@QEAAXPEBUXPOINTF@@AEBUXRECTF_WH@@@Z
    void InferAffineMatrix(XPOINTF const *, XRECTF_WH const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invert@CMILMatrix@@QEAAHXZ
    int Invert();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAxisAlignedScaleOrTranslationReal@CMILMatrix@@QEBA_NXZ
    bool IsAxisAlignedScaleOrTranslationReal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIdentity@CMILMatrix@@QEBA_NXZ
    bool IsIdentity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScaleOrTranslationOnly@CMILMatrix@@QEBA_NXZ
    bool IsScaleOrTranslationOnly() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTranslationOnly@CMILMatrix@@QEBA_NXZ
    bool IsTranslationOnly() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepend@CMILMatrix@@QEAAXAEBV1@@Z
    void Prepend(CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scale@CMILMatrix@@QEAAXMM@Z
    void Scale(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToRotationAboutCenter@CMILMatrix@@QEAAXMMM@Z
    void SetToRotationAboutCenter(float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform@CMILMatrix@@QEBAXPEBUXPOINTF@@PEAU2@I@Z
    void Transform(XPOINTF const *, XPOINTF *, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform3DPoints_PreserveW@CMILMatrix@@QEBAXAEBV?$span@UXPOINTF4@@$0?0@gsl@@@Z
    void Transform3DPoints_PreserveW(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformAsVectors@CMILMatrix@@QEBAXPEBUXPOINTF@@PEAU2@I@Z
    void TransformAsVectors(XPOINTF const *, XPOINTF *, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformBounds@CMILMatrix@@QEBAXPEBUXRECTF_WH@@PEAU2@@Z
    void TransformBounds(XRECTF_WH const *, XRECTF_WH *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformBounds@CMILMatrix@@QEBAXPEBUXRECTF_RB@@PEAU2@@Z
    void TransformBounds(XRECTF_RB const *, XRECTF_RB *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformBounds@CMILMatrix@@QEBA?AURect@Foundation@Windows@@AEBU234@@Z
    WindissectOpaque TransformBounds(WindissectOpaque const &) const;
};
