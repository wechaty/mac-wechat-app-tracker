//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSURLAuthenticationChallenge, NSURLConnection, NSURLProtectionSpace, NSURLResponse;

@protocol BKURLConnectionInformalDelegate <NSObject>
- (BOOL)connection:(NSURLConnection *)arg1 canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)connection:(NSURLConnection *)arg1 didFailWithError:(NSError *)arg2;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg1;
- (void)connection:(NSURLConnection *)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(NSURLConnection *)arg1 didReceiveData:(NSData *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
@end

