//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAHostConfig, WATaskCenter;
@protocol IWACgiProtocol, IWALaunchProtocol, WAMiniProgramHostDataSource, WAMiniProgramHostDelegate;

@interface WAHost : NSObject
{
    BOOL _launched;
    id <WAMiniProgramHostDataSource> _dataSource;
    id <WAMiniProgramHostDelegate> _delegate;
    WAHostConfig *_config;
    WATaskCenter *_taskCenter;
}

+ (void)install:(CDUnknownBlockType)arg1;
+ (id)hostWithConfig:(id)arg1;
+ (id)sharedInstance;
+ (void)log:(id)arg1 level:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WATaskCenter *taskCenter; // @synthesize taskCenter=_taskCenter;
@property(retain, nonatomic) WAHostConfig *config; // @synthesize config=_config;
@property(nonatomic, getter=isLaunched) BOOL launched; // @synthesize launched=_launched;
@property(nonatomic) __weak id <WAMiniProgramHostDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WAMiniProgramHostDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) id <IWALaunchProtocol> launchProxy;
@property(readonly, nonatomic) id <IWACgiProtocol> cgiProxy;
- (void)disableHelperItem;
- (void)registerCustomMessageHandlers:(id)arg1;
- (void)registerCustomMessageHandlerClasses:(id)arg1;
- (BOOL)terminateAllMiniProgram;
- (BOOL)terminateMiniProgram:(id)arg1;
- (void)sendRequestToMiniProgram:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)launchMiniProgram:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearHost;
- (void)terminate;
- (id)launch:(BOOL)arg1;
- (id)launch;
- (void)setup:(id)arg1;
- (id)init;
- (id)ipcHelperUrl;

@end

