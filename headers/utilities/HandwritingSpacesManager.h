#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class HandwritingSpacesManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHandwritingSpaces@HandwritingSpacesManager@@QEAAXXZ
    void ClearHandwritingSpaces();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachHandwritingSpacesInRange@HandwritingSpacesManager@@QEAAXPEAUITextRange2@@@Z
    void DetachHandwritingSpacesInRange(ITextRange2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExcludeLeadingAndTrailingSpaceMarkersFromRange@HandwritingSpacesManager@@QEBA_NPEAUITextRange2@@@Z
    bool ExcludeLeadingAndTrailingSpaceMarkersFromRange(ITextRange2*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExcludeLeadingSpaceMarkersFromRange@HandwritingSpacesManager@@QEBA_NPEAUITextRange2@@@Z
    bool ExcludeLeadingSpaceMarkersFromRange(ITextRange2*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExcludeTrailingSpaceMarkersFromRange@HandwritingSpacesManager@@QEBA_NPEAUITextRange2@@@Z
    bool ExcludeTrailingSpaceMarkersFromRange(ITextRange2*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterHandwritingSpaces@HandwritingSpacesManager@@QEBAXPEAG@Z
    void FilterHandwritingSpaces(unsigned short *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HandwritingSpacesManager@@QEAA@PEAVTextBoxInkingHost@@@Z
    HandwritingSpacesManager(TextBoxInkingHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertHandwritingSpace@HandwritingSpacesManager@@QEAAXPEAUITextRange2@@@Z
    void InsertHandwritingSpace(ITextRange2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDegenerateRangeAfterHandwritingSpace@HandwritingSpacesManager@@QEBA_NPEAUITextRange2@@@Z
    bool IsDegenerateRangeAfterHandwritingSpace(ITextRange2*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDegenerateRangeBeforeHandwritingSpace@HandwritingSpacesManager@@QEBA_NPEAUITextRange2@@@Z
    bool IsDegenerateRangeBeforeHandwritingSpace(ITextRange2*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveDegenerateRangeAfterHandwritingSpaces@HandwritingSpacesManager@@QEBA_NPEAUITextRange2@@@Z
    bool MoveDegenerateRangeAfterHandwritingSpaces(ITextRange2*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveDegenerateRangeBeforeHandwritingSpaces@HandwritingSpacesManager@@QEBA_NPEAUITextRange2@@@Z
    bool MoveDegenerateRangeBeforeHandwritingSpaces(ITextRange2*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SanitizeRangeForHandwritingSpaces@HandwritingSpacesManager@@QEBA_NPEAUITextRange2@@@Z
    bool SanitizeRangeForHandwritingSpaces(ITextRange2*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapDegenerateRangeToHandwritingSpace@HandwritingSpacesManager@@QEBA_NPEAUITextRange2@@W4AnchorPoint@@@Z
    bool SnapDegenerateRangeToHandwritingSpace(ITextRange2*, int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HandwritingSpacesManager@@QEAA@XZ
    ~HandwritingSpacesManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteHandwritingSpace@HandwritingSpacesManager@@AEBAXAEAUHandwritingSpace@1@@Z
    void DeleteHandwritingSpace(WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixupHandwritingSpace@HandwritingSpacesManager@@AEBAXAEAUHandwritingSpace@1@@Z
    void FixupHandwritingSpace(WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyHandwritingSpace@HandwritingSpacesManager@@AEBAXAEBUHandwritingSpace@1@@Z
    void VerifyHandwritingSpace(WindissectOpaque const &) const;
};
