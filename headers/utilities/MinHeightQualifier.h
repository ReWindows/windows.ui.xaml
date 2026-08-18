#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class MinHeightQualifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@MinHeightQualifier@@UEAAXPEAVQualifierContext@@@Z
    virtual void Evaluate(QualifierContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flags@MinHeightQualifier@@UEAA?AW4QualifierFlags@@XZ
    virtual int Flags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsQualified@MinHeightQualifier@@UEAA_NXZ
    virtual bool IsQualified();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Score@MinHeightQualifier@@UEAAHW4QualifierFlags@@@Z
    virtual int Score(int);
};
