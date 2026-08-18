#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 65 member(s).
class CShape {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CShape@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPCRenderData@CShape@@UEAAXXZ
    virtual void ClearPCRenderData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CShape@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAbsStrokeThickness@CShape@@QEBAMXZ
    float GetAbsStrokeThickness() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFillBounds@CShape@@QEAAJPEAUXRECTF_RB@@@Z
    long GetFillBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndependentlyAnimatedBrushes@CShape@@UEAAXPEAPEAVCSolidColorBrush@@0@Z
    virtual void GetIndependentlyAnimatedBrushes(CSolidColorBrush * *, CSolidColorBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShapeGeometryTransform@CShape@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GetShapeGeometryTransform(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStroke@CShape@@UEBA?AV?$xref_ptr@VCBrush@@@@XZ
    virtual WindissectOpaque GetStroke() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrokeBounds@CShape@@QEAAJPEAUXRECTF_RB@@@Z
    long GetStrokeBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrokeDashArray@CShape@@UEBA?AV?$xref_ptr@VCDoubleCollection@@@@XZ
    virtual WindissectOpaque GetStrokeDashArray() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrokeDashCap@CShape@@QEBA?AW4XcpPenCap@@XZ
    int GetStrokeDashCap() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrokeDashOffset@CShape@@QEBAMXZ
    float GetStrokeDashOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrokeEndLineCap@CShape@@QEBA?AW4XcpPenCap@@XZ
    int GetStrokeEndLineCap() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrokeLineJoin@CShape@@QEBA?AW4XcpLineJoin@@XZ
    int GetStrokeLineJoin() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrokeMiterLimit@CShape@@QEBAMXZ
    float GetStrokeMiterLimit() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrokeStartLineCap@CShape@@QEBA?AW4XcpPenCap@@XZ
    int GetStrokeStartLineCap() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrokeThickness@CShape@@QEBAMXZ
    float GetStrokeThickness() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CShape@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasStrokeDashArray@CShape@@UEBA_NXZ
    virtual bool HasStrokeDashArray() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWIsContentDirty@CShape@@UEAAIXZ
    virtual unsigned int NWIsContentDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPreChildrenEdgesVirtual@CShape@@UEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPreChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetFillBrushDirty@CShape@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetFillBrushDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetGeometryDirty@CShape@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetGeometryDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetStrokeBrushDirty@CShape@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetStrokeBrushDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderContent@CShape@@QEAAJW4HWRenderVisibility@@@Z
    long NotifyRenderContent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CShape@@QEAAJPEAVVisualContentRenderer@@PEAPEAUICompositionSpriteShape@Composition@UI@Windows@@@Z
    long Render(VisualContentRenderer *, ::Windows::UI::Composition::ICompositionSpriteShape * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStroke@CShape@@UEAAJV?$xref_ptr@VCBrush@@@@@Z
    virtual long SetStroke(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStrokeDashArray@CShape@@UEAAJV?$xref_ptr@VCDoubleCollection@@@@@Z
    virtual long SetStrokeDashArray(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CShape@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stroke@CShape@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long Stroke(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StrokeDashArray@CShape@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long StrokeDashArray(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRasterizerPath@CShape@@UEAAJXZ
    virtual long UpdateRasterizerPath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRenderGeometry@CShape@@UEAAJXZ
    virtual long UpdateRenderGeometry();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CShape@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShape@@IEAA@PEAVCCoreServices@@@Z
    CShape(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanStretchGeometry@CShape@@MEBA_NXZ
    virtual bool CanStretchGeometry() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureContentRenderDataVirtual@CShape@@MEAAXW4RenderWalkType@@0@Z
    virtual void EnsureContentRenderDataVirtual(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CShape@@MEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsForImageBrushVirtual@CShape@@MEAAJPEBVCImageBrush@@PEAUXRECTF_WH@@@Z
    virtual long GetBoundsForImageBrushVirtual(CImageBrush const *, XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeometryBounds@CShape@@IEAAJPEAUXRECTF_RB@@@Z
    long GetGeometryBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutlineRect@CShape@@IEAA?AUXRECTF_WH@@I@Z
    XRECTF_WH GetOutlineRect(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidenedGeometryBounds@CShape@@IEAAJPEAUXRECTF_RB@@@Z
    long GetWidenedGeometryBounds(XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CShape@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CShape@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitPenFromShape@CShape@@IEAAJPEAVCPlainPen@@@Z
    long InitPenFromShape(CPlainPen *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CShape@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWCanApplyOpacityWithoutLayer@CShape@@MEAAIXZ
    virtual unsigned int NWCanApplyOpacityWithoutLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWCleanDirtyFlags@CShape@@MEAAXXZ
    virtual void NWCleanDirtyFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsSmoothJoin@CShape@@MEBA_NXZ
    virtual bool NeedsSmoothJoin() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentDirty@CShape@@MEAAXXZ
    virtual void OnContentDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreChildrenPrintVirtual@CShape@@MEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    virtual long PreChildrenPrintVirtual(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceRenderGeometry@CShape@@IEAAXPEAVCGeometry@@@Z
    void ReplaceRenderGeometry(CGeometry *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShape@@MEAA@XZ
    virtual ~CShape();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyContentStretch@CShape@@CAJMW4Stretch@DirectUI@@AEBUXRECTF_RB@@AEBUXSIZEF@@PEAU5@@Z
    static long ApplyContentStretch(float, int, XRECTF_RB const &, XSIZEF const &, XSIZEF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStrokeStyle@CShape@@AEAAJPEAUIPALAcceleratedGraphicsFactory@@PEAPEAUIPALStrokeStyle@@@Z
    long CreateStrokeStyle(IPALAcceleratedGraphicsFactory *, IPALStrokeStyle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateEdgesCommon@CShape@@AEAAJPEAVCFrameVectorBuffer@@PEBVCMILMatrix@@IIIIMPEAVCLayer@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    long GenerateEdgesCommon(CFrameVectorBuffer *, CMILMatrix const *, unsigned int, unsigned int, unsigned int, unsigned int, float, CLayer *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateGeometryBounds@CShape@@AEAAJPEBUXSIZEF@@W4Stretch@DirectUI@@PEAUXRECTF_RB@@@Z
    long GenerateGeometryBounds(XSIZEF const *, int, XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStretchTransform@CShape@@AEAAJPEAVCMILMatrix@@@Z
    long GetStretchTransform(CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSprite@CShape@@AEAA?AV?$ComPtr@UICompositionSpriteShape@Composition@UI@Windows@@@WRL@Microsoft@@PEAVVisualContentRenderer@@@Z
    WindissectOpaque InitializeSprite(VisualContentRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateCompositionSpriteShape@CShape@@AEAAXPEAVVisualContentRenderer@@PEAUICompositionSpriteShape@Composition@UI@Windows@@@Z
    void PopulateCompositionSpriteShape(VisualContentRenderer *, ::Windows::UI::Composition::ICompositionSpriteShape *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRender@CShape@@AEAAIPEAIPEAUXRECTF_WH@@@Z
    unsigned int ShouldRender(unsigned int *, XRECTF_WH *);
};
