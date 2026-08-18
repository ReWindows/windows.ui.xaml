#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class CTextPointerWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CTextPointerWrapper@@QEAAJPEAVCDependencyObject@@PEAPEAV1@@Z
    long Clone(CDependencyObject *, CTextPointerWrapper * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTextPointerWrapper@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTextPointerWrapper@@SAJPEAVCCoreServices@@AEBVCPlainTextPosition@@PEAPEAV1@@Z
    static long Create(CCoreServices *, CPlainTextPosition const &, CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharacterRect@CTextPointerWrapper@@QEAAJW4Enum@LogicalDirection@RichTextServices@@PEAUXRECTF_WH@@@Z
    long GetCharacterRect(int, XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogicalDirection@CTextPointerWrapper@@QEAAJPEAI@Z
    long GetLogicalDirection(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffset@CTextPointerWrapper@@QEAAJPEAH@Z
    long GetOffset(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionAtOffset@CTextPointerWrapper@@QEAAJHW4Enum@LogicalDirection@RichTextServices@@PEAPEAV1@@Z
    long GetPositionAtOffset(int, int, CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTextPointerWrapper@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualParent@CTextPointerWrapper@@QEAAJPEAPEAVCFrameworkElement@@@Z
    long GetVisualParent(CFrameworkElement * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPositionAndContainerValid@CTextPointerWrapper@@AEBA_NXZ
    bool CheckPositionAndContainerValid() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextPointerWrapper@@EEAA@XZ
    virtual ~CTextPointerWrapper();
};
