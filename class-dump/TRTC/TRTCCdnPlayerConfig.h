//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TRTCCdnPlayerConfig : NSObject
{
    BOOL _isDebugOn;
    long long _orientation;
    long long _renderMode;
    unsigned long long _cacheType;
}

@property(nonatomic) unsigned long long cacheType; // @synthesize cacheType=_cacheType;
@property(nonatomic) long long renderMode; // @synthesize renderMode=_renderMode;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) BOOL isDebugOn; // @synthesize isDebugOn=_isDebugOn;
- (id)init;

@end

