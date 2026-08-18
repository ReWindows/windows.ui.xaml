#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class ContainerNode {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaselineAlignmentOffset@ContainerNode@@UEBAMXZ
    virtual float GetBaselineAlignmentOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildOffset@ContainerNode@@QEAA?AUXPOINTF@@PEAVBlockNode@@@Z
    XPOINTF GetChildOffset(BlockNode *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstChild@ContainerNode@@UEBAPEAVBlockNode@@XZ
    virtual BlockNode * GetFirstChild() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBounds@ContainerNode@@UEAAJIIPEAV?$xvector@UTextBounds@RichTextServices@@@@@Z
    virtual long GetTextBounds(unsigned int, unsigned int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAtInsertionPosition@ContainerNode@@UEAAJIPEAI@Z
    virtual long IsAtInsertionPosition(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PixelPositionToTextPosition@ContainerNode@@UEAAJAEBUXPOINTF@@PEAIPEAW4TextGravity@@@Z
    virtual long PixelPositionToTextPosition(XPOINTF const &, unsigned int *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContainerNode@@UEAA@XZ
    virtual ~ContainerNode();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeCore@ContainerNode@@MEAAJUXSIZEF@@@Z
    virtual long ArrangeCore(XSIZEF);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearChildren@ContainerNode@@IEAAXPEAVBlockNode@@@Z
    void ClearChildren(BlockNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawCore@ContainerNode@@MEAAJI@Z
    virtual long DrawCore(unsigned int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildContainingPosition@ContainerNode@@AEBAJIPEAPEAVBlockNode@@PEAIPEAUXPOINTF@@@Z
    long GetChildContainingPosition(unsigned int, BlockNode * *, unsigned int *, XPOINTF *) const;
};
