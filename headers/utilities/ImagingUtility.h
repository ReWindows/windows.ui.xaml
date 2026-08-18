#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class ImagingUtility {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BltBGRA@ImagingUtility@@YAJPEBUWICRect@@AEBV?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@01@Z
    long BltBGRA(WICRect const *, WindissectOpaque const &, WICRect const *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateScaledSize@ImagingUtility@@YA?AUXSIZE@@AEBUImageMetadata@@AEBVImageDecodeParams@@_N@Z
    XSIZE CalculateScaledSize(ImageMetadata const &, ImageDecodeParams const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBitmap@ImagingUtility@@YAJAEAV?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@AEBUWICRect@@I@Z
    long ClearBitmap(WindissectOpaque &, WICRect const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultColorTransform@ImagingUtility@@YAJAEBU_GUID@@AEBV?$ComPtr@UIWICBitmapFrameDecode@@@WRL@Microsoft@@AEBV?$ComPtr@UIWICBitmapSource@@@45@AEAV?$ComPtr@UIWICColorTransform@@@45@@Z
    long CreateDefaultColorTransform(_GUID const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultConverter@ImagingUtility@@YAJAEBU_GUID@@AEBV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@AEAV?$ComPtr@UIWICFormatConverter@@@45@@Z
    long CreateDefaultConverter(_GUID const &, WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultFlipRotator@ImagingUtility@@YAJW4WICBitmapTransformOptions@@AEBV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@AEAV?$ComPtr@UIWICBitmapFlipRotator@@@45@@Z
    long CreateDefaultFlipRotator(int, WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultScaler@ImagingUtility@@YAJIIAEBV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@AEAV?$ComPtr@UIWICBitmapScaler@@@34@@Z
    long CreateDefaultScaler(unsigned int, unsigned int, WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesSourceSupportAlpha@ImagingUtility@@YAJAEBV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@AEA_N@Z
    long DoesSourceSupportAlpha(WindissectOpaque const &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GifBltPBGRANoBlend@ImagingUtility@@YAJPEBUWICRect@@AEBV?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@01@Z
    long GifBltPBGRANoBlend(WICRect const *, WindissectOpaque const &, WICRect const *, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHdrSource@ImagingUtility@@YAJPEAUIWICBitmapSource@@PEA_N@Z
    long IsHdrSource(IWICBitmapSource *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizeBitmapSource@ImagingUtility@@YAJAEBUImageMetadata@@PEAUIWICBitmapSource@@AEBVImageDecodeParams@@AEAV?$xref_ptr@VOfferableSoftwareBitmap@@@@@Z
    long RealizeBitmapSource(ImageMetadata const &, IWICBitmapSource *, ImageDecodeParams const &, WindissectOpaque &);
};
