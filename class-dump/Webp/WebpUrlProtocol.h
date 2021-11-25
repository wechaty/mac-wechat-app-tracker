//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLProtocol.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class NSMutableData, NSString, NSURLSession;

@interface WebpUrlProtocol : NSURLProtocol <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    BOOL _beginAppendData;
    NSURLSession *_session;
    NSMutableData *_imageData;
    double _timeDownload;
    double _timeDecode;
    double _timeFinish;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (BOOL)isWebpUrlRequest:(id)arg1;
+ (void)wa_web_unregisterWebpScheme;
+ (void)wa_web_registerWebpScheme;
- (void).cxx_destruct;
@property(nonatomic) BOOL beginAppendData; // @synthesize beginAppendData=_beginAppendData;
@property(nonatomic) double timeFinish; // @synthesize timeFinish=_timeFinish;
@property(nonatomic) double timeDecode; // @synthesize timeDecode=_timeDecode;
@property(nonatomic) double timeDownload; // @synthesize timeDownload=_timeDownload;
@property(retain, nonatomic) NSMutableData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)stopLoading;
- (void)startLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
