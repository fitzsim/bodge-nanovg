(claw:c-include "bodge_nanovg.h" :bodge-nanovg
  :in-package :%nanovg
  :sysincludes (:nanovg-lib)
  :include-sources ("nanovg.h" "nanovg_gl.h")
  :rename-symbols (claw:in-pipeline
                   (claw:by-changing "GLuint" 'gl-uint)
                   (claw:by-changing"GLuint64" 'gl-uint64)
                   (claw:by-changing "nvgRGBf" 'rgb-f)
                   (claw:by-changing "nvgRGBAf" 'rgba-f)
                   (claw:by-removing-prefixes "nvgl_" "NVGL_"
                                              "nvgl" "NVGL"
                                              "nvg_" "NVG_"
                                              "nvg" "NVG")))
