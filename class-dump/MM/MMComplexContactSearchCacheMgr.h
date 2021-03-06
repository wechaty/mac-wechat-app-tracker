//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MMComplexContactSearchCacheMgr : NSObject
{
    NSString *_directory;
    NSData *_encryptKey;
}

+ (unsigned long long)getCacheVersion;
+ (void)setSearchOnePartChineseCache:(id)arg1;
+ (id)searchOnePartChineseCache;
+ (void)setSearchOnePartChineseShortPinyinCache:(id)arg1;
+ (id)searchOnePartChineseShortPinyinCache;
+ (void)setChineseArrayCache:(id)arg1;
+ (id)chineseArrayCache;
+ (void)setPinyinCache:(id)arg1;
+ (id)pinyinCache;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *encryptKey; // @synthesize encryptKey=_encryptKey;
@property(copy, nonatomic) NSString *directory; // @synthesize directory=_directory;
- (void)cacheObject:(id)arg1 forType:(id)arg2;
- (id)cachedObjectForType:(id)arg1;
- (void)saveCachesToDisk;
- (BOOL)loadCachesFromDisk;
- (void)clearCachesInMem;

@end

