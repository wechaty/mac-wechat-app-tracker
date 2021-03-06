//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, GetWxaGameResponse_WxaGameInfo, NSMutableArray, NSString, WxaAppBaseResponse;

@interface GetWxaGameResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasWxaappBaseresponse:1;
    unsigned int hasGameEntry:1;
    unsigned int hasLinkWxagame:1;
    unsigned int hasActionCode:1;
    unsigned int hasWxagameNewWording:1;
    unsigned int hasWxagameEntryWording:1;
    unsigned int hasEntryWordingColor:1;
    unsigned int hasNewWordingBgColor:1;
    unsigned int hasDisappearOneClick:1;
    unsigned int actionCode;
    unsigned int disappearOneClick;
    BaseResponse *baseResponse;
    WxaAppBaseResponse *wxaappBaseresponse;
    NSMutableArray *mutableWxagameListList;
    GetWxaGameResponse_WxaGameInfo *gameEntry;
    NSString *linkWxagame;
    NSString *wxagameNewWording;
    NSString *wxagameEntryWording;
    NSString *entryWordingColor;
    NSString *newWordingBgColor;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetDisappearOneClick:) unsigned int disappearOneClick; // @synthesize disappearOneClick;
@property(readonly, nonatomic) BOOL hasDisappearOneClick; // @synthesize hasDisappearOneClick;
@property(retain, nonatomic, setter=SetNewWordingBgColor:) NSString *newWordingBgColor; // @synthesize newWordingBgColor;
@property(readonly, nonatomic) BOOL hasNewWordingBgColor; // @synthesize hasNewWordingBgColor;
@property(retain, nonatomic, setter=SetEntryWordingColor:) NSString *entryWordingColor; // @synthesize entryWordingColor;
@property(readonly, nonatomic) BOOL hasEntryWordingColor; // @synthesize hasEntryWordingColor;
@property(retain, nonatomic, setter=SetWxagameEntryWording:) NSString *wxagameEntryWording; // @synthesize wxagameEntryWording;
@property(readonly, nonatomic) BOOL hasWxagameEntryWording; // @synthesize hasWxagameEntryWording;
@property(retain, nonatomic, setter=SetWxagameNewWording:) NSString *wxagameNewWording; // @synthesize wxagameNewWording;
@property(readonly, nonatomic) BOOL hasWxagameNewWording; // @synthesize hasWxagameNewWording;
@property(nonatomic, setter=SetActionCode:) unsigned int actionCode; // @synthesize actionCode;
@property(readonly, nonatomic) BOOL hasActionCode; // @synthesize hasActionCode;
@property(retain, nonatomic, setter=SetLinkWxagame:) NSString *linkWxagame; // @synthesize linkWxagame;
@property(readonly, nonatomic) BOOL hasLinkWxagame; // @synthesize hasLinkWxagame;
@property(retain, nonatomic, setter=SetGameEntry:) GetWxaGameResponse_WxaGameInfo *gameEntry; // @synthesize gameEntry;
@property(readonly, nonatomic) BOOL hasGameEntry; // @synthesize hasGameEntry;
@property(retain, nonatomic) NSMutableArray *mutableWxagameListList; // @synthesize mutableWxagameListList;
@property(retain, nonatomic, setter=SetWxaappBaseresponse:) WxaAppBaseResponse *wxaappBaseresponse; // @synthesize wxaappBaseresponse;
@property(readonly, nonatomic) BOOL hasWxaappBaseresponse; // @synthesize hasWxaappBaseresponse;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addWxagameList:(id)arg1;
- (void)addWxagameListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *wxagameList; // @dynamic wxagameList;
- (id)wxagameListList;
- (id)init;

@end

