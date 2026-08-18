#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class ThemeShadowGlobalScene {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNewCaster@ThemeShadowGlobalScene@@UEAAXW4CasterType@@W4SourceType@@PEAUIVisual@Composition@UI@Windows@@PEAVCUIElement@@PEAVCPopup@@PEAUICompositionBrush@567@PEAUHWND__@@@Z
    virtual void AddNewCaster(int, int, ::Windows::UI::Composition::IVisual *, CUIElement *, CPopup *, ::Windows::UI::Composition::ICompositionBrush *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSharedShadowCasterPairByVisual@ThemeShadowGlobalScene@@QEBAPEAVSharedShadowCasterPair@@PEAUIVisual@Composition@UI@Windows@@@Z
    SharedShadowCasterPair * FindSharedShadowCasterPairByVisual(::Windows::UI::Composition::IVisual *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@ThemeShadowGlobalScene@@UEAA?AW4SceneType@@XZ
    virtual int GetType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCaster@ThemeShadowGlobalScene@@UEAA_NPEAUIVisual@Composition@UI@Windows@@@Z
    virtual bool RemoveCaster(::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSharedCasterPair@ThemeShadowGlobalScene@@QEAAXPEAVSharedShadowCasterPair@@@Z
    void RemoveSharedCasterPair(SharedShadowCasterPair *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ThemeShadowGlobalScene@@QEAA@PEAVDCompTreeHost@@PEAVCCoreServices@@@Z
    ThemeShadowGlobalScene(DCompTreeHost *, CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateReceivers@ThemeShadowGlobalScene@@UEAAXPEAVCCoreServices@@PEAVCXamlIslandRoot@@@Z
    virtual void UpdateReceivers(CCoreServices *, CXamlIslandRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSharedCasters@ThemeShadowGlobalScene@@QEAAXXZ
    void UpdateSharedCasters();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThemeShadowGlobalScene@@UEAA@XZ
    virtual ~ThemeShadowGlobalScene();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesPopupHaveGlobalCaster@ThemeShadowGlobalScene@@AEAA_NPEAVCPopup@@PEAVCUIElement@@@Z
    bool DoesPopupHaveGlobalCaster(CPopup *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateShadowDepth@ThemeShadowGlobalScene@@AEAAMPEAVCPopup@@@Z
    float EstimateShadowDepth(CPopup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreprocessSharedCasters@ThemeShadowGlobalScene@@AEAAXXZ
    void PreprocessSharedCasters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateReceiversAndFilterCasters@ThemeShadowGlobalScene@@AEAAXPEAVCCoreServices@@PEAVCXamlIslandRoot@@@Z
    void UpdateReceiversAndFilterCasters(CCoreServices *, CXamlIslandRoot *);
};
