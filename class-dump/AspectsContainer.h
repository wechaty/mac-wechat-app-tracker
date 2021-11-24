//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AspectsContainer : NSObject
{
    NSArray *_beforeAspects;
    NSArray *_insteadAspects;
    NSArray *_afterAspects;
}

- (void).cxx_destruct;
@property(copy) NSArray *afterAspects; // @synthesize afterAspects=_afterAspects;
@property(copy) NSArray *insteadAspects; // @synthesize insteadAspects=_insteadAspects;
@property(copy) NSArray *beforeAspects; // @synthesize beforeAspects=_beforeAspects;
- (id)description;
- (BOOL)removeAspect:(id)arg1;
- (void)addAspect:(id)arg1 withOptions:(unsigned long long)arg2;
- (BOOL)hasAspects;

@end

