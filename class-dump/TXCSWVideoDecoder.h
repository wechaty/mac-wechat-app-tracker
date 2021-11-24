//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXIVideoDecoder.h"

@interface TXCSWVideoDecoder : TXIVideoDecoder
{
    struct FFH264Decoder _ff264Decoder;
    int _def_InputType_YUVJ420;
    struct CFF264DecoderListenerAdpt _ff264DecListenerAdpt;
    unsigned long long _frameIndex;
    BOOL _rpsOpen;
    unsigned int _decodeFailCount;
    unsigned long long _lastDecodeFailReportTime;
    struct __CVPixelBufferPool *_pixelBufferPool;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct __CVBuffer *)createPixelBufferWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormatType:(unsigned int)arg3;
- (void)callDecodeError:(unsigned long long)arg1 FrameIndex:(unsigned long long)arg2;
- (void)callDecodeResult:(struct tagDecInfoParam *)arg1 Length:(int)arg2;
- (void)clearData:(id)arg1;
- (void)releaseDecoder:(BOOL)arg1;
- (long long)pushNal:(id)arg1;
- (long long)stop;
- (long long)start:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

