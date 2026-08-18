#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CTransform3D {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWUCExpression@CTransform3D@@UEAAXXZ
    virtual void ClearWUCExpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWUCAnimationStarted@CTransform3D@@UEAAXPEAVWinRTExpressionConversionContext@@@Z
    virtual void EnsureWUCAnimationStarted(WinRTExpressionConversionContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTransform3D@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetRenderDirty@CTransform3D@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetRenderDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CTransform3D@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompResourceDirty@CTransform3D@@UEAAXXZ
    virtual void SetDCompResourceDirty();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransform3D@@IEAA@PEAVCCoreServices@@@Z
    CTransform3D(CCoreServices *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTransform3D@@MEAA@XZ
    virtual ~CTransform3D();
};
