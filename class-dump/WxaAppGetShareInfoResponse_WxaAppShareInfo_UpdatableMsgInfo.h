//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WxaAppGetShareInfoResponse_WxaAppShareInfo_UpdatableMsgInfo : PBGeneratedMessage
{
    unsigned int hasContent:1;
    unsigned int hasContentColor:1;
    unsigned int hasToastContent:1;
    unsigned int hasToastButtonWording:1;
    unsigned int hasRemindWording:1;
    unsigned int hasUpdatePeroid:1;
    unsigned int hasState:1;
    int updatePeroid;
    int state;
    NSString *content;
    NSString *contentColor;
    NSString *toastContent;
    NSString *toastButtonWording;
    NSString *remindWording;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetState:) int state; // @synthesize state;
@property(readonly, nonatomic) BOOL hasState; // @synthesize hasState;
@property(nonatomic, setter=SetUpdatePeroid:) int updatePeroid; // @synthesize updatePeroid;
@property(readonly, nonatomic) BOOL hasUpdatePeroid; // @synthesize hasUpdatePeroid;
@property(retain, nonatomic, setter=SetRemindWording:) NSString *remindWording; // @synthesize remindWording;
@property(readonly, nonatomic) BOOL hasRemindWording; // @synthesize hasRemindWording;
@property(retain, nonatomic, setter=SetToastButtonWording:) NSString *toastButtonWording; // @synthesize toastButtonWording;
@property(readonly, nonatomic) BOOL hasToastButtonWording; // @synthesize hasToastButtonWording;
@property(retain, nonatomic, setter=SetToastContent:) NSString *toastContent; // @synthesize toastContent;
@property(readonly, nonatomic) BOOL hasToastContent; // @synthesize hasToastContent;
@property(retain, nonatomic, setter=SetContentColor:) NSString *contentColor; // @synthesize contentColor;
@property(readonly, nonatomic) BOOL hasContentColor; // @synthesize hasContentColor;
@property(retain, nonatomic, setter=SetContent:) NSString *content; // @synthesize content;
@property(readonly, nonatomic) BOOL hasContent; // @synthesize hasContent;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

