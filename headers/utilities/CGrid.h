#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 30 member(s).
class CGrid {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGrid@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CGrid@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGrid@@UEAA@XZ
    virtual ~CGrid();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CGrid@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGrid@@IEAA@PEAVCCoreServices@@@Z
    CGrid(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CGrid@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CGrid@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CGrid@@EEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMinSizeInDefinitionRange@CGrid@@AEAAXPEAVCDOCollection@@IIMM@Z
    void EnsureMinSizeInDefinitionRange(CDOCollection *, unsigned int, unsigned int, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTempDefinitionsStorage@CGrid@@AEAAXI@Z
    void EnsureTempDefinitionsStorage(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundSizing@CGrid@@EEBA?AW4BackgroundSizing@DirectUI@@XZ
    virtual int GetBackgroundSizing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderBrush@CGrid@@EEBA?AV?$xref_ptr@VCBrush@@@@XZ
    virtual WindissectOpaque GetBorderBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderThickness@CGrid@@EEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetBorderThickness() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnSpacing@CGrid@@AEBAMXZ
    float GetColumnSpacing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCornerRadius@CGrid@@EEBA?AUXRECTF_CR@@XZ
    virtual XRECTF_CR GetCornerRadius() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPadding@CGrid@@EEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetPadding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowSpacing@CGrid@@AEBAMXZ
    float GetRowSpacing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUseLayoutRoundingWithRS4Quirk@CGrid@@AEBA_NXZ
    bool GetUseLayoutRoundingWithRS4Quirk() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDefinitionStructure@CGrid@@AEAAJXZ
    long InitializeDefinitionStructure();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWithoutRowAndColumnDefinitions@CGrid@@AEBA_NXZ
    bool IsWithoutRowAndColumnDefinitions() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockDefinitions@CGrid@@AEAAXXZ
    void LockDefinitions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureCellsGroup@CGrid@@AEAAJIIMM_N0AEAU?$stack_vector@UCellCache@@$0BA@@Jupiter@@@Z
    long MeasureCellsGroup(unsigned int, unsigned int, float, float, bool, bool, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveStar@CGrid@@AEAAXPEAVCDefinitionCollectionBase@@M@Z
    void ResolveStar(CDefinitionCollectionBase *, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalSize@CGrid@@AEAAXPEAVCDefinitionCollectionBase@@M@Z
    void SetFinalSize(CDefinitionCollectionBase *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortDefinitionsForOverflowSizeDistribution@CGrid@@AEAAXPEAPEAVCDefinitionBase@@I@Z
    void SortDefinitionsForOverflowSizeDistribution(CDefinitionBase * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortDefinitionsForSpanMaxSizeDistribution@CGrid@@AEAAXPEAPEAVCDefinitionBase@@I@Z
    void SortDefinitionsForSpanMaxSizeDistribution(CDefinitionBase * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortDefinitionsForSpanPreferredDistribution@CGrid@@AEAAXPEAPEAVCDefinitionBase@@I@Z
    void SortDefinitionsForSpanPreferredDistribution(CDefinitionBase * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockDefinitions@CGrid@@AEAAXXZ
    void UnlockDefinitions();
};
