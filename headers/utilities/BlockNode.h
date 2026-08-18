#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class BlockNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Arrange@BlockNode@@QEAAJUXSIZEF@@@Z
    long Arrange(XSIZEF);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BlockNode@@QEAA@PEAVBlockLayoutEngine@@PEAVCDependencyObject@@PEAVContainerNode@@@Z
    BlockNode(BlockLayoutEngine *, CDependencyObject *, ContainerNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupRealizations@BlockNode@@QEAAXXZ
    void CleanupRealizations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@BlockNode@@QEAAJI@Z
    long Draw(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentRenderingOffset@BlockNode@@UEBA?AUXPOINTF@@XZ
    virtual XPOINTF GetContentRenderingOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstChild@BlockNode@@UEBAPEAV1@XZ
    virtual BlockNode * GetFirstChild() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlowDirection@BlockNode@@QEBA?AW4Enum@FlowDirection@RichTextServices@@XZ
    int GetFlowDirection() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateArrange@BlockNode@@QEAAXXZ
    void InvalidateArrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateContent@BlockNode@@QEAAXXZ
    void InvalidateContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateMeasure@BlockNode@@QEAAXXZ
    void InvalidateMeasure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Measure@BlockNode@@QEAAJUXSIZEF@@IMIIIPEAVBlockNodeBreak@@PEAM@Z
    long Measure(XSIZEF, unsigned int, float, unsigned int, unsigned int, unsigned int, BlockNodeBreak *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformOffsetToRoot@BlockNode@@QEAAJAEBUXPOINTF@@PEAU2@@Z
    long TransformOffsetToRoot(XPOINTF const &, XPOINTF *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BlockNode@@UEAA@XZ
    virtual ~BlockNode();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBypassMeasure@BlockNode@@MEAAJUXSIZEF@@IIIPEAVBlockNodeBreak@@PEAI@Z
    virtual long CanBypassMeasure(XSIZEF, unsigned int, unsigned int, unsigned int, BlockNodeBreak *, unsigned int *);
};
