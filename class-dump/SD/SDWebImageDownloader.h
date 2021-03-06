//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSURL, NSURLConnection;
@protocol SDWebImageDownloaderDelegate;

@interface SDWebImageDownloader : NSObject
{
    NSURL *url;
    id <SDWebImageDownloaderDelegate> delegate;
    NSURLConnection *connection;
    NSMutableData *imageData;
    id userInfo;
}

+ (void)setMaxConcurrentDownloads:(unsigned long long)arg1;
+ (id)downloaderWithURL:(id)arg1 delegate:(id)arg2 userInfo:(id)arg3;
+ (id)downloaderWithURL:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo;
@property(retain, nonatomic) NSMutableData *imageData; // @synthesize imageData;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection;
@property(nonatomic) __weak id <SDWebImageDownloaderDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSURL *url; // @synthesize url;
- (void)dealloc;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)cancel;
- (void)start;

@end

