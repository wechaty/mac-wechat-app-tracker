//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMTimer, NSString;

@interface FinderReporter : NSObject
{
    unsigned int _timeStamp;
    unsigned int _extraReportOpenedWindowsInterval;
    unsigned int _sidebarExpTimes;
    unsigned int _reportSidebarExposeInterval;
    unsigned int _reportOpenedWindowsInterval;
    unsigned int _lastReportOpenedWindowsTime;
    NSString *_sessionid;
    NSString *_contentid;
    unsigned long long _sidebarLastExpReportTime;
    unsigned long long _sidebarLastExposeTime;
    MMTimer *_reportSidebarExposeTimer;
    MMTimer *_reportOpenedWindowsTimer;
}

+ (void)reportFinderReddWithDraw:(id)arg1 xml:(id)arg2;
+ (void)reportFinderReddotNotifyIsOpen:(BOOL)arg1;
+ (void)reportFinderCloseWithReddotInfo:(id)arg1;
+ (void)reportRedTipHoverEndWithRedInfo:(id)arg1 stayTime:(unsigned long long)arg2;
+ (void)reportRedTipHoverStartWithRedInfo:(id)arg1;
+ (void)reportRedTipExposeEndWithSessionBuffer:(id)arg1 stayTime:(unsigned long long)arg2;
+ (void)reportRedTipExposeStart;
+ (id)parseReportInfoFromUrl:(id)arg1;
+ (void)reportFinderClose:(id)arg1 openTime:(unsigned long long)arg2 andType:(unsigned long long)arg3 reddotInfo:(id)arg4;
+ (void)reportFinderMsgCardShare:(id)arg1 shareStatus:(unsigned long long)arg2;
+ (void)reportFinderCardExpose:(id)arg1;
+ (void)reportFinderMsgCardExpose:(id)arg1;
+ (void)reportFinderSnsCardExpose:(id)arg1 userName:(id)arg2 reqTime:(unsigned int)arg3 isLiveRoom:(BOOL)arg4;
+ (id)reportFinderBrandEntry:(unsigned long long)arg1;
+ (void)reportFinderCardEntry:(id)arg1;
+ (id)reportFinderSnsCardEntry:(id)arg1 userName:(id)arg2 reqTime:(unsigned int)arg3 isLiveRoom:(BOOL)arg4;
+ (id)reportFinderMsgCardEntry:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastReportOpenedWindowsTime; // @synthesize lastReportOpenedWindowsTime=_lastReportOpenedWindowsTime;
@property(retain, nonatomic) MMTimer *reportOpenedWindowsTimer; // @synthesize reportOpenedWindowsTimer=_reportOpenedWindowsTimer;
@property(nonatomic) unsigned int reportOpenedWindowsInterval; // @synthesize reportOpenedWindowsInterval=_reportOpenedWindowsInterval;
@property(retain, nonatomic) MMTimer *reportSidebarExposeTimer; // @synthesize reportSidebarExposeTimer=_reportSidebarExposeTimer;
@property(nonatomic) unsigned int reportSidebarExposeInterval; // @synthesize reportSidebarExposeInterval=_reportSidebarExposeInterval;
@property(nonatomic) unsigned int sidebarExpTimes; // @synthesize sidebarExpTimes=_sidebarExpTimes;
@property(nonatomic) unsigned long long sidebarLastExposeTime; // @synthesize sidebarLastExposeTime=_sidebarLastExposeTime;
@property(nonatomic) unsigned long long sidebarLastExpReportTime; // @synthesize sidebarLastExpReportTime=_sidebarLastExpReportTime;
@property(nonatomic) unsigned int extraReportOpenedWindowsInterval; // @synthesize extraReportOpenedWindowsInterval=_extraReportOpenedWindowsInterval;
@property(retain, nonatomic) NSString *contentid; // @synthesize contentid=_contentid;
@property(retain, nonatomic) NSString *sessionid; // @synthesize sessionid=_sessionid;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp=_timeStamp;
- (void)reportAppFeedLiveWithInfo:(id)arg1;
- (void)reportAppFeed:(id)arg1 withAction:(int)arg2 withInfo:(id)arg3;
- (void)reportOpenedWindows;
- (void)reportFinderPreloadStatus:(id)arg1;
- (unsigned long long)reportFinderPreloadStart:(unsigned long long)arg1;
- (void)reportFinderSidebarEntry:(id)arg1;
- (void)reportFinderSidebarExpTimes;
- (void)recordFinderSidebarExpose;
- (void)regularlyReport;
- (void)stopOpenWindowsTimer;
- (void)starOpenWindowsTimer;
- (void)stopSidebarExposeTimer;
- (void)starSidebarExposeTimer;
- (void)dealloc;

@end

