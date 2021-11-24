//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MASConstraint.h"

#import "MASConstraintDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface MASCompositeConstraint : MASConstraint <MASConstraintDelegate>
{
    id _mas_key;
    NSMutableArray *_childConstraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *childConstraints; // @synthesize childConstraints=_childConstraints;
@property(retain, nonatomic) id mas_key; // @synthesize mas_key=_mas_key;
- (void)uninstall;
- (void)install;
- (void)deactivate;
- (void)activate;
- (void)setCenterOffset:(struct CGPoint)arg1;
- (void)setSizeOffset:(struct CGSize)arg1;
- (void)setOffset:(double)arg1;
- (void)setInset:(double)arg1;
- (void)setInsets:(struct NSEdgeInsets)arg1;
- (CDUnknownBlockType)key;
- (id)animator;
- (id)addConstraintWithLayoutAttribute:(long long)arg1;
- (CDUnknownBlockType)equalToWithRelation;
- (CDUnknownBlockType)priority;
- (CDUnknownBlockType)dividedBy;
- (CDUnknownBlockType)multipliedBy;
- (id)constraint:(id)arg1 addConstraintWithLayoutAttribute:(long long)arg2;
- (void)constraint:(id)arg1 shouldBeReplacedWithConstraint:(id)arg2;
- (id)initWithChildren:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

