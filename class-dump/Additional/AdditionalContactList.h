//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class LinkedinContactItem;

@interface AdditionalContactList : PBGeneratedMessage
{
    unsigned int hasLinkedinContactItem:1;
    LinkedinContactItem *linkedinContactItem;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetLinkedinContactItem:) LinkedinContactItem *linkedinContactItem; // @synthesize linkedinContactItem;
@property(readonly, nonatomic) BOOL hasLinkedinContactItem; // @synthesize hasLinkedinContactItem;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

