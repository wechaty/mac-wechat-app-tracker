//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WxaTemplateMsgEvent : PBGeneratedMessage
{
    unsigned int hasType:1;
    unsigned int hasAppid:1;
    unsigned int hasFormid:1;
    unsigned int hasPageid:1;
    unsigned int hasAppstate:1;
    unsigned int hasAppversion:1;
    unsigned int type;
    int appstate;
    int appversion;
    NSString *appid;
    NSString *formid;
    NSString *pageid;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetAppversion:) int appversion; // @synthesize appversion;
@property(readonly, nonatomic) BOOL hasAppversion; // @synthesize hasAppversion;
@property(nonatomic, setter=SetAppstate:) int appstate; // @synthesize appstate;
@property(readonly, nonatomic) BOOL hasAppstate; // @synthesize hasAppstate;
@property(retain, nonatomic, setter=SetPageid:) NSString *pageid; // @synthesize pageid;
@property(readonly, nonatomic) BOOL hasPageid; // @synthesize hasPageid;
@property(retain, nonatomic, setter=SetFormid:) NSString *formid; // @synthesize formid;
@property(readonly, nonatomic) BOOL hasFormid; // @synthesize hasFormid;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

