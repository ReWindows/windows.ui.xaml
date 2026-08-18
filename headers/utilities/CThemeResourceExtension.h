#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CThemeResourceExtension {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CThemeResourceExtension@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAllowMultipleAssociation@CThemeResourceExtension@@UEBA_NXZ
    virtual bool DoesAllowMultipleAssociation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CThemeResourceExtension@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CThemeResourceExtension@@QEAAJPEAVCValue@@@Z
    long GetValue(CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CThemeResourceExtension@@UEAAXXZ
    virtual void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialValueAndTargetDictionary@CThemeResourceExtension@@QEAAJPEAVCDependencyObject@@PEAVCResourceDictionary@@@Z
    long SetInitialValueAndTargetDictionary(CDependencyObject *, CResourceDictionary *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeResourceBinding@CThemeResourceExtension@@QEAAJPEAVCDependencyObject@@PEBVCDependencyProperty@@PEAVCModifiedValue@@W4BaseValueSource@@@Z
    long SetThemeResourceBinding(CDependencyObject *, CDependencyProperty const *, CModifiedValue *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CThemeResourceExtension@@UEAA@XZ
    virtual ~CThemeResourceExtension();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CThemeResourceExtension@@MEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CThemeResourceExtension@@AEAA@PEAVCCoreServices@@@Z
    CThemeResourceExtension(CCoreServices *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsValueFromInitialTheme@CThemeResourceExtension@@AEAAJPEAVCResourceDictionary@@@Z
    long SetIsValueFromInitialTheme(CResourceDictionary *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastResolvedValue@CThemeResourceExtension@@AEAAJPEAVCDependencyObject@@@Z
    long SetLastResolvedValue(CDependencyObject *);
};
