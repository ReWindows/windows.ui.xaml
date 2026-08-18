#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class MultiQualifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@MultiQualifier@@UEAAXPEAVQualifierContext@@@Z
    virtual void Evaluate(QualifierContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flags@MultiQualifier@@UEAA?AW4QualifierFlags@@XZ
    virtual int Flags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsQualified@MultiQualifier@@UEAA_NXZ
    virtual bool IsQualified();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Score@MultiQualifier@@UEAAHW4QualifierFlags@@@Z
    virtual int Score(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MultiQualifier@@UEAA@XZ
    virtual ~MultiQualifier();
};
