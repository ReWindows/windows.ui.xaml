#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class LayoutView {
public:
    class TextSegment;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingBox@LayoutView@@UEAAJAEAURect@Foundation@Windows@@@Z
    virtual long GetBoundingBox(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@LayoutView@@QEAAJPEAVTextBoxInkingHost@@AEBURect@Foundation@Windows@@@Z
    long Initialize(TextBoxInkingHost *, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LayoutView@@UEAA@XZ
    virtual ~LayoutView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CharToSegmentType@LayoutView@@AEBA?AW4SegmentType@InkingExperiences@@GAEA_N@Z
    int CharToSegmentType(unsigned short, bool &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateSegment@LayoutView@@AEAAJAEBURect@Foundation@Windows@@W4SegmentType@InkingExperiences@@PEAUITextRange2@@@Z
    long GenerateSegment(WindissectOpaque const &, int, ITextRange2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SegmentDocument@LayoutView@@AEAAJPEAVTextBoxInkingHost@@AEBURect@Foundation@Windows@@PEAUITextRange2@@@Z
    long SegmentDocument(TextBoxInkingHost *, WindissectOpaque const &, ITextRange2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldIncludeSegment@LayoutView@@AEAA_NW4SegmentType@InkingExperiences@@AEBURect@Foundation@Windows@@1PEBG@Z
    bool ShouldIncludeSegment(int, WindissectOpaque const &, WindissectOpaque const &, unsigned short const *);
};
