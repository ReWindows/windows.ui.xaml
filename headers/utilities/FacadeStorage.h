#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class FacadeStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearFacadeAnimationInfo@FacadeStorage@@QEAAXPEBVCDependencyObject@@W4KnownPropertyIndex@@@Z
    void ClearFacadeAnimationInfo(CDependencyObject const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFacadeAnimationInfo@FacadeStorage@@QEAAAEAVDOFacadeAnimationInfo@@PEBVCDependencyObject@@W4KnownPropertyIndex@@@Z
    DOFacadeAnimationInfo & EnsureFacadeAnimationInfo(CDependencyObject const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackingCompositionObject@FacadeStorage@@QEBA?AV?$ComPtr@UICompositionObject@Composition@UI@Windows@@@WRL@Microsoft@@PEBVCDependencyObject@@@Z
    WindissectOpaque GetBackingCompositionObject(CDependencyObject const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackingListener@FacadeStorage@@QEBA?AV?$ComPtr@UIFacadePropertyListener@@@WRL@Microsoft@@PEBVCDependencyObject@@@Z
    WindissectOpaque GetBackingListener(CDependencyObject const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFacadeGlueExpression@FacadeStorage@@QEBA?AV?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@W4KnownPropertyIndex@@@Z
    WindissectOpaque GetFacadeGlueExpression(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReferenceWrapper@FacadeStorage@@QEBA?AV?$ComPtr@VFacadeReferenceWrapper@@@WRL@Microsoft@@PEBVCDependencyObject@@@Z
    WindissectOpaque GetReferenceWrapper(CDependencyObject const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAnimation@FacadeStorage@@QEBA_NPEBVCDependencyObject@@W4KnownPropertyIndex@@@Z
    bool HasAnimation(CDependencyObject const *, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasExplicitAnimation@FacadeStorage@@QEBA_NPEBVCDependencyObject@@W4KnownPropertyIndex@@@Z
    bool HasExplicitAnimation(CDependencyObject const *, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackingCompositionObject@FacadeStorage@@QEAAXPEBVCDependencyObject@@PEAUICompositionObject@Composition@UI@Windows@@@Z
    void SetBackingCompositionObject(CDependencyObject const *, ::Windows::UI::Composition::ICompositionObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackingListener@FacadeStorage@@QEAAXPEBVCDependencyObject@@PEAUIFacadePropertyListener@@@Z
    void SetBackingListener(CDependencyObject const *, IFacadePropertyListener *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFacadeGlueExpression@FacadeStorage@@QEAAXW4KnownPropertyIndex@@PEAUIExpressionAnimation@Composition@UI@Windows@@@Z
    void SetFacadeGlueExpression(int, ::Windows::UI::Composition::IExpressionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceWrapper@FacadeStorage@@QEAAXPEBVCDependencyObject@@PEAVFacadeReferenceWrapper@@@Z
    void SetReferenceWrapper(CDependencyObject const *, FacadeReferenceWrapper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFacadeAnimationInfo@FacadeStorage@@QEBAPEAVDOFacadeAnimationInfo@@PEBVCDependencyObject@@W4KnownPropertyIndex@@@Z
    DOFacadeAnimationInfo * TryGetFacadeAnimationInfo(CDependencyObject const *, int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FacadeStorage@@QEAA@XZ
    ~FacadeStorage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDOFacadeStorage@FacadeStorage@@AEAAXPEBVCDependencyObject@@@Z
    void ClearDOFacadeStorage(CDependencyObject const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDOFacadeStorage@FacadeStorage@@AEAAAEAUDOFacadeStorage@@PEBVCDependencyObject@@@Z
    DOFacadeStorage & EnsureDOFacadeStorage(CDependencyObject const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDOFacadeStorage@FacadeStorage@@AEBAPEAUDOFacadeStorage@@PEBVCDependencyObject@@@Z
    DOFacadeStorage * TryGetDOFacadeStorage(CDependencyObject const *) const;
};
