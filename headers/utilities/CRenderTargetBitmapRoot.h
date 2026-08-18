#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class CRenderTargetBitmapRoot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachElement@CRenderTargetBitmapRoot@@QEAAJPEAVCUIElement@@@Z
    long AttachElement(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRenderTargetBitmapRoot@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachElement@CRenderTargetBitmapRoot@@QEAAJPEAVCUIElement@@@Z
    long DetachElement(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CRenderTargetBitmapRoot@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRenderTargetBitmapRoot@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PE Export
    // Symbol: ?SkipNameRegistrationForChildren@CRenderTargetBitmapRoot@@UEAAIXZ
    virtual unsigned int SkipNameRegistrationForChildren();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CRenderTargetBitmapRoot@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestChildren@CRenderTargetBitmapRoot@@MEAAJAEBUXPOINTF@@PEAVCBoundedHitTestVisitor@@PEAW4Value@BoundsWalkHitResult@@I@Z
    virtual long BoundsTestChildren(XPOINTF const &, CBoundedHitTestVisitor *, int *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestChildren@CRenderTargetBitmapRoot@@MEAAJAEBVHitTestPolygon@@PEAVCBoundedHitTestVisitor@@PEAW4Value@BoundsWalkHitResult@@I@Z
    virtual long BoundsTestChildren(HitTestPolygon const &, CBoundedHitTestVisitor *, int *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CRenderTargetBitmapRoot@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CRenderTargetBitmapRoot@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CRenderTargetBitmapRoot@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintChildren@CRenderTargetBitmapRoot@@MEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    virtual long PrintChildren(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderTargetBitmapRoot@@MEAA@XZ
    virtual ~CRenderTargetBitmapRoot();
};
