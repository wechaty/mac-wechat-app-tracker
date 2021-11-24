//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SnsVideoCompressConfig : NSObject
{
    int _maxFps;
    int _maxKbps;
    int _maxDuration;
    int _minDuration;
    int _maxWH;
    struct CGSize _maxSize;
}

@property(nonatomic) int maxWH; // @synthesize maxWH=_maxWH;
@property(nonatomic) int minDuration; // @synthesize minDuration=_minDuration;
@property(nonatomic) int maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) int maxKbps; // @synthesize maxKbps=_maxKbps;
@property(nonatomic) int maxFps; // @synthesize maxFps=_maxFps;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
- (struct CGSize)calcFitSize:(struct CGSize)arg1 withWidth:(unsigned long long)arg2 withHeight:(unsigned long long)arg3;
- (double)fixBy16:(double)arg1;
- (int)maxWHFromSize:(struct CGSize)arg1;
- (id)init;

@end

