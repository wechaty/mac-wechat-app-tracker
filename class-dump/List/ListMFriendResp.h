//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface ListMFriendResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasTicket:1;
    unsigned int hasMobileCount:1;
    unsigned int hasEmailCount:1;
    unsigned int mobileCount;
    unsigned int emailCount;
    BaseResponse *baseResponse;
    NSString *ticket;
    NSMutableArray *mutableMobileInfoList;
    NSMutableArray *mutableEmailInfoList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableEmailInfoList; // @synthesize mutableEmailInfoList;
@property(nonatomic, setter=SetEmailCount:) unsigned int emailCount; // @synthesize emailCount;
@property(readonly, nonatomic) BOOL hasEmailCount; // @synthesize hasEmailCount;
@property(retain, nonatomic) NSMutableArray *mutableMobileInfoList; // @synthesize mutableMobileInfoList;
@property(nonatomic, setter=SetMobileCount:) unsigned int mobileCount; // @synthesize mobileCount;
@property(readonly, nonatomic) BOOL hasMobileCount; // @synthesize hasMobileCount;
@property(retain, nonatomic, setter=SetTicket:) NSString *ticket; // @synthesize ticket;
@property(readonly, nonatomic) BOOL hasTicket; // @synthesize hasTicket;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addEmailInfo:(id)arg1;
- (void)addEmailInfoFromArray:(id)arg1;
- (void)addMobileInfo:(id)arg1;
- (void)addMobileInfoFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *emailInfo; // @dynamic emailInfo;
- (id)emailInfoList;
@property(retain, nonatomic) NSMutableArray *mobileInfo; // @dynamic mobileInfo;
- (id)mobileInfoList;
- (id)init;

@end

