//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class MMCache, NSString;

@interface MMSightPlayerCacheService : MMService <MMService>
{
    MMCache *_cache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMCache *cache; // @synthesize cache=_cache;
- (void)_playerWithID:(id)arg1 filePath:(id)arg2 soundOn:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
- (id)_playerWithID:(id)arg1 filePath:(id)arg2 soundOn:(BOOL)arg3;
- (void)playerWithFilePath:(id)arg1 soundOn:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
- (void)playerWithDataField:(id)arg1 soundOn:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
- (id)playerWithFilePath:(id)arg1 soundOn:(BOOL)arg2;
- (id)playerWithMessage:(id)arg1 soundOn:(BOOL)arg2;
- (id)playerWithMessage:(id)arg1;
- (void)onServiceClearData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

