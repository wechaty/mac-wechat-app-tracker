//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCContactData;

@interface MMVerifyContactWrap : NSObject
{
    unsigned int _scene;
    unsigned int _flag;
    NSString *_usrName;
    NSString *_originalUsrName;
    NSString *_ticket;
    WCContactData *_verifyContact;
    NSString *_chatRoomUserName;
    NSString *_sourceUserName;
    NSString *_sourceNickName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sourceNickName; // @synthesize sourceNickName=_sourceNickName;
@property(retain, nonatomic) NSString *sourceUserName; // @synthesize sourceUserName=_sourceUserName;
@property(retain, nonatomic) NSString *chatRoomUserName; // @synthesize chatRoomUserName=_chatRoomUserName;
@property(retain, nonatomic) WCContactData *verifyContact; // @synthesize verifyContact=_verifyContact;
@property(nonatomic) unsigned int flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *originalUsrName; // @synthesize originalUsrName=_originalUsrName;
@property(retain, nonatomic) NSString *usrName; // @synthesize usrName=_usrName;
- (id)init;

@end

