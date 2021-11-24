//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface LaunchAction : PBGeneratedMessage
{
    unsigned int hasActionCode:1;
    unsigned int hasOpenUrl:1;
    unsigned int hasNeedHistoryList:1;
    unsigned int needHistoryList_:1;
    unsigned int hasAlertMsg:1;
    unsigned int hasAlertTitle:1;
    unsigned int actionCode;
    NSString *openUrl;
    NSString *alertMsg;
    NSString *alertTitle;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetAlertTitle:) NSString *alertTitle; // @synthesize alertTitle;
@property(readonly, nonatomic) BOOL hasAlertTitle; // @synthesize hasAlertTitle;
@property(retain, nonatomic, setter=SetAlertMsg:) NSString *alertMsg; // @synthesize alertMsg;
@property(readonly, nonatomic) BOOL hasAlertMsg; // @synthesize hasAlertMsg;
@property(readonly, nonatomic) BOOL hasNeedHistoryList; // @synthesize hasNeedHistoryList;
@property(retain, nonatomic, setter=SetOpenUrl:) NSString *openUrl; // @synthesize openUrl;
@property(readonly, nonatomic) BOOL hasOpenUrl; // @synthesize hasOpenUrl;
@property(nonatomic, setter=SetActionCode:) unsigned int actionCode; // @synthesize actionCode;
@property(readonly, nonatomic) BOOL hasActionCode; // @synthesize hasActionCode;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(nonatomic, setter=SetNeedHistoryList:) BOOL needHistoryList; // @synthesize needHistoryList=needHistoryList_;
- (id)init;

@end

