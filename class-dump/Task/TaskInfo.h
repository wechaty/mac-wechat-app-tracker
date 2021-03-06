//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSDictionary, NSString;
@protocol NSSecureCoding;

@interface TaskInfo : NSOperation <NSCoding, NSCopying>
{
    BOOL _executing;
    BOOL _finished;
    int _seqNO;
    int _pid;
    int _code;
    int _errCode;
    int _reportId;
    NSString *_portName;
    long long _timeStamp;
    NSString *_userName;
    NSString *_displayname;
    NSString *_taskAppId;
    NSString *_coverUrl;
    NSData *_sessionId;
    NSData *_encryptKey;
    NSDictionary *_extendObject;
    unsigned long long _scene;
    id <NSSecureCoding> _context;
}

- (void).cxx_destruct;
@property(nonatomic) int reportId; // @synthesize reportId=_reportId;
@property(retain, nonatomic) id <NSSecureCoding> context; // @synthesize context=_context;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
@property(nonatomic) int code; // @synthesize code=_code;
@property(retain, nonatomic) NSDictionary *extendObject; // @synthesize extendObject=_extendObject;
@property(retain, nonatomic) NSData *encryptKey; // @synthesize encryptKey=_encryptKey;
@property(retain, nonatomic) NSData *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *taskAppId; // @synthesize taskAppId=_taskAppId;
@property(copy, nonatomic) NSString *displayname; // @synthesize displayname=_displayname;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *portName; // @synthesize portName=_portName;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) int seqNO; // @synthesize seqNO=_seqNO;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)completeOperation:(int)arg1;
- (void)executeOperation;
- (void)start;
- (void)cancel;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

