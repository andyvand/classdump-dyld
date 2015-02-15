/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Frameworks/CommerceCore.framework/Versions/A/CommerceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommerceCore/CommerceCore-Structs.h>
#import <CommerceCore/NSCoding.h>

@class NSData, NSString, NSDate, NSNumber;

@interface ISPurchaseReceipt : NSObject <NSCoding> {

	NSData* mReceiptData;
	CMSDecoderRef mDecoder;
	NSString* mReceiptPath;
	NSString* mBundleID;
	NSString* mBundleVersion;
	NSString* mParentalControls;
	NSString* mDownloadID;
	NSString* mAdamID;
	NSDate* mPurchaseDate;
	NSString* mPurchaseDateString;
	NSString* mOpaqueDSIDString;
	NSString* mHWType;
	NSDate* mReceiptCreationDate;
	NSString* mDeveloperID;
	NSString* mInstallerVersionID;
	NSString* mReceiptType;
	NSNumber* mFRToolVersion;
	NSString* mExpirationDateString;
	NSDate* mExpirationDate;
	NSString* mRenewalDateString;
	NSDate* mRenewalDate;
	NSString* mOraganizationDisplayName;
	NSString* mCancellationReason;
	char mHashIsValid;
	char _createdFromCoder;

}

@property (readonly) NSString * receiptType; 
@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSString * bundleVersion; 
@property (readonly) NSString * parentalControls; 
@property (readonly) NSDate * purchaseDate; 
@property (readonly) NSString * purchaseDateString; 
@property (readonly) NSString * opaqueDSIDString; 
@property (readonly) NSString * hwtype; 
@property (readonly) NSDate * receiptCreationDate; 
@property (readonly) NSString * developerID; 
@property (readonly) NSString * downloadID; 
@property (readonly) NSString * adamID; 
@property (readonly) NSString * installerVersionID; 
@property (readonly) NSNumber * frToolVersion; 
@property (readonly) NSDate * expirationDate; 
@property (readonly) NSDate * renewalDate; 
@property (readonly) NSString * organizationDisplayName; 
@property (readonly) NSString * cancellationReason; 
@property (readonly) char isVPPLicensed; 
@property (readonly) char isRevoked; 
@property (readonly) NSData * receiptData; 
@property (readonly) NSString * receiptDataString; 
@property (readonly) NSString * dsid; 
@property (readonly) char isProductionReceipt; 
+(id)receiptFromBundleAtURL:(id)arg1 ;
+(id)_installReceiptWithParameters:(id)arg1 ;
+(id)receiptPathForBundleAtPath:(id)arg1 ;
+(id)receiptWithContentsOfFile:(id)arg1 ;
+(id)installReceiptString:(id)arg1 inBundleAtPath:(id)arg2 ;
+(id)installReceiptData:(id)arg1 inBundleAtPath:(id)arg2 ;
+(id)receiptFromBundleAtPath:(id)arg1 ;
-(NSDate *)expirationDate;
-(char)validateAndCheckGUIDSeparately:(char*)arg1 ;
-(NSDate *)renewalDate;
-(NSString *)adamID;
-(NSString *)installerVersionID;
-(char)isRevoked;
-(NSString *)bundleVersion;
-(NSString *)dsid;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithContentsOfFile:(id)arg1 ;
-(char)isValid;
-(char)_load;
-(NSDate *)receiptCreationDate;
-(char)_checkWWDRIssuerForTrust:(SecTrustRef)arg1 ;
-(long long)_verifySignatureCheckRevocation:(char)arg1 checkExpiration:(char)arg2 useCurrentDate:(char)arg3 ;
-(long long)checkSignature;
-(long long)checkSignatureSkipRevocation;
-(long long)checkSignatureAgainstCurrentDate;
-(char)validateAndCheckGUIDSepately:(char*)arg1 ;
-(char)isProductionReceipt;
-(NSString *)purchaseDateString;
-(NSString *)downloadID;
-(NSString *)opaqueDSIDString;
-(NSString *)hwtype;
-(NSString *)developerID;
-(NSNumber *)frToolVersion;
-(NSString *)organizationDisplayName;
-(NSString *)cancellationReason;
-(NSString *)receiptDataString;
-(NSDate *)purchaseDate;
-(char)isVPPLicensed;
-(NSString *)receiptType;
-(NSData *)receiptData;
-(NSString *)parentalControls;
@end

