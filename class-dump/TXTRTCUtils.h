//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXTRTCUtils : NSObject
{
}

+ (int)getTRTCAudioQuality:(long long)arg1;
+ (unsigned long long)getV2LiveMode:(unsigned long long)arg1;
+ (long long)getTRTCVideoResolutionMode:(long long)arg1;
+ (long long)getV2VideoBufferType:(long long)arg1;
+ (long long)getTRTCVideoBufferType:(long long)arg1;
+ (long long)getV2VideoPixelFormat:(long long)arg1;
+ (long long)getTRTCVideoPixelFormat:(long long)arg1;
+ (struct CGSize)getSizeByResolution:(long long)arg1;
+ (struct CGSize)getSizeByV2Resolution:(long long)arg1 resMode:(long long)arg2;
+ (struct CGPoint)getBiteratePairByResolution:(long long)arg1;
+ (int)getV1Resolution:(long long)arg1;
+ (int)getBiterateByResolution:(long long)arg1;
+ (long long)getTRTCVideoRotation:(long long)arg1;
+ (long long)getV2VideoResolution:(long long)arg1;
+ (long long)getTRTCVideoResolution:(long long)arg1;
+ (id)getLiveVideoFrame:(id)arg1;
+ (void)fillTRTCVideoFrame:(id)arg1 withV2Frame:(id)arg2;
+ (id)getTRTCVideoFrame:(id)arg1;
+ (int)getTRTCFillMode:(long long)arg1;
+ (int)getTRTCRotation:(long long)arg1;

@end

