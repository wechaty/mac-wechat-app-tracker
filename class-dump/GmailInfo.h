//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface GmailInfo : PBGeneratedMessage
{
    unsigned int hasGmailAcct:1;
    unsigned int hasGmailSwitch:1;
    unsigned int hasGmailErrCode:1;
    unsigned int gmailSwitch;
    unsigned int gmailErrCode;
    NSString *gmailAcct;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetGmailErrCode:) unsigned int gmailErrCode; // @synthesize gmailErrCode;
@property(readonly, nonatomic) BOOL hasGmailErrCode; // @synthesize hasGmailErrCode;
@property(nonatomic, setter=SetGmailSwitch:) unsigned int gmailSwitch; // @synthesize gmailSwitch;
@property(readonly, nonatomic) BOOL hasGmailSwitch; // @synthesize hasGmailSwitch;
@property(retain, nonatomic, setter=SetGmailAcct:) NSString *gmailAcct; // @synthesize gmailAcct;
@property(readonly, nonatomic) BOOL hasGmailAcct; // @synthesize hasGmailAcct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

