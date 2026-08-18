#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 25 member(s).
class CGeometryBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddArc@CGeometryBuilder@@QEAAJHPEAUXPOINTF@@MHHPEBVCMILMatrix@@@Z
    long AddArc(int, XPOINTF *, float, int, int, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBezier@CGeometryBuilder@@QEAAJHPEAUXPOINTF@@@Z
    long AddBezier(int, XPOINTF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLine@CGeometryBuilder@@QEAAJHPEAUXPOINTF@@@Z
    long AddLine(int, XPOINTF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPoints@CGeometryBuilder@@SAJPEAUIPALAcceleratedPathGeometry@@PEAUXPOINTF@@IPEAEW4XcpFillMode@@@Z
    static long AddPoints(IPALAcceleratedPathGeometry *, XPOINTF *, unsigned int, unsigned char *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuadratic@CGeometryBuilder@@QEAAJHPEAUXPOINTF@@@Z
    long AddQuadratic(int, XPOINTF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSegments@CGeometryBuilder@@QEAAJW4PathPointType@@IPEBUXPOINTF@@@Z
    long AddSegments(int, unsigned int, XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateRoundedCornersRectangle@CGeometryBuilder@@SAXPEAUXPOINTF@@AEBUXRECTF_WH@@AEBUXRECTF_CR@@PEBUXRECTF_RB@@I@Z
    static void CalculateRoundedCornersRectangle(XPOINTF *, XRECTF_WH const &, XRECTF_CR const &, XRECTF_RB const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseFigure@CGeometryBuilder@@QEAAJXZ
    long CloseFigure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseGeometry@CGeometryBuilder@@QEAAJPEAVCRasterizerPath@@@Z
    long CloseGeometry(CRasterizerPath *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClosePathGeometryBuilder@CGeometryBuilder@@QEAAJPEAVCPathGeometry@@@Z
    long ClosePathGeometryBuilder(CPathGeometry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeReflection@CGeometryBuilder@@QEAAJHW4PathPointType@@PEAUXPOINTF@@@Z
    long ComputeReflection(int, int, XPOINTF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawEllipse@CGeometryBuilder@@SAJPEAPEAVCRasterizerPath@@AEBUXPOINTF@@AEBM2@Z
    static long DrawEllipse(CRasterizerPath * *, XPOINTF const &, float const &, float const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawLines@CGeometryBuilder@@SAJPEAPEAVCRasterizerPath@@IPEBUXPOINTF@@I@Z
    static long DrawLines(CRasterizerPath * *, unsigned int, XPOINTF const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRectangle@CGeometryBuilder@@SAJPEAPEAVCRasterizerPath@@AEBUXRECTF_WH@@AEBM2@Z
    static long DrawRectangle(CRasterizerPath * *, XRECTF_WH const &, float const &, float const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRoundedCornersRectangle@CGeometryBuilder@@SAJPEAPEAVCRasterizerPath@@AEBUXRECTF_WH@@AEBUXRECTF_CR@@PEBUXRECTF_RB@@I@Z
    static long DrawRoundedCornersRectangle(CRasterizerPath * *, XRECTF_WH const &, XRECTF_CR const &, XRECTF_RB const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRoundedCornersRectangle@CGeometryBuilder@@SAJPEAUIPALGeometrySink@@AEBUXRECTF_WH@@AEBUXRECTF_CR@@PEBUXRECTF_RB@@I@Z
    static long DrawRoundedCornersRectangle(IPALGeometrySink *, XRECTF_WH const &, XRECTF_CR const &, XRECTF_RB const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRoundedCornersRectangle@CGeometryBuilder@@SAJPEAPEAUIPALAcceleratedGeometry@@PEAUIPALAcceleratedGraphicsFactory@@AEBUXRECTF_WH@@AEBUXRECTF_CR@@PEBUXRECTF_RB@@I@Z
    static long DrawRoundedCornersRectangle(IPALAcceleratedGeometry * *, IPALAcceleratedGraphicsFactory *, XRECTF_WH const &, XRECTF_CR const &, XRECTF_RB const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFigure@CGeometryBuilder@@QEAAJHPEAUXPOINTF@@@Z
    long OpenFigure(int, XPOINTF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenGeometry@CGeometryBuilder@@QEAAJXZ
    long OpenGeometry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenPathGeometryBuilder@CGeometryBuilder@@QEAAJXZ
    long OpenPathGeometryBuilder();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGeometryBuilder@@QEAA@XZ
    ~CGeometryBuilder();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRasterizerPath@CGeometryBuilder@@KAJPEAPEAVCRasterizerPath@@I@Z
    static long EnsureRasterizerPath(CRasterizerPath * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeAbsolute@CGeometryBuilder@@IEAAXHIPEAUXPOINTF@@@Z
    void MakeAbsolute(int, unsigned int, XPOINTF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StorePoints@CGeometryBuilder@@IEAAJW4PathPointType@@I@Z
    long StorePoints(int, unsigned int);
};
