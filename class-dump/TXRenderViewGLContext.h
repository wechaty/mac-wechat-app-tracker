//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOpenGLContext;

@interface TXRenderViewGLContext : NSObject
{
    NSOpenGLContext *_context;
    unsigned int program;
    unsigned int textures[3];
    struct {
        unsigned int y;
        unsigned int u;
        unsigned int v;
    } textureUniforms;
    unsigned int positionAttri;
    unsigned int coordAttri;
    unsigned int matrixUniform;
    unsigned int formatUniform;
}

- (void).cxx_destruct;
@property(readonly) __weak NSOpenGLContext *glContext; // @synthesize glContext=_context;
- (void)destroy;
- (void)renderWithViewportSize:(struct CGSize)arg1 format:(long long)arg2 vertices:(float [8])arg3 textureCoords:(float [8])arg4;
- (void)setupRGBATexture:(unsigned int)arg1;
- (void)setupTextureWithY:(const char *)arg1 U:(const char *)arg2 V:(const char *)arg3 format:(long long)arg4 bufferSizes:(const int *)arg5 imageSize:(struct CGSize)arg6;
- (void)_compileShader;
- (void)_setupTexture;
- (void)setup;
- (id)initWithContext:(id)arg1;

@end

