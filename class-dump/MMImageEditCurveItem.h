//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMImageEditItem.h"

@class NSMutableArray;

@interface MMImageEditCurveItem : MMImageEditItem
{
    BOOL _needRestStraightStartPoint;
    struct CGPath *_path;
    NSMutableArray *_mousePointArray;
    struct CGPath *_straightPath;
    struct CGPath *_pathBackup;
    struct CGPoint _previousPoint;
    struct CGPoint _straightStartPoint;
    struct CGPoint _straightEndPoint;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPath *pathBackup; // @synthesize pathBackup=_pathBackup;
@property(nonatomic) BOOL needRestStraightStartPoint; // @synthesize needRestStraightStartPoint=_needRestStraightStartPoint;
@property(nonatomic) struct CGPoint straightEndPoint; // @synthesize straightEndPoint=_straightEndPoint;
@property(nonatomic) struct CGPoint straightStartPoint; // @synthesize straightStartPoint=_straightStartPoint;
@property(nonatomic) struct CGPath *straightPath; // @synthesize straightPath=_straightPath;
@property(retain, nonatomic) NSMutableArray *mousePointArray; // @synthesize mousePointArray=_mousePointArray;
@property(nonatomic) struct CGPoint previousPoint; // @synthesize previousPoint=_previousPoint;
@property(nonatomic) struct CGPath *path; // @synthesize path=_path;
- (struct CGPoint)midPointOfP1:(struct CGPoint)arg1 p2:(struct CGPoint)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)transformDidChange;
- (void)drawControlPoints;
- (void)drawActiveBorder;
- (void)drawGraphWithScale:(double)arg1;
- (void)drawGraph;
- (BOOL)mouseHitGraph:(struct CGPoint)arg1;
- (void)addPoint:(struct CGPoint)arg1;
- (struct CGSize)size;
- (struct CGRect)bounds;
- (void)dealloc;
- (id)initWithSuperView:(id)arg1 centerPoint:(struct CGPoint)arg2 size:(struct CGSize)arg3;

@end

