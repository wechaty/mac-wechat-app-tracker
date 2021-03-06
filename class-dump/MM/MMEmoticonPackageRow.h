//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class MMEmoticonPackageRowPackedInfo, NSArray, NSString;

@interface MMEmoticonPackageRow : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement;
    unsigned int _localID;
    unsigned int _paymentStatus;
    unsigned int _downloadStatus;
    unsigned int _installTime;
    unsigned int _removeTime;
    unsigned int _sortOrder;
    long long lastInsertedRowID;
    NSString *_packageID;
    NSString *_packageName;
    NSString *_introduction;
    NSString *_fullDescription;
    NSString *_copyright;
    NSString *_author;
    NSString *_iconURL;
    NSString *_panelURL;
    MMEmoticonPackageRowPackedInfo *_m_packedInfo;
    NSArray *_emoticons;
}

+ (const void *)m_packedInfo;
+ (const void *)sortOrder;
+ (const void *)removeTime;
+ (const void *)installTime;
+ (const void *)downloadStatus;
+ (const void *)paymentStatus;
+ (const void *)panelURL;
+ (const void *)iconURL;
+ (const void *)author;
+ (const void *)copyright;
+ (const void *)fullDescription;
+ (const void *)introduction;
+ (const void *)packageName;
+ (const void *)packageID;
+ (const void *)localID;
+ (const void *)AnyProperty;
+ (const void *)AllProperties;
+ (const void *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *emoticons; // @synthesize emoticons=_emoticons;
@property(retain, nonatomic) MMEmoticonPackageRowPackedInfo *m_packedInfo; // @synthesize m_packedInfo=_m_packedInfo;
@property(nonatomic) unsigned int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(nonatomic) unsigned int removeTime; // @synthesize removeTime=_removeTime;
@property(nonatomic) unsigned int installTime; // @synthesize installTime=_installTime;
@property(nonatomic) unsigned int downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(nonatomic) unsigned int paymentStatus; // @synthesize paymentStatus=_paymentStatus;
@property(retain, nonatomic) NSString *panelURL; // @synthesize panelURL=_panelURL;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property(retain, nonatomic) NSString *fullDescription; // @synthesize fullDescription=_fullDescription;
@property(retain, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(retain, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(retain, nonatomic) NSString *packageID; // @synthesize packageID=_packageID;
@property(nonatomic) unsigned int localID; // @synthesize localID=_localID;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) BOOL isAutoIncrement; // @synthesize isAutoIncrement;

@end

