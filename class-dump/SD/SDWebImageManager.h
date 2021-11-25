//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDImageCacheDelegate-Protocol.h"
#import "SDWebImageDownloaderDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SDWebImageManager : NSObject <SDWebImageDownloaderDelegate, SDImageCacheDelegate>
{
    NSMutableArray *delegates;
    NSMutableArray *downloaders;
    NSMutableDictionary *downloaderForURL;
    NSMutableArray *failedURLs;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)imageDownloader:(id)arg1 didFailWithError:(id)arg2;
- (void)imageDownloader:(id)arg1 didFinishWithImage:(id)arg2;
- (void)imageCache:(id)arg1 didNotFindImageForKey:(id)arg2 userInfo:(id)arg3;
- (void)imageCache:(id)arg1 didFindImage:(id)arg2 forKey:(id)arg3 userInfo:(id)arg4;
- (void)cancelForDelegate:(id)arg1;
- (void)downloadWithURL:(id)arg1 delegate:(id)arg2 retryFailed:(BOOL)arg3;
- (void)downloadWithURL:(id)arg1 delegate:(id)arg2;
- (id)imageWithURL:(id)arg1;
- (id)imagePathWithURL:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
