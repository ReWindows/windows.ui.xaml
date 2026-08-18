#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 26 member(s).
class CTextSelection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTextSelection@@SAJPEAUITextContainer@@PEAUITextView@@PEAUITextSelectionNotify@@PEAPEAV1@@Z
    static long Create(ITextContainer *, ITextView *, ITextSelectionNotify *, CTextSelection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendSelectionByMouse@CTextSelection@@UEAAJAEBVCTextPosition@@@Z
    virtual long ExtendSelectionByMouse(CTextPosition const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendSelectionByMouse@CTextSelection@@UEAAJUXPOINTF@@@Z
    virtual long ExtendSelectionByMouse(XPOINTF);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorTextPosition@CTextSelection@@UEBAJPEAVCTextPosition@@@Z
    virtual long GetAnchorTextPosition(CTextPosition *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCursorGravity@CTextSelection@@UEBA?AW4TextGravity@@XZ
    virtual int GetCursorGravity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndGravity@CTextSelection@@UEBA?AW4TextGravity@@XZ
    virtual int GetEndGravity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndTextPosition@CTextSelection@@UEBAJPEAVCTextPosition@@@Z
    virtual long GetEndTextPosition(CTextPosition *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLength@CTextSelection@@UEBAJPEAI@Z
    virtual long GetLength(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMovingGravity@CTextSelection@@UEBA?AW4TextGravity@@XZ
    virtual int GetMovingGravity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMovingTextPosition@CTextSelection@@UEBAJPEAVCTextPosition@@@Z
    virtual long GetMovingTextPosition(CTextPosition *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartGravity@CTextSelection@@UEBA?AW4TextGravity@@XZ
    virtual int GetStartGravity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartTextPosition@CTextSelection@@UEBAJPEAVCTextPosition@@@Z
    virtual long GetStartTextPosition(CTextPosition *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CTextSelection@@UEBAJPEAVxstring_ptr@@@Z
    virtual long GetText(xstring_ptr *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXaml@CTextSelection@@UEBAJPEAVxstring_ptr@@@Z
    virtual long GetXaml(xstring_ptr *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CTextSelection@@UEBAIXZ
    virtual unsigned int IsEmpty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSelection@CTextSelection@@UEAAXXZ
    virtual void ResetSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CTextSelection@@UEAAJIIW4TextGravity@@@Z
    virtual long Select(unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CTextSelection@@UEAAJAEBVCTextPosition@@0W4TextGravity@@@Z
    virtual long Select(CTextPosition const &, CTextPosition const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectWord@CTextSelection@@UEAAJUXPOINTF@@@Z
    virtual long SelectWord(XPOINTF);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectWord@CTextSelection@@UEAAJAEBVCTextPosition@@@Z
    virtual long SelectWord(CTextPosition const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCaretPositionFromPoint@CTextSelection@@UEAAJUXPOINTF@@@Z
    virtual long SetCaretPositionFromPoint(XPOINTF);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCaretPositionFromTextPosition@CTextSelection@@UEAAJAEBVCTextPosition@@@Z
    virtual long SetCaretPositionFromTextPosition(CTextPosition const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToInsertionPosition@CTextSelection@@CAJPEAUITextContainer@@PEAUITextView@@PEAIW4LogicalDirection@DirectUI@@@Z
    static long MoveToInsertionPosition(ITextContainer *, ITextView *, unsigned int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NormalizeSelection@CTextSelection@@CAJPEAUITextContainer@@PEAUITextView@@PEAI2@Z
    static long NormalizeSelection(ITextContainer *, ITextView *, unsigned int *, unsigned int *);
};
