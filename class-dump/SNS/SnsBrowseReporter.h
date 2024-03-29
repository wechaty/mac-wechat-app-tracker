//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SnsBrowseReporter : NSObject
{
    unsigned int _has_reddot;
    unsigned int _sessionType;
    unsigned int _clickMsgBannerCnt;
    unsigned int _clickMsgBellCntHaveDot;
    unsigned int _clickMsgBellCntNoDot;
    unsigned long long _browse_time;
    unsigned long long _browse_feed_cnt;
    NSString *_browse_feedlist;
    unsigned long long _new_feed_cnt;
    unsigned long long _browse_new_feed_cnt;
    NSString *_sessionId;
    NSMutableDictionary *_originfeedList;
    double _startStatisticalTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) double startStatisticalTime; // @synthesize startStatisticalTime=_startStatisticalTime;
@property(retain, nonatomic) NSMutableDictionary *originfeedList; // @synthesize originfeedList=_originfeedList;
@property(nonatomic) unsigned int clickMsgBellCntNoDot; // @synthesize clickMsgBellCntNoDot=_clickMsgBellCntNoDot;
@property(nonatomic) unsigned int clickMsgBellCntHaveDot; // @synthesize clickMsgBellCntHaveDot=_clickMsgBellCntHaveDot;
@property(nonatomic) unsigned int clickMsgBannerCnt; // @synthesize clickMsgBannerCnt=_clickMsgBannerCnt;
@property(nonatomic) unsigned int sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int has_reddot; // @synthesize has_reddot=_has_reddot;
@property(nonatomic) unsigned long long browse_new_feed_cnt; // @synthesize browse_new_feed_cnt=_browse_new_feed_cnt;
@property(nonatomic) unsigned long long new_feed_cnt; // @synthesize new_feed_cnt=_new_feed_cnt;
@property(retain, nonatomic) NSString *browse_feedlist; // @synthesize browse_feedlist=_browse_feedlist;
@property(nonatomic) unsigned long long browse_feed_cnt; // @synthesize browse_feed_cnt=_browse_feed_cnt;
@property(nonatomic) unsigned long long browse_time; // @synthesize browse_time=_browse_time;
- (void)addFeedIdToOriginFeedList:(id)arg1;
- (void)cleanData;
- (void)pauseStatisticalCostTime;
- (void)startStatisticalCostTime;
- (void)report;
- (void)initWithSessionId:(id)arg1 type:(unsigned int)arg2;
- (void)initByAlbum;
- (void)initByRefresh;
- (void)initByCreate:(id)arg1;
- (void)initByCreate;
- (id)init;

@end

