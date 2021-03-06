//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class AcctSectResp, AuthSectResp, BaseResponse, NetworkSectResp;

@interface UnifyAuthResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasUnifyAuthSectFlag:1;
    unsigned int hasAuthSectResp:1;
    unsigned int hasAcctSectResp:1;
    unsigned int hasNetworkSectResp:1;
    unsigned int unifyAuthSectFlag;
    BaseResponse *baseResponse;
    AuthSectResp *authSectResp;
    AcctSectResp *acctSectResp;
    NetworkSectResp *networkSectResp;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetNetworkSectResp:) NetworkSectResp *networkSectResp; // @synthesize networkSectResp;
@property(readonly, nonatomic) BOOL hasNetworkSectResp; // @synthesize hasNetworkSectResp;
@property(retain, nonatomic, setter=SetAcctSectResp:) AcctSectResp *acctSectResp; // @synthesize acctSectResp;
@property(readonly, nonatomic) BOOL hasAcctSectResp; // @synthesize hasAcctSectResp;
@property(retain, nonatomic, setter=SetAuthSectResp:) AuthSectResp *authSectResp; // @synthesize authSectResp;
@property(readonly, nonatomic) BOOL hasAuthSectResp; // @synthesize hasAuthSectResp;
@property(nonatomic, setter=SetUnifyAuthSectFlag:) unsigned int unifyAuthSectFlag; // @synthesize unifyAuthSectFlag;
@property(readonly, nonatomic) BOOL hasUnifyAuthSectFlag; // @synthesize hasUnifyAuthSectFlag;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

