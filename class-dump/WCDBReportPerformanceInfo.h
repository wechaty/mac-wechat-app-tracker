//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDBReportPerformanceInfo : NSObject
{
    int _tag;
    int _count;
    int _cost;
    int _type;
    NSString *_sql;
}

- (void).cxx_destruct;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int cost; // @synthesize cost=_cost;
@property(nonatomic) int count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *sql; // @synthesize sql=_sql;
@property(nonatomic) int tag; // @synthesize tag=_tag;
- (id)init;

@end

