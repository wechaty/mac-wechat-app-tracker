//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString, WCFavoriteTagTableDataPackedInfo;

@interface WCFavoriteTagTableData : NSObject <WCTTableCoding>
{
    unsigned int _ROWID;
    unsigned int _localId;
    NSString *_tag;
    WCFavoriteTagTableDataPackedInfo *_m_packedInfo;
}

+ (const void *)m_packedInfo;
+ (const void *)tag;
+ (const void *)localId;
+ (const void *)AnyProperty;
+ (const void *)AllProperties;
+ (const void *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFavoriteTagTableDataPackedInfo *m_packedInfo; // @synthesize m_packedInfo=_m_packedInfo;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) unsigned int ROWID; // @synthesize ROWID=_ROWID;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

