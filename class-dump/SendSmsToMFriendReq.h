//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface SendSmsToMFriendReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasTicket:1;
    unsigned int hasMobileCount:1;
    unsigned int mobileCount;
    BaseRequest *baseRequest;
    NSString *ticket;
    NSMutableArray *mutableMobileListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableMobileListList; // @synthesize mutableMobileListList;
@property(nonatomic, setter=SetMobileCount:) unsigned int mobileCount; // @synthesize mobileCount;
@property(readonly, nonatomic) BOOL hasMobileCount; // @synthesize hasMobileCount;
@property(retain, nonatomic, setter=SetTicket:) NSString *ticket; // @synthesize ticket;
@property(readonly, nonatomic) BOOL hasTicket; // @synthesize hasTicket;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addMobileList:(id)arg1;
- (void)addMobileListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *mobileList; // @dynamic mobileList;
- (id)mobileListList;
- (id)init;

@end

