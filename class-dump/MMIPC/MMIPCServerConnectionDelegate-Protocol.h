//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMIPCServerConnection, NSError;

@protocol MMIPCServerConnectionDelegate <NSObject>
- (void)serverConnection:(MMIPCServerConnection *)arg1 didFailedWithError:(NSError *)arg2;
- (void)serverConnectionDidRegister:(MMIPCServerConnection *)arg1;
- (void)serverConnectionDidStart:(MMIPCServerConnection *)arg1;
@end

