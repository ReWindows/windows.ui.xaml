#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 26 member(s).
class ProjectedShadowManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPopupsLookingForNewCastersList@ProjectedShadowManager@@QEAAXPEAVCPopup@@@Z
    void AddToPopupsLookingForNewCastersList(CPopup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPolicyState@ProjectedShadowManager@@QEAAXXZ
    void ApplyPolicyState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearGlobalScenes@ProjectedShadowManager@@QEAAXXZ
    void ClearGlobalScenes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureScenePair@ProjectedShadowManager@@SAXPEAUICompositionProjectedShadow@Composition@UI@Windows@@0@Z
    static void ConfigureScenePair(::Windows::UI::Composition::ICompositionProjectedShadow *, ::Windows::UI::Composition::ICompositionProjectedShadow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirtyAllSubtreesToUpdateAllShadows@ProjectedShadowManager@@QEAAXXZ
    void DirtyAllSubtreesToUpdateAllShadows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisabledByPolicy@ProjectedShadowManager@@QEAA_NXZ
    bool DisabledByPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesPopupHaveGlobalCaster@ProjectedShadowManager@@QEAA_NPEAVCPopup@@PEAVCUIElement@@@Z
    bool DoesPopupHaveGlobalCaster(CPopup *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFallbackPolicy@ProjectedShadowManager@@QEAAXXZ
    void EnsureFallbackPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMaterialProperties@ProjectedShadowManager@@QEAAXXZ
    void EnsureMaterialProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameNumber@ProjectedShadowManager@@QEAAIXZ
    unsigned int GetFrameNumber();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHasEverHadCaster@ProjectedShadowManager@@QEAA_NXZ
    bool GetHasEverHadCaster();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextAncestorPopup@ProjectedShadowManager@@SAPEAVCPopup@@PEAV2@@Z
    static CPopup * GetNextAncestorPopup(CPopup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTranslateZ@ProjectedShadowManager@@SAMPEAVCUIElement@@@Z
    static float GetTranslateZ(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IgnorePolicyForTests@ProjectedShadowManager@@QEAA_NXZ
    bool IgnorePolicyForTests();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShadowImplementationEnabled@ProjectedShadowManager@@SA_NXZ
    static bool IsShadowImplementationEnabled();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ProjectedShadowManager@@QEAA@PEAVDCompTreeHost@@@Z
    ProjectedShadowManager(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResources@ProjectedShadowManager@@QEAAXXZ
    void ReleaseResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCaster@ProjectedShadowManager@@QEAA_NPEAUIVisual@Composition@UI@Windows@@@Z
    bool RemoveCaster(::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCasterStatus@ProjectedShadowManager@@QEAAXPEAVCUIElement@@@Z
    void UpdateCasterStatus(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCasterStatus@ProjectedShadowManager@@QEAAXPEAVCCoreServices@@W4SourceType@@PEAUIVisual@Composition@UI@Windows@@PEAVCUIElement@@PEAVCThemeShadow@@_NPEAVCPopup@@PEAUHWND__@@PEAVCXamlIslandRoot@@@Z
    void UpdateCasterStatus(CCoreServices *, int, ::Windows::UI::Composition::IVisual *, CUIElement *, CThemeShadow *, bool, CPopup *, HWND__*, CXamlIslandRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSharedCasters@ProjectedShadowManager@@QEAAXXZ
    void UpdateSharedCasters();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProjectedShadowManager@@QEAA@XZ
    ~ProjectedShadowManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreCasterListsEmpty@ProjectedShadowManager@@AEAA_NPEAVThemeShadowGlobalScene@@@Z
    bool AreCasterListsEmpty(ThemeShadowGlobalScene *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureScene@ProjectedShadowManager@@AEAAPEAVThemeShadowScene@@PEAVCThemeShadow@@_NPEAVCXamlIslandRoot@@@Z
    ThemeShadowScene * EnsureScene(CThemeShadow *, bool, CXamlIslandRoot *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalSceneForVisual@ProjectedShadowManager@@AEAAPEAVThemeShadowScene@@PEAUIVisual@Composition@UI@Windows@@V?$xref_ptr@VThemeShadowGlobalScene@@@@@Z
    ThemeShadowScene * GetGlobalSceneForVisual(::Windows::UI::Composition::IVisual *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSceneForVisual@ProjectedShadowManager@@AEAAPEAVThemeShadowScene@@PEAUIVisual@Composition@UI@Windows@@@Z
    ThemeShadowScene * GetSceneForVisual(::Windows::UI::Composition::IVisual *);
};
