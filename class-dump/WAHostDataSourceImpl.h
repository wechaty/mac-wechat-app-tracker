//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAMiniProgramHostDataSource-Protocol.h"
#import "WAMiniProgramHostDelegate-Protocol.h"

@class NSString, WACgiProxy, WALaunchProxy;

@interface WAHostDataSourceImpl : NSObject <WAMiniProgramHostDataSource, WAMiniProgramHostDelegate>
{
    WACgiProxy *_cgiImpl;
    WALaunchProxy *_launchImpl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WALaunchProxy *launchImpl; // @synthesize launchImpl=_launchImpl;
@property(retain, nonatomic) WACgiProxy *cgiImpl; // @synthesize cgiImpl=_cgiImpl;
- (void)onLog:(id)arg1 level:(long long)arg2;
- (id)launchProxy;
- (id)cgiProxy;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

