#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 26 member(s).
class CStackPanel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CStackPanel@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CStackPanel@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundSizing@CStackPanel@@UEBA?AW4BackgroundSizing@DirectUI@@XZ
    virtual int GetBackgroundSizing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderBrush@CStackPanel@@UEBA?AV?$xref_ptr@VCBrush@@@@XZ
    virtual WindissectOpaque GetBorderBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderThickness@CStackPanel@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetBorderThickness() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCornerRadius@CStackPanel@@UEBA?AUXRECTF_CR@@XZ
    virtual XRECTF_CR GetCornerRadius() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIrregularSnapPoints@CStackPanel@@UEAAJIIIPEAPEAMPEAI@Z
    virtual long GetIrregularSnapPoints(unsigned int, unsigned int, unsigned int, float * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPadding@CStackPanel@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetPadding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegularSnapPoints@CStackPanel@@UEAAJIIIPEAM0@Z
    virtual long GetRegularSnapPoints(unsigned int, unsigned int, unsigned int, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpacing@CStackPanel@@QEBAMXZ
    float GetSpacing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CStackPanel@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSnapPointsChangeNotificationsRequirement@CStackPanel@@UEAAJII@Z
    virtual long SetSnapPointsChangeNotificationsRequirement(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CStackPanel@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CStackPanel@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CStackPanel@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStackPanel@@MEAA@XZ
    virtual ~CStackPanel();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommonSnapPointKeys@CStackPanel@@AEAAJPEAM0@Z
    long GetCommonSnapPointKeys(float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIrregularSnapPointKeys@CStackPanel@@AEAAJAEBVCUIElementCollectionWrapper@@PEAPEAMPEAHPEAM3@Z
    long GetIrregularSnapPointKeys(CUIElementCollectionWrapper const &, float * *, int *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegularSnapPointKeys@CStackPanel@@AEAAJAEBVCUIElementCollectionWrapper@@PEAM11@Z
    long GetRegularSnapPointKeys(CUIElementCollectionWrapper const &, float *, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySnapPointsChanges@CStackPanel@@AEAAJAEBVCUIElementCollectionWrapper@@@Z
    long NotifySnapPointsChanges(CUIElementCollectionWrapper const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySnapPointsChanges@CStackPanel@@AEAAJI@Z
    long NotifySnapPointsChanges(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshIrregularSnapPointKeys@CStackPanel@@AEAAJXZ
    long RefreshIrregularSnapPointKeys();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshRegularSnapPointKeys@CStackPanel@@AEAAJXZ
    long RefreshRegularSnapPointKeys();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSnapPointKeys@CStackPanel@@AEAAJXZ
    long ResetSnapPointKeys();
};
