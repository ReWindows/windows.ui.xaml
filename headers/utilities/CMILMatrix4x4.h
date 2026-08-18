#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
class CMILMatrix4x4 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CMILMatrix4x4@@QEAAXAEBVCMILMatrix@@@Z
    void Append(CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CMILMatrix4x4@@QEAAXAEBV1@@Z
    void Append(CMILMatrix4x4const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromFloatArray@CMILMatrix4x4@@SA?AV1@AEAVCValue@@@Z
    static CMILMatrix4x4 FromFloatArray(CValue &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DScaleDimensions@CMILMatrix4x4@@QEBAXAEBUXSIZEF@@MMPEAM1@Z
    void Get2DScaleDimensions(XSIZEF const &, float, float, float *, float *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Is2D@CMILMatrix4x4@@QEBA_NXZ
    bool Is2D() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIdentity@CMILMatrix4x4@@QEBA_NXZ
    bool IsIdentity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScaleOrTranslationOnly@CMILMatrix4x4@@QEBA_NXZ
    bool IsScaleOrTranslationOnly() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepend@CMILMatrix4x4@@QEAAXAEBV1@@Z
    void Prepend(CMILMatrix4x4const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepend_DropZ@CMILMatrix4x4@@QEAAXAEBVCMILMatrix@@@Z
    void Prepend_DropZ(CMILMatrix const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToPerspective@CMILMatrix4x4@@QEAAXMMMMI@Z
    void SetToPerspective(float, float, float, float, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToRotationX@CMILMatrix4x4@@QEAAXM@Z
    void SetToRotationX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToRotationY@CMILMatrix4x4@@QEAAXM@Z
    void SetToRotationY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToRotationZ@CMILMatrix4x4@@QEAAXM@Z
    void SetToRotationZ(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToScaleAboutCenter@CMILMatrix4x4@@QEAAXAEBUVector3@Numerics@Foundation@Windows@@0@Z
    void SetToScaleAboutCenter(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform2DPoints_DivideW@CMILMatrix4x4@@QEBA_NAEBV?$span@$$CBUXPOINTF@@$0?0@gsl@@AEBV?$span@UXPOINTF@@$0?0@3@@Z
    bool Transform2DPoints_DivideW(WindissectOpaque const &, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformBoundsIgnoreZ@CMILMatrix4x4@@QEBAXPEBUXRECTF_WH@@PEAU2@@Z
    void TransformBoundsIgnoreZ(XRECTF_WH const *, XRECTF_WH *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformWorldToLocalWithInterpolation@CMILMatrix4x4@@QEBA_NAEBV?$span@$$CBUXPOINTF@@$0?0@gsl@@AEBV?$span@UXPOINTF@@$0?0@3@@Z
    bool TransformWorldToLocalWithInterpolation(WindissectOpaque const &, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformWorldToLocalWithInverse@CMILMatrix4x4@@QEBA_NAEBV?$span@$$CBUXPOINTF@@$0?0@gsl@@AEBV?$span@UXPOINTF@@$0?0@3@@Z
    bool TransformWorldToLocalWithInverse(WindissectOpaque const &, WindissectOpaque const &) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformWorldToLocalHelper@CMILMatrix4x4@@CA_NAEBUfloat4x4@Numerics@Foundation@Windows@@AEBUXPOINTF@@AEAU6@@Z
    static bool TransformWorldToLocalHelper(WindissectOpaque &, XPOINTF const &, XPOINTF &);
};
