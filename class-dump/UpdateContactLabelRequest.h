//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, LabelPair;

@interface UpdateContactLabelRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasLabelPair:1;
    BaseRequest *baseRequest;
    LabelPair *labelPair;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetLabelPair:) LabelPair *labelPair; // @synthesize labelPair;
@property(readonly, nonatomic) BOOL hasLabelPair; // @synthesize hasLabelPair;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

