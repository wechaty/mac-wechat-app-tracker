//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface AcctTypeResource : PBGeneratedMessage
{
    unsigned int hasAcctTypeId:1;
    NSString *acctTypeId;
    NSMutableArray *mutableWordingsList;
    NSMutableArray *mutableUrlsList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableUrlsList; // @synthesize mutableUrlsList;
@property(retain, nonatomic) NSMutableArray *mutableWordingsList; // @synthesize mutableWordingsList;
@property(retain, nonatomic, setter=SetAcctTypeId:) NSString *acctTypeId; // @synthesize acctTypeId;
@property(readonly, nonatomic) BOOL hasAcctTypeId; // @synthesize hasAcctTypeId;
- (void)addUrls:(id)arg1;
- (void)addUrlsFromArray:(id)arg1;
- (void)addWordings:(id)arg1;
- (void)addWordingsFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *urls; // @dynamic urls;
- (id)urlsList;
@property(retain, nonatomic) NSMutableArray *wordings; // @dynamic wordings;
- (id)wordingsList;
- (id)init;

@end

