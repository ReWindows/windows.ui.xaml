#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class GeometryGroupSink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddArc@GeometryGroupSink@@UEAAXAEBUXPOINTF@@AEBUXSIZEF@@MII@Z
    virtual void AddArc(XPOINTF const &, XSIZEF const &, float, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBezier@GeometryGroupSink@@UEAAXAEBUXPOINTF@@00@Z
    virtual void AddBezier(XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBeziers@GeometryGroupSink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddBeziers(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLine@GeometryGroupSink@@UEAAXAEBUXPOINTF@@@Z
    virtual void AddLine(XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLines@GeometryGroupSink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddLines(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBezier@GeometryGroupSink@@UEAAXAEBUXPOINTF@@0@Z
    virtual void AddQuadraticBezier(XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadraticBeziers@GeometryGroupSink@@UEAAXPEBUXPOINTF@@I@Z
    virtual void AddQuadraticBeziers(XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginFigure@GeometryGroupSink@@UEAAXAEBUXPOINTF@@I@Z
    virtual void BeginFigure(XPOINTF const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@GeometryGroupSink@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFigure@GeometryGroupSink@@UEAAXI@Z
    virtual void EndFigure(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFillMode@GeometryGroupSink@@UEAAXW4Value@GeometryFillMode@@@Z
    virtual void SetFillMode(int);
};
