#define NDEBUG
#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>

void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  
  assert(dst && src);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  int h,w,x1,y1,x2,y2;
  if(srcrect==NULL){
    h=src->h;
    w=src->w;
    x1=0;
    y1=0;
  }
  else {
    h=srcrect->h;
    w=srcrect->w;
    x1=srcrect->x;
    y1=srcrect->y;
  }
  if(dstrect==NULL){
    x2=0;
    y2=0;
  }
  else{
    x2=dstrect->x;
    y2=dstrect->y;
  }
  //h=200;w=320;x1=0;x2=0;y1=0;y2=0;
  int i1=y1*(dst->w);
  int i2=y2*(dst->w);
  if (src->format->BitsPerPixel == 32){
    for(int i=0;i<h;i++){
      for(int j=0;j< w;j++){
        ((uint32_t *)dst->pixels)[i2+(j+x2)]=((uint32_t *)src->pixels)[i1+(j+x1)];
      }
      i1+=dst->w;
      i2+=dst->w;
    }
  }
  else{
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        (dst->pixels)[i2+(j+x2)]=(src->pixels)[i1+(j+x1)];
      }
      i1+=dst->w;
      i2+=dst->w;
    }
  }
}

void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {
  if(dstrect==NULL){
      for(int i=0;i<(dst->h)*(dst->w);i++)
        ((uint32_t *)dst->pixels)[i]=color;
    SDL_UpdateRect(dst,0,0,dst->w,dst->h);
  }
  else{
    for(int i=0;i<(dstrect->h)*(dstrect->w);i++)
      ((uint32_t *)dst->pixels)[i]=color;
    SDL_UpdateRect(dst,dstrect->x,dstrect->y,dstrect->w,dstrect->h);
  }

}
uint32_t pixels8[400*300];
void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
  if(x==0&&y==0&&w==0&&h==0){w=s->w;h=s->h;}
  //printf("%d %d\n",w,h);
  int k=y*(s->w);
  int l=y*w;
  if(s->format->BitsPerPixel==8){
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
      //printf("%d %d %d %d %d %d\n",x,y,w,h,j,i);
      uint32_t r=(s->format->palette->colors)[s->pixels[k+j+x]].r;
      uint32_t g=(s->format->palette->colors)[s->pixels[k+j+x]].g;
      uint32_t b=(s->format->palette->colors)[s->pixels[k+j+x]].b;
      uint32_t a=(s->format->palette->colors)[s->pixels[k+j+x]].a;
      *(pixels8+l+x+j)=(a<<24)|(r<<16)|(g<<8)|b;
      }
      k+=s->w;
      l+=w;
    }
    NDL_DrawRect(pixels8,x,y,w,h);
  }
  else NDL_DrawRect((uint32_t*)s->pixels,x,y,w,h);
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
    case 0x000000ff: return 0;
    case 0x0000ff00: return 8;
    case 0x00ff0000: return 16;
    case 0xff000000: return 24;
    case 0x00000000: return 24; // hack
    default: assert(0);
  }
}

SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask; s->format->Rshift = maskToShift(Rmask); s->format->Rloss = 0;
    s->format->Gmask = Gmask; s->format->Gshift = maskToShift(Gmask); s->format->Gloss = 0;
    s->format->Bmask = Bmask; s->format->Bshift = maskToShift(Bmask); s->format->Bloss = 0;
    s->format->Amask = Amask; s->format->Ashift = maskToShift(Amask); s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth >> 3;

  s->w = width;
  s->h = height;
  s->pitch = width * depth >> 3;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
      Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s) {
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL) free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC)) free(s->pixels);
    free(s);
  }
}

SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  if (flags & SDL_HWSURFACE) NDL_OpenCanvas(&width, &height);
  return SDL_CreateRGBSurface(flags, width, height, bpp,
      DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}


void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x1 = (srcrect == NULL ? 0 : srcrect->x);
  int y1 = (srcrect == NULL ? 0 : srcrect->y);
  int w1 = (srcrect == NULL ? src->w : srcrect->w);
  int h1 = (srcrect == NULL ? src->h : srcrect->h);
  
  int x2 = (dstrect == NULL ? 0 : dstrect->x);
  int y2 = (dstrect == NULL ? 0 : dstrect->y);
  int w2 = (dstrect == NULL ? dst->w : dstrect->w);
  int h2 = (dstrect == NULL ? dst->h : dstrect->h);


  assert(dstrect);

  if(w1 == w2 && h1 == h2) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x1;
    rect.y = y1;
    rect.w = w1;
    rect.h = h1;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else if(w1 < w2 && h1 < h2){   
    assert(0);
  ////w,h缩放倍数
  //  int w = w2 / w1;
  //  int h = h2 / h1;

  ////缩小
  //  if (src->format->BitsPerPixel == 32){
  //    for(int i=0;i<h1;i+=w)
  //      for(int j=0;j<w1;j+=h){
  //        ((uint32_t *)dst->pixels)[(i+y2)*(dst->w)/w+(j+x2)/h]=((uint32_t *)src->pixels)[(i+y1)*(src->w)+(j+x1)];
  //      SDL_SoftStretch}
  //  }
  //  else{
  //    for(int i=0;i<h1;i++)
  //      for(int j=0;j<w1;j++){
  //        (dst->pixels)[(i+y2)*(dst->w)/w+(j+x2)/h]=(src->pixels)[(i+y1)*(src->w)+(j+x1)];
  //     }
  //  }

  //  //拉伸
  //  if(src->format->BitsPerPixel == 32){
  //    for(int i=0;i<h2;i++)
  //      for(int j=0;j<w2;j++){
  //        ((uint32_t *)dst->pixels)[(i+y2)*(dst->w)+(j+x2)]=((uint32_t *)src->pixels)[((int)(i/h)+y1)*(src->w)+(int)(j/w)+x1];
  //      }
  //  }
  //  else{
  //    for(int i=0;i<h2;i++){
  //      for(int j=0;j<w2;j++){
  //        (dst->pixels)[(i+y2)*(dst->w)+(j+x2)]=(src->pixels)[((int)(i/h)+y1)*(src->w)+(int)(j/w)+x1];
  //      }
  //     }
  //  }
  }
  else{
    printf("%d %d %d %d to %d %d %d %d\n",w1,h1,x1,y1,w2,h2,x2,y2);
    assert(0);
  }
}

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if(s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i ++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
    }
    SDL_UpdateRect(s, 0, 0, 0, 0);
  }  
  
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t (*pdst)[4] = dst;
  uint8_t (*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i) \
    tmp.val32 = *((uint32_t *)psrc[i]); \
    *((uint32_t *)pdst[i]) = tmp.val32; \
    pdst[i][0] = tmp.val8[2]; \
    pdst[i][2] = tmp.val8[0];

    macro(i + 0); macro(i + 1); macro(i + 2); macro(i + 3);
    macro(i + 4); macro(i + 5); macro(i + 6); macro(i + 7);
    macro(i + 8); macro(i + 9); macro(i +10); macro(i +11);
    macro(i +12); macro(i +13); macro(i +14); macro(i +15);
  }

  for (; i < len; i ++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface* ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
    fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask) p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) {
  assert(0);
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s) {
  assert(0);
}
