//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAContactUpdateTaskWrap : NSObject
{
    BOOL _isForce;
    unsigned long long _updateType;
    NSString *_updateKey;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isForce; // @synthesize isForce=_isForce;
@property(copy, nonatomic) NSString *updateKey; // @synthesize updateKey=_updateKey;
@property(nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;
- (BOOL)isEqualToTaskWrap:(id)arg1;

@end
