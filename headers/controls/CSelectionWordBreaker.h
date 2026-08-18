#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CSelectionWordBreaker {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacentNonWhitespaceCharacter@CSelectionWordBreaker@@SAJVCTextPosition@@PEAVISimpleTextBackend@@W4FindBoundaryType@@PEAV2@@Z
    static long GetAdjacentNonWhitespaceCharacter(CTextPosition, ISimpleTextBackend *, int, CTextPosition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacentWordNavigationBoundary@CSelectionWordBreaker@@SAJVCTextPosition@@PEAVISimpleTextBackend@@W4FindBoundaryType@@PEAV2@@Z
    static long GetAdjacentWordNavigationBoundary(CTextPosition, ISimpleTextBackend *, int, CTextPosition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacentWordSelectionBoundary@CSelectionWordBreaker@@SAJVCTextPosition@@PEAVISimpleTextBackend@@W4FindBoundaryType@@PEAV2@@Z
    static long GetAdjacentWordSelectionBoundary(CTextPosition, ISimpleTextBackend *, int, CTextPosition *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLanguage@CSelectionWordBreaker@@CAXPEAUITextContainer@@AEAVxstring_ptr@@@Z
    static void GetLanguage(ITextContainer *, xstring_ptr &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWordsSegmenter@CSelectionWordBreaker@@CA?AV?$ComPtr@UISelectableWordsSegmenter@Text@Data@Windows@@@WRL@Microsoft@@PEAUITextContainer@@@Z
    static WindissectOpaque GetWordsSegmenter(ITextContainer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNonSpaceDelimitedLanguage@CSelectionWordBreaker@@CA_NPEAUITextContainer@@@Z
    static bool IsNonSpaceDelimitedLanguage(ITextContainer *);
};
