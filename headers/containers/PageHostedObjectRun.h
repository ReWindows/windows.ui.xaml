#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class PageHostedObjectRun {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Arrange@PageHostedObjectRun@@UEAA?AW4EnumImpl@Result@RichTextServices@@AEBUXPOINTF@@@Z
    virtual int Arrange(XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBoundingBox@PageHostedObjectRun@@UEAA?AW4EnumImpl@Result@RichTextServices@@IIPEAUXRECTF_WH@@@Z
    virtual int ComputeBoundingBox(unsigned int, unsigned int, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@PageHostedObjectRun@@UEAA?AW4EnumImpl@Result@RichTextServices@@PEAVTextSource@4@MAEBUXPOINTF@@PEAUObjectRunMetrics@4@@Z
    virtual int Format(WindissectOpaque *, float, XPOINTF const &, WindissectOpaque *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasFixedSize@PageHostedObjectRun@@UEBAIXZ
    virtual unsigned int HasFixedSize() const;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedElementParent@PageHostedObjectRun@@AEAAJPEAPEAVCDependencyObject@@@Z
    long GetEmbeddedElementParent(CDependencyObject * *);
};
