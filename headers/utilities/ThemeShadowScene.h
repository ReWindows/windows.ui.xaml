#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
class ThemeShadowScene {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNewCaster@ThemeShadowScene@@UEAAXW4CasterType@@W4SourceType@@PEAUIVisual@Composition@UI@Windows@@PEAVCUIElement@@PEAVCPopup@@PEAUICompositionBrush@567@PEAUHWND__@@@Z
    virtual void AddNewCaster(int, int, ::Windows::UI::Composition::IVisual *, CUIElement *, CPopup *, ::Windows::UI::Composition::ICompositionBrush *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCasters@ThemeShadowScene@@QEAAXXZ
    void ClearCasters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReceivers@ThemeShadowScene@@UEAAXXZ
    virtual void ClearReceivers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitialized@ThemeShadowScene@@QEAAXPEAVCXamlIslandRoot@@@Z
    void EnsureInitialized(CXamlIslandRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFilteredShadowCasterPairByElement@ThemeShadowScene@@QEBAPEAVShadowCasterPair@@PEAVCUIElement@@@Z
    ShadowCasterPair * FindFilteredShadowCasterPairByElement(CUIElement *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFilteredShadowCasterPairByVisual@ThemeShadowScene@@QEBAPEAVShadowCasterPair@@PEAUIVisual@Composition@UI@Windows@@@Z
    ShadowCasterPair * FindFilteredShadowCasterPairByVisual(::Windows::UI::Composition::IVisual *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindShadowCasterPairByElement@ThemeShadowScene@@QEBAPEAVShadowCasterPair@@PEAVCUIElement@@@Z
    ShadowCasterPair * FindShadowCasterPairByElement(CUIElement *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindShadowCasterPairByVisual@ThemeShadowScene@@QEBAPEAVShadowCasterPair@@PEAUIVisual@Composition@UI@Windows@@@Z
    ShadowCasterPair * FindShadowCasterPairByVisual(::Windows::UI::Composition::IVisual *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumOfReceivers@ThemeShadowScene@@QEAAHXZ
    int GetNumOfReceivers();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetType@ThemeShadowScene@@UEAA?AW4SceneType@@XZ
    virtual int GetType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCaster@ThemeShadowScene@@UEAA_NPEAUIVisual@Composition@UI@Windows@@@Z
    virtual bool RemoveCaster(::Windows::UI::Composition::IVisual *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ThemeShadowScene@@QEAA@PEAVDCompTreeHost@@PEAVCCoreServices@@@Z
    ThemeShadowScene(DCompTreeHost *, CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCasters@ThemeShadowScene@@QEAAXXZ
    void UpdateCasters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLightDirection@ThemeShadowScene@@QEAAXAEBVCMILMatrix@@@Z
    void UpdateLightDirection(CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateReceivers@ThemeShadowScene@@UEAAXPEAVCCoreServices@@PEAVCXamlIslandRoot@@@Z
    virtual void UpdateReceivers(CCoreServices *, CXamlIslandRoot *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThemeShadowScene@@UEAA@XZ
    virtual ~ThemeShadowScene();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckReceiverNeedUpdate@ThemeShadowScene@@IEAAXPEAUIVisual@Composition@UI@Windows@@AEA_N@Z
    void CheckReceiverNeedUpdate(::Windows::UI::Composition::IVisual *, bool &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupLights@ThemeShadowScene@@AEAAXPEAVCXamlIslandRoot@@@Z
    void SetupLights(CXamlIslandRoot *);
};
