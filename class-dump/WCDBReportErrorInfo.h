//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDBReportErrorInfo : NSObject
{
    int _type;
    int _code;
    int _tag;
    int _op;
    int _extcode;
    NSString *_msg;
    NSString *_sql;
    NSString *_path;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *sql; // @synthesize sql=_sql;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) int extcode; // @synthesize extcode=_extcode;
@property(nonatomic) int op; // @synthesize op=_op;
@property(nonatomic) int tag; // @synthesize tag=_tag;
@property(nonatomic) int code; // @synthesize code=_code;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)init;

@end

