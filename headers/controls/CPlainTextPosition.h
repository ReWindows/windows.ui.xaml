#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class CPlainTextPosition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@CPlainTextPosition@@QEBAIAEBV1@@Z
    unsigned int Equals(CPlainTextPosition const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharacterRect@CPlainTextPosition@@QEBAJW4TextGravity@@PEAUXRECTF_WH@@@Z
    long GetCharacterRect(int, XRECTF_WH *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGravity@CPlainTextPosition@@QEBAJPEAW4TextGravity@@@Z
    long GetGravity(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogicalParent@CPlainTextPosition@@QEBAJPEAPEAVCDependencyObject@@@Z
    long GetLogicalParent(CDependencyObject * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextInsertionPosition@CPlainTextPosition@@QEBAJPEAIPEAV1@@Z
    long GetNextInsertionPosition(unsigned int *, CPlainTextPosition *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffset@CPlainTextPosition@@QEBAJPEAI@Z
    long GetOffset(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionAtOffset@CPlainTextPosition@@QEBAJHW4TextGravity@@PEAIPEAV1@@Z
    long GetPositionAtOffset(int, int, unsigned int *, CPlainTextPosition *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousInsertionPosition@CPlainTextPosition@@QEBAJPEAIPEAV1@@Z
    long GetPreviousInsertionPosition(unsigned int *, CPlainTextPosition *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextContainer@CPlainTextPosition@@QEBAPEAUITextContainer@@XZ
    ITextContainer * GetTextContainer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualParent@CPlainTextPosition@@QEBAJPEAPEAVCFrameworkElement@@@Z
    long GetVisualParent(CFrameworkElement * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAtInsertionPosition@CPlainTextPosition@@QEBAJPEAI@Z
    long IsAtInsertionPosition(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CPlainTextPosition@@QEBA_NXZ
    bool IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LessThan@CPlainTextPosition@@QEBAIAEBV1@@Z
    unsigned int LessThan(CPlainTextPosition const &) const;
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextView@CPlainTextPosition@@IEBAPEAUITextView@@XZ
    ITextView * GetTextView() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckValid@CPlainTextPosition@@AEBAJXZ
    long CheckValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveByOffset@CPlainTextPosition@@AEAAJHW4TextGravity@@PEAI@Z
    long MoveByOffset(int, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToNextInsertionPosition@CPlainTextPosition@@AEAAJPEAI@Z
    long MoveToNextInsertionPosition(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToPreviousInsertionPosition@CPlainTextPosition@@AEAAJPEAI@Z
    long MoveToPreviousInsertionPosition(unsigned int *);
};
