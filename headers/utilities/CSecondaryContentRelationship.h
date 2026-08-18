#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class CSecondaryContentRelationship {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Apply@CSecondaryContentRelationship@@QEAAJXZ
    long Apply();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSecondaryContentRelationship@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAuxiliaryDependencyPropertyHolder@CSecondaryContentRelationship@@QEBA?AV?$xref_ptr@VCDependencyObject@@@@XZ
    WindissectOpaque GetAuxiliaryDependencyPropertyHolder() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDependencyPropertyHolder@CSecondaryContentRelationship@@QEBA?AV?$xref_ptr@VCDependencyObject@@@@XZ
    WindissectOpaque GetDependencyPropertyHolder() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParametricCurveDefinitions@CSecondaryContentRelationship@@QEAAJPEAIPEAPEAUCParametricCurveDefinition@@@Z
    long GetParametricCurveDefinitions(unsigned int *, CParametricCurveDefinition * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryContent@CSecondaryContentRelationship@@QEBA?AV?$xref_ptr@VCUIElement@@@@XZ
    WindissectOpaque GetPrimaryContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSecondaryContent@CSecondaryContentRelationship@@QEBA?AV?$xref_ptr@VCUIElement@@@@XZ
    WindissectOpaque GetSecondaryContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSecondaryContentRelationship@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CSecondaryContentRelationship@@QEAAJXZ
    long Remove();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryContent@CSecondaryContentRelationship@@QEAAJPEAVCUIElement@@@Z
    long SetPrimaryContent(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSecondaryContent@CSecondaryContentRelationship@@QEAAJPEAVCUIElement@@PEAVCDependencyObject@@@Z
    long SetSecondaryContent(CUIElement *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDependencyProperties@CSecondaryContentRelationship@@QEAAJI@Z
    long UpdateDependencyProperties(unsigned int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSecondaryContentRelationship@@AEAA@PEAVCCoreServices@@@Z
    CSecondaryContentRelationship(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRefOnPrimaryContent@CSecondaryContentRelationship@@AEAAJXZ
    long EnsureRefOnPrimaryContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseRefOnPrimaryContent@CSecondaryContentRelationship@@AEAAJXZ
    long ReleaseRefOnPrimaryContent();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSecondaryContentRelationship@@EEAA@XZ
    virtual ~CSecondaryContentRelationship();
};
