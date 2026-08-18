#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class CWidenerSink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddArc@CWidenerSink@@UEAAXAEBUXPOINTF@@AEBUXSIZEF@@MII@Z
    virtual void AddArc(XPOINTF const &, XSIZEF const &, float, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBezier@CWidenerSink@@UEAAXAEBUXPOINTF@@00@Z
    virtual void AddBezier(XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBeziers@CWidenerSink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddBeziers(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLine@CWidenerSink@@UEAAXAEBUXPOINTF@@@Z
    virtual void AddLine(XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLines@CWidenerSink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddLines(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBezier@CWidenerSink@@UEAAXAEBUXPOINTF@@0@Z
    virtual void AddQuadraticBezier(XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBeziers@CWidenerSink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddQuadraticBeziers(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginFigure@CWidenerSink@@UEAAXAEBUXPOINTF@@I@Z
    virtual void BeginFigure(XPOINTF const &, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWidenerSink@@QEAA@PEBVCMILMatrix@@M@Z
    CWidenerSink(CMILMatrix const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CWidenerSink@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFigure@CWidenerSink@@UEAAXI@Z
    virtual void EndFigure(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFillMode@CWidenerSink@@UEAAXW4Value@GeometryFillMode@@@Z
    virtual void SetFillMode(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWidenerSink@@UEAA@XZ
    virtual ~CWidenerSink();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSegments@CWidenerSink@@IEAAJPEBUXPOINTF@@III@Z
    long AddSegments(XPOINTF const *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoSegment@CWidenerSink@@IEAAJPEBUXPOINTF@@I@Z
    long DoSegment(XPOINTF const *, unsigned int);
};
