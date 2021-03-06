//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, NSString;

@interface MMXPCMessage : NSObject <NSSecureCoding>
{
    BOOL _success;
    long long _code;
    NSString *_name;
    double _sendTime;
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) double sendTime; // @synthesize sendTime=_sendTime;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(nonatomic) BOOL success; // @synthesize success=_success;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

