//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, WKProcessPool;

@interface MMWebViewUIMgr : MMService <MMService>
{
    NSMutableDictionary *_floatWindowInfo;
    NSRecursiveLock *_lock;
    NSMutableDictionary *_webWindows;
    NSMutableArray *_waitCloseWebWindows;
    NSMutableDictionary *_preLoadWebViewPool;
    WKProcessPool *_processPool;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WKProcessPool *processPool; // @synthesize processPool=_processPool;
@property(retain, nonatomic) NSMutableDictionary *preLoadWebViewPool; // @synthesize preLoadWebViewPool=_preLoadWebViewPool;
@property(retain, nonatomic) NSMutableArray *waitCloseWebWindows; // @synthesize waitCloseWebWindows=_waitCloseWebWindows;
@property(retain, nonatomic) NSMutableDictionary *webWindows; // @synthesize webWindows=_webWindows;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *floatWindowInfo; // @synthesize floatWindowInfo=_floatWindowInfo;
- (void)deletePreloadWebViewForType:(unsigned long long)arg1;
- (id)getPreloadWebViewForType:(unsigned long long)arg1;
- (void)preloadWebView:(id)arg1 forType:(unsigned long long)arg2 andUrl:(id)arg3;
- (unsigned long long)setupPreloadWebView:(unsigned long long)arg1 andUrl:(id)arg2;
- (id)getFloatWindowInfo:(id)arg1;
- (void)removeFloatWindowInfo:(id)arg1;
- (void)addFloatWindowInfo:(id)arg1 object:(id)arg2;
- (BOOL)shouldWindowControllerOpenNewItem:(id)arg1;
- (void)updateFloatWindowInfo;
- (id)currentWindowId;
- (void)closeWebViewWindow:(unsigned long long)arg1;
- (void)showWebViewWithDataItem:(id)arg1 windowId:(id)arg2;
- (void)onServiceClearData;
- (id)getWKProcessPool;
- (id)getCurrentWindowForType:(unsigned long long)arg1;
- (id)getCurrentWindow;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

