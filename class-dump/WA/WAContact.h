//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class CAppBrandInfo, NSDictionary, NSString;

@interface WAContact : NSObject <NSSecureCoding>
{
    BOOL _m_isExtInfoValid;
    unsigned int _m_uiType;
    unsigned int _m_uiWxAppOpt;
    unsigned int _m_uiDebugModeType;
    unsigned int _uiLastUpdateAppVersionInfoTime;
    unsigned int _m_uiCertificationFlag;
    NSString *m_nsExternalInfo;
    NSString *m_nsNickName;
    NSString *m_nsSignature;
    CAppBrandInfo *appBrandInfo;
    NSString *_m_nsUsrName;
    NSString *_m_nsAliasName;
    NSString *_m_nsFullPY;
    NSString *_m_nsBrandIconUrl;
    NSString *_m_nsHeadHDImgUrl;
    NSString *_m_nsHeadImgUrl;
    NSString *_m_nsImgStatus;
    NSDictionary *_externalInfoJSONCache;
}

+ (BOOL)isWeAppUserName:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL m_isExtInfoValid; // @synthesize m_isExtInfoValid=_m_isExtInfoValid;
@property(retain, nonatomic) NSDictionary *externalInfoJSONCache; // @synthesize externalInfoJSONCache=_externalInfoJSONCache;
@property(copy, nonatomic) NSString *m_nsImgStatus; // @synthesize m_nsImgStatus=_m_nsImgStatus;
@property(nonatomic) unsigned int m_uiCertificationFlag; // @synthesize m_uiCertificationFlag=_m_uiCertificationFlag;
@property(nonatomic) unsigned int uiLastUpdateAppVersionInfoTime; // @synthesize uiLastUpdateAppVersionInfoTime=_uiLastUpdateAppVersionInfoTime;
@property(nonatomic) unsigned int m_uiDebugModeType; // @synthesize m_uiDebugModeType=_m_uiDebugModeType;
@property(nonatomic) unsigned int m_uiWxAppOpt; // @synthesize m_uiWxAppOpt=_m_uiWxAppOpt;
@property(nonatomic) unsigned int m_uiType; // @synthesize m_uiType=_m_uiType;
@property(copy, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl=_m_nsHeadImgUrl;
@property(copy, nonatomic) NSString *m_nsHeadHDImgUrl; // @synthesize m_nsHeadHDImgUrl=_m_nsHeadHDImgUrl;
@property(copy, nonatomic) NSString *m_nsBrandIconUrl; // @synthesize m_nsBrandIconUrl=_m_nsBrandIconUrl;
@property(copy, nonatomic) NSString *m_nsFullPY; // @synthesize m_nsFullPY=_m_nsFullPY;
@property(copy, nonatomic) NSString *m_nsAliasName; // @synthesize m_nsAliasName=_m_nsAliasName;
@property(copy, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName=_m_nsUsrName;
@property(retain, nonatomic) CAppBrandInfo *appBrandInfo; // @synthesize appBrandInfo;
@property(copy, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(copy, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsExternalInfo; // @synthesize m_nsExternalInfo;
- (BOOL)hasSameOrNewerVersionThan:(unsigned long long)arg1;
- (id)getExternalInfoDictionary;
- (BOOL)isContactValid;
- (BOOL)isWeAppContact;
- (BOOL)isSimulatedNativeWeApp;
- (id)getContactDisplayName;
- (id)getAppID;
- (id)getAppBrandInfo;
- (BOOL)isAppBrandInfoValid;
- (BOOL)copyFieldFromContact:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
