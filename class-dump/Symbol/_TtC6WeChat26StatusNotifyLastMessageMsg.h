//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC6WeChat26StatusNotifyLastMessageMsg : NSObject
{
    // Error parsing type: , name: fromUserName
    // Error parsing type: , name: toUserName
    // Error parsing type: , name: msgSvrId
    // Error parsing type: , name: msgCreateTime
}

+ (BOOL)checkValueTypeWithObj:(id)arg1 error:(id *)arg2;
+ (id)functionMsgWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic) unsigned long long msgCreateTime; // @synthesize msgCreateTime;
@property(nonatomic) long long msgSvrId; // @synthesize msgSvrId;
@property(nonatomic, copy) NSString *toUserName;
@property(nonatomic, copy) NSString *fromUserName;

@end

