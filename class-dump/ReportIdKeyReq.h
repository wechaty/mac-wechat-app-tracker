//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, NSMutableArray;

@interface ReportIdKeyReq : PBGeneratedMessage
{
    unsigned int hasGenstgver:1;
    unsigned int hasSpecstgver:1;
    unsigned int hasEncryptkey:1;
    unsigned int genstgver;
    unsigned int specstgver;
    NSMutableArray *mutableDatapkgList;
    NSData *encryptkey;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetEncryptkey:) NSData *encryptkey; // @synthesize encryptkey;
@property(readonly, nonatomic) BOOL hasEncryptkey; // @synthesize hasEncryptkey;
@property(retain, nonatomic) NSMutableArray *mutableDatapkgList; // @synthesize mutableDatapkgList;
@property(nonatomic, setter=SetSpecstgver:) unsigned int specstgver; // @synthesize specstgver;
@property(readonly, nonatomic) BOOL hasSpecstgver; // @synthesize hasSpecstgver;
@property(nonatomic, setter=SetGenstgver:) unsigned int genstgver; // @synthesize genstgver;
@property(readonly, nonatomic) BOOL hasGenstgver; // @synthesize hasGenstgver;
- (void)addDatapkg:(id)arg1;
- (void)addDatapkgFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *datapkg; // @dynamic datapkg;
- (id)datapkgList;
- (id)init;

@end

