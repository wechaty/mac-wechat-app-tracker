//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class NSLock, NSMapTable;

@interface TXSafeMap : NSObject <NSFastEnumeration>
{
    NSLock *_lock;
    NSMapTable *_mapTable;
}

+ (id)weakValueMap;
+ (id)strongValueMap;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *mapTable; // @synthesize mapTable=_mapTable;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)mutableCopy;
- (id)copy;
- (id)copyAll;
- (id)allValues;
- (id)allKeys;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (void)safeOperate:(CDUnknownBlockType)arg1;
- (id)init;

@end
