#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class CDependencyProperty {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultVO@CDependencyProperty@@QEBAJPEAVCCoreServices@@PEAVCValue@@@Z
    long CreateDefaultVO(CCoreServices *, CValue *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultValueObject@CDependencyProperty@@QEBAJPEAVCCoreServices@@PEAVCValue@@@Z
    long CreateDefaultValueObject(CCoreServices *, CValue *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBooleanThemeResourceValue@CDependencyProperty@@SAJPEAVCCoreServices@@AEBVxstring_ptr_view@@PEA_N2@Z
    static long GetBooleanThemeResourceValue(CCoreServices *, xstring_ptr_view const &, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultFontIconFontFamily@CDependencyProperty@@SAJPEAVCCoreServices@@PEAPEAVCDependencyObject@@@Z
    static long GetDefaultFontIconFontFamily(CCoreServices *, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultTextControlContextFlyout@CDependencyProperty@@SAJPEAVCCoreServices@@PEAPEAVCDependencyObject@@@Z
    static long GetDefaultTextControlContextFlyout(CCoreServices *, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValue@CDependencyProperty@@QEBAJPEAVCCoreServices@@PEAVCDependencyObject@@PEBVCClassInfo@@PEAVCValue@@@Z
    long GetDefaultValue(CCoreServices *, CDependencyObject *, CClassInfo const *, CValue *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffset@CDependencyProperty@@QEBAGXZ
    unsigned short GetOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStorageType@CDependencyProperty@@QEBA?AW4ValueType@@XZ
    int GetStorageType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAssignable@CDependencyProperty@@QEBA_NAEBVCValue@@@Z
    bool IsAssignable(CValue const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContentProperty@CDependencyProperty@@QEBA_NXZ
    bool IsContentProperty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCreateOnDemandDisabledByQuirk@CDependencyProperty@@SA?B_NW4KnownPropertyIndex@@@Z
    static bool IsCreateOnDemandDisabledByQuirk(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGridLengthProperty@CDependencyProperty@@QEBA_NXZ
    bool IsGridLengthProperty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnDemandProperty@CDependencyProperty@@QEBA_NXZ
    bool IsOnDemandProperty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldBindingGetValueUseCheckOnDemandProperty@CDependencyProperty@@QEBA?B_NXZ
    bool ShouldBindingGetValueUseCheckOnDemandProperty() const;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultFocusVisualBrush@CDependencyProperty@@CAJW4FocusVisualType@@PEAVCCoreServices@@PEAVCDependencyObject@@AEBUFocusVisualResourceData@1@PEAPEAV4@@Z
    static long GetDefaultFocusVisualBrush(int, CCoreServices *, CDependencyObject *, WindissectOpaque const &, CDependencyObject * *);
};
