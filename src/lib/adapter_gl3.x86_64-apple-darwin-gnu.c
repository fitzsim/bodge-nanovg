/* Generated by :claw at 2021-08-29T13:37:25.372943Z */

#if defined(__cplusplus)
#include <new>
#endif

#define BODGE_GL3 1

#include "src/bodge_nanovg.h"

#if !defined(__CLAW_API)
#  if defined(_WIN32)
#    define __CLAW_API __declspec(dllexport)
#  elif defined(__GNUC__)
#    define __CLAW_API __attribute__((visibility("default")))
#  else
#    define __CLAW_API
#  endif
#endif

#if defined(__cplusplus)
extern "C" {
#endif


__CLAW_API void __claw__nvgFillColor(NVGcontext* ctx, NVGcolor* color) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:251:6
nvgFillColor(ctx, *color);
}

__CLAW_API NVGcolor* __claw__nvgTransRGBA(NVGcolor* __claw_result_, NVGcolor* c0, unsigned char a) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:202:10
(*__claw_result_) = nvgTransRGBA(*c0, a);
return __claw_result_;
}

__CLAW_API NVGcolor* __claw__nvgHSL(NVGcolor* __claw_result_, float h, float s, float l) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:209:10
(*__claw_result_) = nvgHSL(h, s, l);
return __claw_result_;
}

__CLAW_API NVGpaint* __claw__nvgImagePattern(NVGpaint* __claw_result_, NVGcontext* ctx, float ox, float oy, float ex, float ey, float angle, int image, float alpha) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:420:10
(*__claw_result_) = nvgImagePattern(ctx, ox, oy, ex, ey, angle, image, alpha);
return __claw_result_;
}

__CLAW_API NVGcolor* __claw__nvgRGBf(NVGcolor* __claw_result_, float r, float g, float b) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:188:10
(*__claw_result_) = nvgRGBf(r, g, b);
return __claw_result_;
}

__CLAW_API NVGpaint* __claw__nvgRadialGradient(NVGpaint* __claw_result_, NVGcontext* ctx, float cx, float cy, float inr, float outr, NVGcolor* icol, NVGcolor* ocol) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:414:10
(*__claw_result_) = nvgRadialGradient(ctx, cx, cy, inr, outr, *icol, *ocol);
return __claw_result_;
}

__CLAW_API NVGpaint* __claw__nvgBoxGradient(NVGpaint* __claw_result_, NVGcontext* ctx, float x, float y, float w, float h, float r, float f, NVGcolor* icol, NVGcolor* ocol) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:408:10
(*__claw_result_) = nvgBoxGradient(ctx, x, y, w, h, r, f, *icol, *ocol);
return __claw_result_;
}

__CLAW_API NVGcolor* __claw__nvgLerpRGBA(NVGcolor* __claw_result_, NVGcolor* c0, NVGcolor* c1, float u) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:199:10
(*__claw_result_) = nvgLerpRGBA(*c0, *c1, u);
return __claw_result_;
}

__CLAW_API NVGcolor* __claw__nvgHSLA(NVGcolor* __claw_result_, float h, float s, float l, unsigned char a) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:213:10
(*__claw_result_) = nvgHSLA(h, s, l, a);
return __claw_result_;
}

__CLAW_API NVGcolor* __claw__nvgTransRGBAf(NVGcolor* __claw_result_, NVGcolor* c0, float a) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:205:10
(*__claw_result_) = nvgTransRGBAf(*c0, a);
return __claw_result_;
}

__CLAW_API NVGpaint* __claw__nvgLinearGradient(NVGpaint* __claw_result_, NVGcontext* ctx, float sx, float sy, float ex, float ey, NVGcolor* icol, NVGcolor* ocol) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:400:10
(*__claw_result_) = nvgLinearGradient(ctx, sx, sy, ex, ey, *icol, *ocol);
return __claw_result_;
}

__CLAW_API NVGcolor* __claw__nvgRGB(NVGcolor* __claw_result_, unsigned char r, unsigned char g, unsigned char b) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:185:10
(*__claw_result_) = nvgRGB(r, g, b);
return __claw_result_;
}

__CLAW_API void __claw__nvgStrokePaint(NVGcontext* ctx, NVGpaint* paint) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:248:6
nvgStrokePaint(ctx, *paint);
}

__CLAW_API void __claw__nvgStrokeColor(NVGcontext* ctx, NVGcolor* color) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:245:6
nvgStrokeColor(ctx, *color);
}

__CLAW_API NVGcolor* __claw__nvgRGBA(NVGcolor* __claw_result_, unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:192:10
(*__claw_result_) = nvgRGBA(r, g, b, a);
return __claw_result_;
}

__CLAW_API void __claw__nvgFillPaint(NVGcontext* ctx, NVGpaint* paint) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:254:6
nvgFillPaint(ctx, *paint);
}

__CLAW_API NVGcolor* __claw__nvgRGBAf(NVGcolor* __claw_result_, float r, float g, float b, float a) {
// /home/borodust/devel/repo/bodge-projects/bodge-nanovg/src/lib/nanovg/src/nanovg.h:195:10
(*__claw_result_) = nvgRGBAf(r, g, b, a);
return __claw_result_;
}

#if defined(__cplusplus)
}
#endif