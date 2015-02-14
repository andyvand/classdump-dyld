/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/StoreFoundation-Structs.h>
#import <StoreFoundation/NSSecureCoding.h>
#import <StoreFoundation/NSCopying.h>

@class NSNumber, NSString, SSDownloadMetadata, NSData, ISOperation, NSDictionary;

@interface SSPurchase : NSObject <NSSecureCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSString* _appleID;
	NSString* _buyParameters;
	SSDownloadMetadata* _downloadMetadata;
	NSString* _uniqueIdentifier;
	char _isUpdate;
	long long _purchaseType;
	char _checkPreflightAterPurchase;
	NSData* _receiptData;
	NSString* _parentalControls;
	char _isRedownload;
	char _shouldBeInstalledAfterLogout;
	char _isCancelled;
	NSString* _sortableAccountIdentifier;
	unsigned long long _itemIdentifier;
	/*^block*/id _authFallbackHandler;
	ISOperation* _purchaseOperation;
	NSDictionary* _responseDialog;

}

@property (nonatomic,copy) NSString * buyParameters;                              //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,copy) SSDownloadMetadata * downloadMetadata;                 //@synthesize downloadMetadata=_downloadMetadata - In the implementation block
@property (nonatomic,retain) NSNumber * accountIdentifier;                        //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSString * appleID;                                  //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,readonly) NSString * sortableAccountIdentifier;              //@synthesize sortableAccountIdentifier=_sortableAccountIdentifier - In the implementation block
@property (assign) char isRecoveryPurchase; 
@property (assign) char isUpdate;                                                 //@synthesize isUpdate=_isUpdate - In the implementation block
@property (assign) char isRedownload;                                             //@synthesize isRedownload=_isRedownload - In the implementation block
@property (nonatomic,retain) NSData * receiptData;                                //@synthesize receiptData=_receiptData - In the implementation block
@property (nonatomic,retain) NSString * parentalControls;                         //@synthesize parentalControls=_parentalControls - In the implementation block
@property (assign) char checkPreflightAterPurchase;                               //@synthesize checkPreflightAterPurchase=_checkPreflightAterPurchase - In the implementation block
@property (assign) char shouldBeInstalledAfterLogout;                             //@synthesize shouldBeInstalledAfterLogout=_shouldBeInstalledAfterLogout - In the implementation block
@property (readonly) char needsAuthentication; 
@property (assign) unsigned long long itemIdentifier;                             //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (copy) id authFallbackHandler;                                          //@synthesize authFallbackHandler=_authFallbackHandler - In the implementation block
@property (assign) char isCancelled;                                              //@synthesize isCancelled=_isCancelled - In the implementation block
@property (__weak) ISOperation * purchaseOperation;                               //@synthesize purchaseOperation=_purchaseOperation - In the implementation block
@property (copy) NSDictionary * responseDialog;                                   //@synthesize responseDialog=_responseDialog - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (assign,nonatomic) long long purchaseType;                              //@synthesize purchaseType=_purchaseType - In the implementation block
+(char)supportsSecureCoding;
+(id)purchaseWithBuyParameters:(id)arg1 ;
+(id)purchasesGroupedByAccountIdentifierWithPurchases:(id)arg1 ;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(id)productID;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSString *)appleID;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)uniqueIdentifier;
-(char)isCancelled;
-(unsigned long long)itemIdentifier;
-(char)isUpdate;
-(void)setIsCancelled:(char)arg1 ;
-(char)needsAuthentication;
-(void)setBuyParameters:(NSString *)arg1 ;
-(void)setIsRedownload:(char)arg1 ;
-(void)setIsUpdate:(char)arg1 ;
-(NSString *)buyParameters;
-(void)setAppleID:(NSString *)arg1 ;
-(id)_sortableAccountIdentifier;
-(SSDownloadMetadata *)downloadMetadata;
-(long long)purchaseType;
-(void)setPurchaseType:(long long)arg1 ;
-(NSData *)receiptData;
-(char)isRedownload;
-(char)isRecoveryPurchase;
-(void)setIsRecoveryPurchase:(char)arg1 ;
-(char)purchaseDSIDMatchesPrimaryAccount;
-(void)setDownloadMetadata:(SSDownloadMetadata *)arg1 ;
-(void)setReceiptData:(NSData *)arg1 ;
-(char)checkPreflightAterPurchase;
-(void)setCheckPreflightAterPurchase:(char)arg1 ;
-(NSString *)parentalControls;
-(void)setParentalControls:(NSString *)arg1 ;
-(NSString *)sortableAccountIdentifier;
-(char)shouldBeInstalledAfterLogout;
-(void)setShouldBeInstalledAfterLogout:(char)arg1 ;
-(id)authFallbackHandler;
-(void)setAuthFallbackHandler:(id)arg1 ;
-(ISOperation *)purchaseOperation;
-(void)setPurchaseOperation:(ISOperation *)arg1 ;
-(NSDictionary *)responseDialog;
-(void)setResponseDialog:(NSDictionary *)arg1 ;
@end

