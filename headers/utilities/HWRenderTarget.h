#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 84 member(s).
class HWRenderTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HWRenderTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@HWRenderTarget@@UEAAXXZ
    virtual void BeginDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupRealizations@HWRenderTarget@@QEAAXXZ
    void CleanupRealizations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@HWRenderTarget@@UEAAXPEBU_D3DCOLORVALUE@@@Z
    virtual void Clear(_D3DCOLORVALUE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HWRenderTarget@@SAJPEAVCTextCore@@PEAPEAV1@@Z
    static long Create(CTextCore *, HWRenderTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmap@HWRenderTarget@@UEAAJUD2D_SIZE_U@@PEBXIPEBUD2D1_BITMAP_PROPERTIES@@PEAPEAUID2D1Bitmap@@@Z
    virtual long CreateBitmap(D2D_SIZE_U, void const *, unsigned int, D2D1_BITMAP_PROPERTIES const *, ID2D1Bitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapBrush@HWRenderTarget@@UEAAJPEAUID2D1Bitmap@@PEBUD2D1_BITMAP_BRUSH_PROPERTIES@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1BitmapBrush@@@Z
    virtual long CreateBitmapBrush(ID2D1Bitmap *, D2D1_BITMAP_BRUSH_PROPERTIES const *, D2D1_BRUSH_PROPERTIES const *, ID2D1BitmapBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapFromWicBitmap@HWRenderTarget@@UEAAJPEAUIWICBitmapSource@@PEBUD2D1_BITMAP_PROPERTIES@@PEAPEAUID2D1Bitmap@@@Z
    virtual long CreateBitmapFromWicBitmap(IWICBitmapSource *, D2D1_BITMAP_PROPERTIES const *, ID2D1Bitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompatibleRenderTarget@HWRenderTarget@@UEAAJPEBUD2D_SIZE_F@@PEBUD2D_SIZE_U@@PEBUD2D1_PIXEL_FORMAT@@W4D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS@@PEAPEAUID2D1BitmapRenderTarget@@@Z
    virtual long CreateCompatibleRenderTarget(D2D_SIZE_F const *, D2D_SIZE_U const *, D2D1_PIXEL_FORMAT const *, int, ID2D1BitmapRenderTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDCRenderTarget@HWRenderTarget@@UEAAJPEBUD2D1_RENDER_TARGET_PROPERTIES@@PEAPEAUID2D1DCRenderTarget@@@Z
    virtual long CreateDCRenderTarget(D2D1_RENDER_TARGET_PROPERTIES const *, ID2D1DCRenderTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDrawingStateBlock@HWRenderTarget@@UEAAJPEBUD2D1_DRAWING_STATE_DESCRIPTION@@PEAUIDWriteRenderingParams@@PEAPEAUID2D1DrawingStateBlock@@@Z
    virtual long CreateDrawingStateBlock(D2D1_DRAWING_STATE_DESCRIPTION const *, IDWriteRenderingParams *, ID2D1DrawingStateBlock * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDxgiSurfaceRenderTarget@HWRenderTarget@@UEAAJPEAUIDXGISurface@@PEBUD2D1_RENDER_TARGET_PROPERTIES@@PEAPEAUID2D1RenderTarget@@@Z
    virtual long CreateDxgiSurfaceRenderTarget(IDXGISurface *, D2D1_RENDER_TARGET_PROPERTIES const *, ID2D1RenderTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEllipseGeometry@HWRenderTarget@@UEAAJPEBUD2D1_ELLIPSE@@PEAPEAUID2D1EllipseGeometry@@@Z
    virtual long CreateEllipseGeometry(D2D1_ELLIPSE const *, ID2D1EllipseGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGeometryGroup@HWRenderTarget@@UEAAJW4D2D1_FILL_MODE@@PEAPEAUID2D1Geometry@@IPEAPEAUID2D1GeometryGroup@@@Z
    virtual long CreateGeometryGroup(int, ID2D1Geometry * *, unsigned int, ID2D1GeometryGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGradientStopCollection@HWRenderTarget@@UEAAJPEBUD2D1_GRADIENT_STOP@@IW4D2D1_GAMMA@@W4D2D1_EXTEND_MODE@@PEAPEAUID2D1GradientStopCollection@@@Z
    virtual long CreateGradientStopCollection(D2D1_GRADIENT_STOP const *, unsigned int, int, int, ID2D1GradientStopCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHwndRenderTarget@HWRenderTarget@@UEAAJPEBUD2D1_RENDER_TARGET_PROPERTIES@@PEBUD2D1_HWND_RENDER_TARGET_PROPERTIES@@PEAPEAUID2D1HwndRenderTarget@@@Z
    virtual long CreateHwndRenderTarget(D2D1_RENDER_TARGET_PROPERTIES const *, D2D1_HWND_RENDER_TARGET_PROPERTIES const *, ID2D1HwndRenderTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLayer@HWRenderTarget@@UEAAJPEBUD2D_SIZE_F@@PEAPEAUID2D1Layer@@@Z
    virtual long CreateLayer(D2D_SIZE_F const *, ID2D1Layer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLinearGradientBrush@HWRenderTarget@@UEAAJPEBUD2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES@@PEBUD2D1_BRUSH_PROPERTIES@@PEAUID2D1GradientStopCollection@@PEAPEAUID2D1LinearGradientBrush@@@Z
    virtual long CreateLinearGradientBrush(D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES const *, D2D1_BRUSH_PROPERTIES const *, ID2D1GradientStopCollection *, ID2D1LinearGradientBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMesh@HWRenderTarget@@UEAAJPEAPEAUID2D1Mesh@@@Z
    virtual long CreateMesh(ID2D1Mesh * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePathGeometry@HWRenderTarget@@UEAAJPEAPEAUID2D1PathGeometry@@@Z
    virtual long CreatePathGeometry(ID2D1PathGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRadialGradientBrush@HWRenderTarget@@UEAAJPEBUD2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES@@PEBUD2D1_BRUSH_PROPERTIES@@PEAUID2D1GradientStopCollection@@PEAPEAUID2D1RadialGradientBrush@@@Z
    virtual long CreateRadialGradientBrush(D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES const *, D2D1_BRUSH_PROPERTIES const *, ID2D1GradientStopCollection *, ID2D1RadialGradientBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRectangleGeometry@HWRenderTarget@@UEAAJPEBUD2D_RECT_F@@PEAPEAUID2D1RectangleGeometry@@@Z
    virtual long CreateRectangleGeometry(D2D_RECT_F const *, ID2D1RectangleGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRoundedRectangleGeometry@HWRenderTarget@@UEAAJPEBUD2D1_ROUNDED_RECT@@PEAPEAUID2D1RoundedRectangleGeometry@@@Z
    virtual long CreateRoundedRectangleGeometry(D2D1_ROUNDED_RECT const *, ID2D1RoundedRectangleGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedBitmap@HWRenderTarget@@UEAAJAEBU_GUID@@PEAXPEBUD2D1_BITMAP_PROPERTIES@@PEAPEAUID2D1Bitmap@@@Z
    virtual long CreateSharedBitmap(_GUID const &, void *, D2D1_BITMAP_PROPERTIES const *, ID2D1Bitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSolidColorBrush@HWRenderTarget@@UEAAJPEBU_D3DCOLORVALUE@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1SolidColorBrush@@@Z
    virtual long CreateSolidColorBrush(_D3DCOLORVALUE const *, D2D1_BRUSH_PROPERTIES const *, ID2D1SolidColorBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStrokeStyle@HWRenderTarget@@UEAAJPEBUD2D1_STROKE_STYLE_PROPERTIES@@PEBMIPEAPEAUID2D1StrokeStyle@@@Z
    virtual long CreateStrokeStyle(D2D1_STROKE_STYLE_PROPERTIES const *, float const *, unsigned int, ID2D1StrokeStyle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformedGeometry@HWRenderTarget@@UEAAJPEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@PEAPEAUID2D1TransformedGeometry@@@Z
    virtual long CreateTransformedGeometry(ID2D1Geometry *, D2D_MATRIX_3X2_F const *, ID2D1TransformedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWicBitmapRenderTarget@HWRenderTarget@@UEAAJPEAUIWICBitmap@@PEBUD2D1_RENDER_TARGET_PROPERTIES@@PEAPEAUID2D1RenderTarget@@@Z
    virtual long CreateWicBitmapRenderTarget(IWICBitmap *, D2D1_RENDER_TARGET_PROPERTIES const *, ID2D1RenderTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBitmap@HWRenderTarget@@UEAAXPEAUID2D1Bitmap@@PEBUD2D_RECT_F@@MW4D2D1_BITMAP_INTERPOLATION_MODE@@1@Z
    virtual void DrawBitmap(ID2D1Bitmap *, D2D_RECT_F const *, float, int, D2D_RECT_F const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawEllipse@HWRenderTarget@@UEAAXPEBUD2D1_ELLIPSE@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle@@@Z
    virtual void DrawEllipse(D2D1_ELLIPSE const *, ID2D1Brush *, float, ID2D1StrokeStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGeometry@HWRenderTarget@@UEAAXPEAUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle@@@Z
    virtual void DrawGeometry(ID2D1Geometry *, ID2D1Brush *, float, ID2D1StrokeStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGlyphRun@HWRenderTarget@@UEAAXUD2D_POINT_2F@@PEBUDWRITE_GLYPH_RUN@@PEAUID2D1Brush@@W4DWRITE_MEASURING_MODE@@@Z
    virtual void DrawGlyphRun(D2D_POINT_2F, DWRITE_GLYPH_RUN const *, ID2D1Brush *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawLine@HWRenderTarget@@UEAAXUD2D_POINT_2F@@0PEAUID2D1Brush@@MPEAUID2D1StrokeStyle@@@Z
    virtual void DrawLine(D2D_POINT_2F, D2D_POINT_2F, ID2D1Brush *, float, ID2D1StrokeStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRectangle@HWRenderTarget@@UEAAXPEBUD2D_RECT_F@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle@@@Z
    virtual void DrawRectangle(D2D_RECT_F const *, ID2D1Brush *, float, ID2D1StrokeStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRoundedRectangle@HWRenderTarget@@UEAAXPEBUD2D1_ROUNDED_RECT@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle@@@Z
    virtual void DrawRoundedRectangle(D2D1_ROUNDED_RECT const *, ID2D1Brush *, float, ID2D1StrokeStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawTextLayout@HWRenderTarget@@UEAAXUD2D_POINT_2F@@PEAUIDWriteTextLayout@@PEAUID2D1Brush@@W4D2D1_DRAW_TEXT_OPTIONS@@@Z
    virtual void DrawTextLayout(D2D_POINT_2F, IDWriteTextLayout *, ID2D1Brush *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawTextW@HWRenderTarget@@UEAAXPEBGIPEAUIDWriteTextFormat@@PEBUD2D_RECT_F@@PEAUID2D1Brush@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z
    virtual void DrawTextW(unsigned short const *, unsigned int, IDWriteTextFormat *, D2D_RECT_F const *, ID2D1Brush *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawUnderline@HWRenderTarget@@UEAA_NEKPEBUtagRECT@@@Z
    virtual bool DrawUnderline(unsigned char, unsigned long, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@HWRenderTarget@@UEAAJPEA_K0@Z
    virtual long EndDraw(uint64_t *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillEllipse@HWRenderTarget@@UEAAXPEBUD2D1_ELLIPSE@@PEAUID2D1Brush@@@Z
    virtual void FillEllipse(D2D1_ELLIPSE const *, ID2D1Brush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillGeometry@HWRenderTarget@@UEAAXPEAUID2D1Geometry@@PEAUID2D1Brush@@1@Z
    virtual void FillGeometry(ID2D1Geometry *, ID2D1Brush *, ID2D1Brush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillMesh@HWRenderTarget@@UEAAXPEAUID2D1Mesh@@PEAUID2D1Brush@@@Z
    virtual void FillMesh(ID2D1Mesh *, ID2D1Brush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillOpacityMask@HWRenderTarget@@UEAAXPEAUID2D1Bitmap@@PEAUID2D1Brush@@W4D2D1_OPACITY_MASK_CONTENT@@PEBUD2D_RECT_F@@3@Z
    virtual void FillOpacityMask(ID2D1Bitmap *, ID2D1Brush *, int, D2D_RECT_F const *, D2D_RECT_F const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRectangle@HWRenderTarget@@UEAAXPEBUD2D_RECT_F@@PEAUID2D1Brush@@@Z
    virtual void FillRectangle(D2D_RECT_F const *, ID2D1Brush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRoundedRectangle@HWRenderTarget@@UEAAXPEBUD2D1_ROUNDED_RECT@@PEAUID2D1Brush@@@Z
    virtual void FillRoundedRectangle(D2D1_ROUNDED_RECT const *, ID2D1Brush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@HWRenderTarget@@UEAAJPEA_K0@Z
    virtual long Flush(uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAntialiasMode@HWRenderTarget@@UEBA?AW4D2D1_ANTIALIAS_MODE@@XZ
    virtual int GetAntialiasMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopDpi@HWRenderTarget@@UEAAXPEAM0@Z
    virtual void GetDesktopDpi(float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDpi@HWRenderTarget@@UEBAXPEAM0@Z
    virtual void GetDpi(float *, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFactory@HWRenderTarget@@UEBAXPEAPEAUID2D1Factory@@@Z
    virtual void GetFactory(ID2D1Factory * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumBitmapSize@HWRenderTarget@@UEBAIXZ
    virtual unsigned int GetMaximumBitmapSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@HWRenderTarget@@UEBA?AUD2D1_PIXEL_FORMAT@@XZ
    virtual D2D1_PIXEL_FORMAT GetPixelFormat() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelSize@HWRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetPixelSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@HWRenderTarget@@UEBA?AUD2D_SIZE_F@@XZ
    virtual D2D_SIZE_F GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTags@HWRenderTarget@@UEBAXPEA_K0@Z
    virtual void GetTags(uint64_t *, uint64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAntialiasMode@HWRenderTarget@@UEBA?AW4D2D1_TEXT_ANTIALIAS_MODE@@XZ
    virtual int GetTextAntialiasMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextRenderingParams@HWRenderTarget@@UEBAXPEAPEAUIDWriteRenderingParams@@@Z
    virtual void GetTextRenderingParams(IDWriteRenderingParams * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@HWRenderTarget@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z
    virtual void GetTransform(D2D_MATRIX_3X2_F *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateRegion@HWRenderTarget@@QEAAXAEBUXRECT_RB@@@Z
    void InvalidateRegion(XRECT_RB const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@HWRenderTarget@@UEBAHPEBUD2D1_RENDER_TARGET_PROPERTIES@@@Z
    virtual int IsSupported(D2D1_RENDER_TARGET_PROPERTIES const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopAxisAlignedClip@HWRenderTarget@@UEAAXXZ
    virtual void PopAxisAlignedClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopLayer@HWRenderTarget@@UEAAXXZ
    virtual void PopLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushAxisAlignedClip@HWRenderTarget@@UEAAXPEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z
    virtual void PushAxisAlignedClip(D2D_RECT_F const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushLayer@HWRenderTarget@@UEAAXPEBUD2D1_LAYER_PARAMETERS@@PEAUID2D1Layer@@@Z
    virtual void PushLayer(D2D1_LAYER_PARAMETERS const *, ID2D1Layer *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HWRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HWRenderTarget@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadSystemMetrics@HWRenderTarget@@UEAAJXZ
    virtual long ReloadSystemMetrics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreDrawingState@HWRenderTarget@@UEAAXPEAUID2D1DrawingStateBlock@@@Z
    virtual void RestoreDrawingState(ID2D1DrawingStateBlock *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveDrawingState@HWRenderTarget@@UEBAXPEAUID2D1DrawingStateBlock@@@Z
    virtual void SaveDrawingState(ID2D1DrawingStateBlock *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAntialiasMode@HWRenderTarget@@UEAAXW4D2D1_ANTIALIAS_MODE@@@Z
    virtual void SetAntialiasMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackPlateConfiguration@HWRenderTarget@@QEAAX_N0@Z
    void SetBackPlateConfiguration(bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDpi@HWRenderTarget@@UEAAXMM@Z
    virtual void SetDpi(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTags@HWRenderTarget@@UEAAX_K0@Z
    virtual void SetTags(uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextAntialiasMode@HWRenderTarget@@UEAAXW4D2D1_TEXT_ANTIALIAS_MODE@@@Z
    virtual void SetTextAntialiasMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextRenderingParams@HWRenderTarget@@UEAAXPEAUIDWriteRenderingParams@@@Z
    virtual void SetTextRenderingParams(IDWriteRenderingParams *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@HWRenderTarget@@UEAAXPEBUD2D_MATRIX_3X2_F@@@Z
    virtual void SetTransform(D2D_MATRIX_3X2_F const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentClipRect@HWRenderTarget@@AEBAIPEAUXRECTF_RB@@@Z
    unsigned int GetCurrentClipRect(XRECTF_RB *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWRenderTarget@@AEAA@XZ
    ~HWRenderTarget();
};
