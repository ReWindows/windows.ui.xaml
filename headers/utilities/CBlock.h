#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CBlock {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBlock@@QEAA@PEAVCCoreServices@@@Z
    CBlock(CCoreServices *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementEdgeOffset@CBlock@@UEAAJPEAVCTextElement@@W4ElementEdge@@PEAI2@Z
    virtual long GetElementEdgeOffset(CTextElement *, int, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRun@CBlock@@UEAAJIPEAPEBVTextFormatting@@PEAPEBVInheritedProperties@@PEAW4TextNestingType@@PEAPEAVCTextElement@@PEAPEBGPEAI@Z
    virtual long GetRun(unsigned int, TextFormatting const * *, InheritedProperties const * *, int *, CTextElement * *, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CBlock@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CBlock@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMargin@CBlock@@AEAAIPEBVCValue@@@Z
    unsigned int ValidateMargin(CValue const *);
};
