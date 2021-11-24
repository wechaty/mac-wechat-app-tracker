//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YYKVStorage;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface YYDiskCache : NSObject
{
    YYKVStorage *_kv;
    NSObject<OS_dispatch_semaphore> *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    NSString *_path;
    unsigned long long _inlineThreshold;
    CDUnknownBlockType _customArchiveBlock;
    CDUnknownBlockType _customUnarchiveBlock;
    CDUnknownBlockType _customFileNameBlock;
    unsigned long long _countLimit;
    unsigned long long _costLimit;
    double _ageLimit;
    unsigned long long _freeDiskSpaceLimit;
    double _autoTrimInterval;
}

+ (void)setExtendedData:(id)arg1 toObject:(id)arg2;
+ (id)getExtendedDataFromObject:(id)arg1;
- (void).cxx_destruct;
@property double autoTrimInterval; // @synthesize autoTrimInterval=_autoTrimInterval;
@property unsigned long long freeDiskSpaceLimit; // @synthesize freeDiskSpaceLimit=_freeDiskSpaceLimit;
@property double ageLimit; // @synthesize ageLimit=_ageLimit;
@property unsigned long long costLimit; // @synthesize costLimit=_costLimit;
@property unsigned long long countLimit; // @synthesize countLimit=_countLimit;
@property(copy) CDUnknownBlockType customFileNameBlock; // @synthesize customFileNameBlock=_customFileNameBlock;
@property(copy) CDUnknownBlockType customUnarchiveBlock; // @synthesize customUnarchiveBlock=_customUnarchiveBlock;
@property(copy) CDUnknownBlockType customArchiveBlock; // @synthesize customArchiveBlock=_customArchiveBlock;
@property(readonly) unsigned long long inlineThreshold; // @synthesize inlineThreshold=_inlineThreshold;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(copy) NSString *name; // @synthesize name=_name;
@property BOOL errorLogsEnabled;
- (id)description;
- (void)trimToAge:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)trimToAge:(double)arg1;
- (void)trimToCost:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)trimToCost:(unsigned long long)arg1;
- (void)trimToCount:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)trimToCount:(unsigned long long)arg1;
- (void)totalCostWithBlock:(CDUnknownBlockType)arg1;
- (long long)totalCost;
- (void)totalCountWithBlock:(CDUnknownBlockType)arg1;
- (long long)totalCount;
- (void)removeAllObjectsWithProgressBlock:(CDUnknownBlockType)arg1 endBlock:(CDUnknownBlockType)arg2;
- (void)removeAllObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)objectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (void)containsObjectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)containsObjectForKey:(id)arg1;
- (id)initWithPath:(id)arg1 inlineThreshold:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_appWillBeTerminated;
- (id)_filenameForKey:(id)arg1;
- (void)_trimToFreeDiskSpace:(unsigned long long)arg1;
- (void)_trimToAge:(double)arg1;
- (void)_trimToCount:(unsigned long long)arg1;
- (void)_trimToCost:(unsigned long long)arg1;
- (void)_trimInBackground;
- (void)_trimRecursively;

@end

