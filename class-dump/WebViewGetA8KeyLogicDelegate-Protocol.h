//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GetA8KeyReq, GetA8KeyResp, NSData, NSDictionary, NSString, NSURL;

@protocol WebViewGetA8KeyLogicDelegate <NSObject>

@optional
- (void)removeUrlPermissionForUrl:(NSString *)arg1;
- (void)saveUrlPermission:(GetA8KeyResp *)arg1 url:(NSString *)arg2;
- (void)saveJSAPIPermissions:(NSData *)arg1 url:(NSString *)arg2;
- (void)onJsapiGetA8key:(BOOL)arg1 requestUrl:(NSString *)arg2 requestHeaders:(NSDictionary *)arg3;
- (void)onJumpToBack;
- (void)onJumpToURL:(NSURL *)arg1 withCustomerCookies:(NSDictionary *)arg2;
- (void)onJumpToSafariWithUrl:(NSString *)arg1;
- (void)getA8KeyDidFaildWithReason:(int)arg1;
- (void)getA8keyDidFinishedWithReason:(int)arg1 req:(GetA8KeyReq *)arg2 resp:(GetA8KeyResp *)arg3;
@end

