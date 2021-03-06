//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveBaseReportHandler.h"

#import "LVLiveServiceExt-Protocol.h"
#import "LVLiveTaskExt-Protocol.h"

@class LVLiveTask, NSMutableDictionary, NSString;

@interface MMLiveAnchorCloseLiveReportHandler : MMLiveBaseReportHandler <LVLiveTaskExt, LVLiveServiceExt>
{
    unsigned int scene;
    unsigned int roomRole;
    unsigned int lastTime;
    unsigned int audienceCount;
    unsigned int audienceCountMax;
    unsigned int commentCount;
    unsigned int heartCount;
    unsigned int connectCount;
    unsigned int allowReplay;
    unsigned int roomCount;
    NSString *roomId;
    unsigned long long liveId;
    NSString *topic;
    unsigned long long costTime;
    LVLiveTask *_task;
    NSMutableDictionary *_liveInfoWrapDict;
}

+ (void)initialize;
+ (void)MMLiveReportFieldAdd_costTime;
+ (void)MMLiveReportFieldAdd_roomCount;
+ (void)MMLiveReportFieldAdd_allowReplay;
+ (void)MMLiveReportFieldAdd_connectCount;
+ (void)MMLiveReportFieldAdd_heartCount;
+ (void)MMLiveReportFieldAdd_commentCount;
+ (void)MMLiveReportFieldAdd_audienceCountMax;
+ (void)MMLiveReportFieldAdd_audienceCount;
+ (void)MMLiveReportFieldAdd_lastTime;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)MMLiveReportFieldAdd_topic;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_scene;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *liveInfoWrapDict; // @synthesize liveInfoWrapDict=_liveInfoWrapDict;
@property(retain, nonatomic) LVLiveTask *task; // @synthesize task=_task;
@property(nonatomic) unsigned long long costTime; // @synthesize costTime;
@property(nonatomic) unsigned int roomCount; // @synthesize roomCount;
@property(nonatomic) unsigned int allowReplay; // @synthesize allowReplay;
@property(nonatomic) unsigned int connectCount; // @synthesize connectCount;
@property(nonatomic) unsigned int heartCount; // @synthesize heartCount;
@property(nonatomic) unsigned int commentCount; // @synthesize commentCount;
@property(nonatomic) unsigned int audienceCountMax; // @synthesize audienceCountMax;
@property(nonatomic) unsigned int audienceCount; // @synthesize audienceCount;
@property(nonatomic) unsigned int lastTime; // @synthesize lastTime;
@property(nonatomic) unsigned int roomRole; // @synthesize roomRole;
@property(retain, nonatomic) NSString *topic; // @synthesize topic;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId;
@property(nonatomic) unsigned int scene; // @synthesize scene;
- (void)reportliveInfo:(id)arg1;
- (void)onGetLiveInfoWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2 andLiveInfo:(id)arg3;
- (void)onExitLiveSuccessWithLiveTask:(id)arg1;
- (void)reportLiveTaskWithGetLiveInfo:(id)arg1;
- (void)reportLiveTask:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)report;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

