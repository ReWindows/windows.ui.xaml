#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 28 member(s).
class CGlyphs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateBounds@CGlyphs@@UEAAJXZ
    virtual long CalculateBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CGlyphs@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFontFace@CGlyphs@@QEAAJXZ
    long EnsureFontFace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CGlyphs@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualHeight@CGlyphs@@UEAAJPEAM@Z
    virtual long GetActualHeight(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWidth@CGlyphs@@UEAAJPEAM@Z
    virtual long GetActualWidth(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultBaseUri@CGlyphs@@QEAAPEAUIPALUri@@XZ
    IPALUri * GetDefaultBaseUri();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndependentlyAnimatedBrushes@CGlyphs@@UEAAXPEAPEAVCSolidColorBrush@@0@Z
    virtual void GetIndependentlyAnimatedBrushes(CSolidColorBrush * *, CSolidColorBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CGlyphs@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWRender@CGlyphs@@QEAAJPEAVIContentRenderer@@@Z
    long HWRender(IContentRenderer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRightToLeft@CGlyphs@@UEAA_NXZ
    virtual bool IsRightToLeft();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CGlyphs@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CGlyphs@@MEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CGlyphs@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CGlyphs@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CGlyphs@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CGlyphs@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PE Export
    // Symbol: ?NWCanApplyOpacityWithoutLayer@CGlyphs@@MEAAIXZ
    virtual unsigned int NWCanApplyOpacityWithoutLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPreChildrenEdgesVirtual@CGlyphs@@MEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPreChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGlyphs@@AEAA@PEAVCCoreServices@@@Z
    CGlyphs(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineGlyphsAndPositions@CGlyphs@@AEAAJXZ
    long DetermineGlyphsAndPositions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGlyphRun@CGlyphs@@AEAAJXZ
    long DrawGlyphRun();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTextDrawingContext@CGlyphs@@AEAAJXZ
    long EnsureTextDrawingContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrigin@CGlyphs@@AEAAJPEAM0@Z
    long GetOrigin(float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRender@CGlyphs@@AEAAJPEAI@Z
    long PreRender(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGlyphs@@EEAA@XZ
    virtual ~CGlyphs();
};
