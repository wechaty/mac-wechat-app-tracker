//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCFilterGroup.h"

#import "TXCCustomProcessable-Protocol.h"

@class NSObject, NSString, TXCRGB2YUVOutput, TXCYUV2RGBInput, TXSVFrame;
@protocol OS_dispatch_queue, TXIVideoPreprocessorDelegateEx;

@interface TXCCustomProcessYuvFilter : TXCFilterGroup <TXCCustomProcessable>
{
    long long _format;
    TXSVFrame *_vFrame;
    struct opaqueCMSampleBuffer *_preProcessBuffer;
    struct opaqueCMSampleBuffer *_postProcessBuffer;
    id <TXIVideoPreprocessorDelegateEx> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    TXCRGB2YUVOutput *_preProcessFilter;
    TXCYUV2RGBInput *_postProcessFilter;
    TXSVFrame *_postProcessFrame;
    struct CGSize _inputSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXSVFrame *postProcessFrame; // @synthesize postProcessFrame=_postProcessFrame;
@property(readonly, nonatomic) TXCYUV2RGBInput *postProcessFilter; // @synthesize postProcessFilter=_postProcessFilter;
@property(readonly, nonatomic) TXCRGB2YUVOutput *preProcessFilter; // @synthesize preProcessFilter=_preProcessFilter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <TXIVideoPreprocessorDelegateEx> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property(nonatomic) struct opaqueCMSampleBuffer *postProcessBuffer; // @synthesize postProcessBuffer=_postProcessBuffer;
@property(nonatomic) struct opaqueCMSampleBuffer *preProcessBuffer; // @synthesize preProcessBuffer=_preProcessBuffer;
@property(retain, nonatomic) TXSVFrame *vFrame; // @synthesize vFrame=_vFrame;
@property(readonly, nonatomic) long long format; // @synthesize format=_format;
- (void)restoreGlState;
- (void)processPostBuffer;
- (void)releaseBuffers;
- (void)callDelegate;
- (void)copyBytesToPreProcessBuffer:(const char *)arg1 size:(struct CGSize)arg2 stride:(unsigned long long)arg3;
- (void)prepareBuffersWithSize:(struct CGSize)arg1;
- (id)createPostProcessFilter;
- (id)createPreProcessFilter;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithFormat:(long long)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

