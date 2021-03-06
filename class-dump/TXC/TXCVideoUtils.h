//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXCVideoUtils : NSObject
{
}

+ (void)copyPixelBuffer:(struct __CVBuffer *)arg1 atPlane:(long long)arg2 toData:(char *)arg3 dataWidth:(long long)arg4;
+ (void)copyPixelBuffer:(struct __CVBuffer *)arg1 toSamePixelBuffer:(struct __CVBuffer *)arg2;
+ (void)copyi420Buffer:(struct __CVBuffer *)arg1 toNv12Buffer:(struct __CVBuffer *)arg2;
+ (void)copyBgraBuffer:(struct __CVBuffer *)arg1 toNv12Buffer:(struct __CVBuffer *)arg2;
+ (void)copyNv12Buffer:(struct __CVBuffer *)arg1 ToBgraBuffer:(struct __CVBuffer *)arg2;
+ (long long)formatOfPixelBuffer:(struct __CVBuffer *)arg1;
+ (struct __CVBuffer *)createPixelBufferWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormatType:(unsigned int)arg3;
+ (struct __CVBuffer *)retainImageSupportedBuffer:(struct __CVBuffer *)arg1;
+ (id)imageFromPixelBuffer:(struct __CVBuffer *)arg1;
+ (void)copyPixelBuffer:(struct __CVBuffer *)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;
+ (struct opaqueCMSampleBuffer *)createSampleBufferWithFormat:(long long)arg1 bufferSize:(struct CGSize)arg2;
+ (struct opaqueCMSampleBuffer *)createSampleBufferFromPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;

@end

