#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class TextNavigationHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindOwnerForPosition@TextNavigationHelper@@SAPEAVCDependencyObject@@PEAV2@PEAVCPlainTextPosition@@@Z
    static CDependencyObject * FindOwnerForPosition(CDependencyObject *, CPlainTextPosition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveByCharacter@TextNavigationHelper@@SAJHPEAVCPlainTextPosition@@@Z
    static long MoveByCharacter(int, CPlainTextPosition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveByWord@TextNavigationHelper@@SAJHPEAVCPlainTextPosition@@@Z
    static long MoveByWord(int, CPlainTextPosition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToLineUpOrDownPosition@TextNavigationHelper@@SAJ_NPEAVCDependencyObject@@PEAVCPlainTextPosition@@@Z
    static long MoveToLineUpOrDownPosition(bool, CDependencyObject *, CPlainTextPosition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToStartOrEndOfContent@TextNavigationHelper@@SAJ_NPEAVCDependencyObject@@PEAVCPlainTextPosition@@@Z
    static long MoveToStartOrEndOfContent(bool, CDependencyObject *, CPlainTextPosition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToStartOrEndOfLine@TextNavigationHelper@@SAJ_NPEAVCDependencyObject@@PEAVCPlainTextPosition@@@Z
    static long MoveToStartOrEndOfLine(bool, CDependencyObject *, CPlainTextPosition *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipHiddenCharacters@TextNavigationHelper@@CAJ_NPEAVCPlainTextPosition@@@Z
    static long SkipHiddenCharacters(bool, CPlainTextPosition *);
};
