//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (Shuffling)
- (void)shuffle;
- (void)bk_performMap:(CDUnknownBlockType)arg1;
- (void)bk_performReject:(CDUnknownBlockType)arg1;
- (void)bk_performSelect:(CDUnknownBlockType)arg1;
- (void)removeFirstObject;
- (void)safeRemoveObjectsInRange:(struct _NSRange)arg1;
- (void)safeReplaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)safeRemoveObjectAtIndex:(unsigned long long)arg1;
- (void)safeInsertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)safeRemoveObject:(id)arg1;
- (void)safeAddObject:(id)arg1;
@end

