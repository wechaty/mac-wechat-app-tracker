//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TXSDownloadParam : NSObject
{
    BOOL _enableNearestIP;
    BOOL _enableMessage;
    BOOL _enableMetaData;
    int _format;
    int _rtmpChannelType;
    long long _mode;
    long long _reconnectLimit;
    double _reconnectInterval;
    NSString *_flvSessionKey;
    NSDictionary *_headers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSString *flvSessionKey; // @synthesize flvSessionKey=_flvSessionKey;
@property(nonatomic) BOOL enableMetaData; // @synthesize enableMetaData=_enableMetaData;
@property(nonatomic) BOOL enableMessage; // @synthesize enableMessage=_enableMessage;
@property(nonatomic) int rtmpChannelType; // @synthesize rtmpChannelType=_rtmpChannelType;
@property(nonatomic) BOOL enableNearestIP; // @synthesize enableNearestIP=_enableNearestIP;
@property(nonatomic) double reconnectInterval; // @synthesize reconnectInterval=_reconnectInterval;
@property(nonatomic) long long reconnectLimit; // @synthesize reconnectLimit=_reconnectLimit;
@property(nonatomic) int format; // @synthesize format=_format;
@property(nonatomic) long long mode; // @synthesize mode=_mode;

@end
