#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 26 member(s).
class CProjection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWUCExpression@CProjection@@UEAAXXZ
    virtual void ClearWUCExpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWUCAnimationStarted@CProjection@@UEAAXPEAVWinRTExpressionConversionContext@@@Z
    virtual void EnsureWUCAnimationStarted(WinRTExpressionConversionContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentBounds@CProjection@@QEAAJAEBUXSIZEF@@AEBUXRECTF_RB@@PEAU3@PEAI@Z
    long GetContentBounds(XSIZEF const &, XRECTF_RB const &, XRECTF_RB *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverallProjectionMatrix@CProjection@@QEAA?AVCMILMatrix4x4@@AEBUXSIZEF@@@Z
    CMILMatrix4x4 GetOverallProjectionMatrix(XSIZEF const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProjectionMatrix@CProjection@@UEBA?AVCMILMatrix4x4@@XZ
    virtual CMILMatrix4x4 GetProjectionMatrix() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformerCommon@CProjection@@QEAAXAEBUXSIZEF@@PEAPEAVCPerspectiveTransformer@@@Z
    void GetTransformerCommon(XSIZEF const &, CPerspectiveTransformer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CProjection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PE Export
    // Symbol: ?Is2DAligned@CProjection@@UEAAIXZ
    virtual unsigned int Is2DAligned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompTransform@CProjection@@UEAAXPEAVDCompTransformConversionContext@@MM@Z
    virtual void MakeDCompTransform(DCompTransformConversionContext *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWinRTExpression@CProjection@@UEAAXPEAVWinRTExpressionConversionContext@@MM@Z
    virtual void MakeWinRTExpression(WinRTExpressionConversionContext *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWAddGeometry@CProjection@@QEAAJPEAUIPALSurface@@AEBUXSIZEF@@AEBUSharedRenderParams@@AEBUNWRenderParams@@PEAUNWProjectionStorage@@I@Z
    long NWAddGeometry(IPALSurface *, XSIZEF const &, SharedRenderParams const &, NWRenderParams const &, NWProjectionStorage *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWBuildProjection@CProjection@@QEAAJPEBVCFrameVectorBuffer@@AEBUXSIZEF@@PEBVCMILMatrix@@PEAVCRasterizerPath@@PEAUNWProjectionStorage@@@Z
    long NWBuildProjection(CFrameVectorBuffer const *, XSIZEF const &, CMILMatrix const *, CRasterizerPath *, NWProjectionStorage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetRenderDirty@CProjection@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetRenderDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CProjection@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompResourceDirty@CProjection@@UEAAXXZ
    virtual void SetDCompResourceDirty();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProjection@@IEAA@PEAVCCoreServices@@@Z
    CProjection(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureQuadPath@CProjection@@IEAAJPEAPEAVCRasterizerPath@@@Z
    long EnsureQuadPath(CRasterizerPath * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrustumClipMask@CProjection@@MEAAIXZ
    virtual unsigned int GetFrustumClipMask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update3DTransform@CProjection@@MEAAXMM@Z
    virtual void Update3DTransform(float, float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProjection@@MEAA@XZ
    virtual ~CProjection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildProjectionCommon@CProjection@@AEAAJPEBVCMILMatrix@@AEBUXSIZEF@@AEBUXRECTF_RB@@PEAU3@PEAVCRasterizerPath@@2AEAIPEAUXPOINTF4@@PEAUXVERTEX25D@@77PEAI@Z
    long BuildProjectionCommon(CMILMatrix const *, XSIZEF const &, XRECTF_RB const &, XSIZEF *, CRasterizerPath *, XRECTF_RB const &, unsigned int &, XPOINTF4*, XVERTEX25D *, XVERTEX25D *, XVERTEX25D *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clip3DQuad@CProjection@@AEAAJPEAUSDPoint4UV@@PEAUXSIZEF@@PEAI0AEAI@Z
    long Clip3DQuad(SDPoint4UV *, XSIZEF *, unsigned int *, SDPoint4UV *, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create3DQuad@CProjection@@AEAAXAEBUXSIZEF@@AEBUXRECTF_RB@@PEBVCMILMatrix@@1PEAUSDPoint4UV@@PEAVCMILMatrix4x4@@@Z
    void Create3DQuad(XSIZEF const &, XRECTF_RB const &, CMILMatrix const *, XRECTF_RB const &, SDPoint4UV *, CMILMatrix4x4*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProjectToPlane@CProjection@@AEAAXPEAUSDPoint4UV@@IPEAVCRasterizerPath@@PEAUXPOINTF@@PEAUXPOINTF4@@PEAI@Z
    void ProjectToPlane(SDPoint4UV *, unsigned int, CRasterizerPath *, XPOINTF *, XPOINTF4*, unsigned int *);
};
