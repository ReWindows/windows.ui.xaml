#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class BoundsGeometrySink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddArc@BoundsGeometrySink@@UEAAXAEBUXPOINTF@@AEBUXSIZEF@@MII@Z
    virtual void AddArc(XPOINTF const &, XSIZEF const &, float, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBezier@BoundsGeometrySink@@UEAAXAEBUXPOINTF@@00@Z
    virtual void AddBezier(XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBeziers@BoundsGeometrySink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddBeziers(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLine@BoundsGeometrySink@@UEAAXAEBUXPOINTF@@@Z
    virtual void AddLine(XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLines@BoundsGeometrySink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddLines(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBezier@BoundsGeometrySink@@UEAAXAEBUXPOINTF@@0@Z
    virtual void AddQuadraticBezier(XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBeziers@BoundsGeometrySink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddQuadraticBeziers(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginFigure@BoundsGeometrySink@@UEAAXAEBUXPOINTF@@I@Z
    virtual void BeginFigure(XPOINTF const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@BoundsGeometrySink@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFigure@BoundsGeometrySink@@UEAAXI@Z
    virtual void EndFigure(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFillMode@BoundsGeometrySink@@UEAAXW4Value@GeometryFillMode@@@Z
    virtual void SetFillMode(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BoundsGeometrySink@@UEAA@XZ
    virtual ~BoundsGeometrySink();
};
