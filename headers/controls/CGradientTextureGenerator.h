#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CGradientTextureGenerator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTextureSize@CGradientTextureGenerator@@SAXPEBUXPOINTF@@00PEBVCMILMatrix@@HW4XcpGradientWrapMode@@PEAI@Z
    static void CalculateTextureSize(XPOINTF const *, XPOINTF const *, XPOINTF const *, CMILMatrix const *, int, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTextureStartAndEndPoints@CGradientTextureGenerator@@SAXIW4XcpGradientWrapMode@@HPEAI1@Z
    static void CalculateTextureStartAndEndPoints(unsigned int, int, int, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateGradientTexture@CGradientTextureGenerator@@SAJPEAVCGradientStopCollection@@HW4XcpGradientWrapMode@@W4XcpColorInterpolationMode@@IPEAUAGRB64TEXEL@@3@Z
    static long GenerateGradientTexture(CGradientStopCollection *, int, int, int, unsigned int, AGRB64TEXEL *, AGRB64TEXEL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateGradientTexture@CGradientTextureGenerator@@SAJPEAVCGradientStopCollection@@HW4XcpGradientWrapMode@@W4XcpColorInterpolationMode@@IPEAUAGRB64TEXEL@@@Z
    static long GenerateGradientTexture(CGradientStopCollection *, int, int, int, unsigned int, AGRB64TEXEL *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWeightedStopPairContribution@CGradientTextureGenerator@@CAXPEBUXcpGradientStop@@0MMMPEAUXCOLORF@@@Z
    static void AddWeightedStopPairContribution(XcpGradientStop const *, XcpGradientStop const *, float, float, float, XCOLORF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWellFormedGradientArray@CGradientTextureGenerator@@CAJPEAIPEAUXcpGradientStop@@W4XcpColorInterpolationMode@@PEAUXCOLORF@@3@Z
    static long CreateWellFormedGradientArray(unsigned int *, XcpGradientStop *, int, XCOLORF *, XCOLORF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillGradientSpan@CGradientTextureGenerator@@CAJIPEAUXcpGradientStop@@W4XcpColorInterpolationMode@@IPEAUAGRB64TEXEL@@@Z
    static long FillGradientSpan(unsigned int, XcpGradientStop *, int, unsigned int, AGRB64TEXEL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterpolateColors@CGradientTextureGenerator@@CAXPEBUXCOLORF@@0MMMPEAU2@@Z
    static void InterpolateColors(XCOLORF const *, XCOLORF const *, float, float, float, XCOLORF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPositionLessThan@CGradientTextureGenerator@@CAHMM@Z
    static int IsPositionLessThan(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPositionLessThanOrEqual@CGradientTextureGenerator@@CAHMM@Z
    static int IsPositionLessThanOrEqual(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareStopsForInterpolation@CGradientTextureGenerator@@CAJIPEAUXcpGradientStop@@W4XcpColorInterpolationMode@@@Z
    static long PrepareStopsForInterpolation(unsigned int, XcpGradientStop *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFirstStop@CGradientTextureGenerator@@CAJPEAIPEAUXcpGradientStop@@0PEAUXCOLORF@@@Z
    static long SetFirstStop(unsigned int *, XcpGradientStop *, unsigned int *, XCOLORF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastStop@CGradientTextureGenerator@@CAJIPEAUXcpGradientStop@@IIPEAUXCOLORF@@@Z
    static long SetLastStop(unsigned int, XcpGradientStop *, unsigned int, unsigned int, XCOLORF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputTexel@CGradientTextureGenerator@@CAXPEBUXCOLORF@@W4XcpColorInterpolationMode@@PEAUAGRB64TEXEL@@@Z
    static void SetOutputTexel(XCOLORF const *, int, AGRB64TEXEL *);
};
