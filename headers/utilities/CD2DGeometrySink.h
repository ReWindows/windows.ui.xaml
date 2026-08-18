#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class CD2DGeometrySink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddArc@CD2DGeometrySink@@UEAAXAEBUXPOINTF@@AEBUXSIZEF@@MII@Z
    virtual void AddArc(XPOINTF const &, XSIZEF const &, float, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBezier@CD2DGeometrySink@@UEAAXAEBUXPOINTF@@00@Z
    virtual void AddBezier(XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBeziers@CD2DGeometrySink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddBeziers(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLine@CD2DGeometrySink@@UEAAXAEBUXPOINTF@@@Z
    virtual void AddLine(XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLines@CD2DGeometrySink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddLines(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBezier@CD2DGeometrySink@@UEAAXAEBUXPOINTF@@0@Z
    virtual void AddQuadraticBezier(XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBeziers@CD2DGeometrySink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddQuadraticBeziers(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginFigure@CD2DGeometrySink@@UEAAXAEBUXPOINTF@@I@Z
    virtual void BeginFigure(XPOINTF const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CD2DGeometrySink@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFigure@CD2DGeometrySink@@UEAAXI@Z
    virtual void EndFigure(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFillMode@CD2DGeometrySink@@UEAAXW4Value@GeometryFillMode@@@Z
    virtual void SetFillMode(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DGeometrySink@@CAJPEAUID2D1GeometrySink@@PEAPEAUIPALGeometrySink@@@Z
    static long Create(ID2D1GeometrySink *, IPALGeometrySink * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD2DGeometrySink@@EEAA@XZ
    virtual ~CD2DGeometrySink();
};
