//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MASConstraint.h"

#import "NSCopying-Protocol.h"

@class MASLayoutConstraint, MASViewAttribute, NSView;

@interface MASViewConstraint : MASConstraint <NSCopying>
{
    BOOL _hasLayoutRelation;
    BOOL _useAnimator;
    float _layoutPriority;
    MASViewAttribute *_firstViewAttribute;
    MASViewAttribute *_secondViewAttribute;
    NSView *_installedView;
    MASLayoutConstraint *_layoutConstraint;
    long long _layoutRelation;
    double _layoutMultiplier;
    double _layoutConstant;
    id _mas_key;
}

+ (id)installedConstraintsForView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL useAnimator; // @synthesize useAnimator=_useAnimator;
@property(retain, nonatomic) id mas_key; // @synthesize mas_key=_mas_key;
@property(nonatomic) BOOL hasLayoutRelation; // @synthesize hasLayoutRelation=_hasLayoutRelation;
@property(nonatomic) double layoutConstant; // @synthesize layoutConstant=_layoutConstant;
@property(nonatomic) double layoutMultiplier; // @synthesize layoutMultiplier=_layoutMultiplier;
@property(nonatomic) float layoutPriority; // @synthesize layoutPriority=_layoutPriority;
@property(nonatomic) long long layoutRelation; // @synthesize layoutRelation=_layoutRelation;
@property(nonatomic) __weak MASLayoutConstraint *layoutConstraint; // @synthesize layoutConstraint=_layoutConstraint;
@property(nonatomic) __weak NSView *installedView; // @synthesize installedView=_installedView;
@property(retain, nonatomic) MASViewAttribute *secondViewAttribute; // @synthesize secondViewAttribute=_secondViewAttribute;
@property(readonly, nonatomic) MASViewAttribute *firstViewAttribute; // @synthesize firstViewAttribute=_firstViewAttribute;
- (void)uninstall;
- (id)layoutConstraintSimilarTo:(id)arg1;
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
- (id)and;
- (id)with;
- (CDUnknownBlockType)equalToWithRelation;
- (CDUnknownBlockType)priority;
- (CDUnknownBlockType)dividedBy;
- (CDUnknownBlockType)multipliedBy;
- (BOOL)hasBeenInstalled;
- (BOOL)isActive;
- (BOOL)supportsActiveProperty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFirstViewAttribute:(id)arg1;

@end

