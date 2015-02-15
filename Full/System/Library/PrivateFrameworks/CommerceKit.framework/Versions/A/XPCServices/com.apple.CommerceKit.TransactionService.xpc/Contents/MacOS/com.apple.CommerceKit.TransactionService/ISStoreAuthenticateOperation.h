/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/XPCServices/com.apple.CommerceKit.TransactionService.xpc/Contents/MacOS/com.apple.CommerceKit.TransactionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISOperation.h>

@class NSNumber, ISAuthenticationContext;

@interface ISStoreAuthenticateOperation : ISOperation {

	NSNumber* _authenticatedDSID;
	ISAuthenticationContext* _context;

}

@property (readonly) ISAuthenticationContext * context;              //@synthesize context=_context - In the implementation block
@property (retain) NSNumber * authenticatedDSID;                     //@synthesize authenticatedDSID=_authenticatedDSID - In the implementation block
-(id)initWithAuthenticationContext:(id)arg1 storeClient:(id)arg2 ;
-(ISAuthenticationContext *)context;
-(void)run;
-(NSNumber *)authenticatedDSID;
-(id)authenticatedAccountDSID;
-(void)setAuthenticatedDSID:(NSNumber *)arg1 ;
-(id)uniqueKey;
@end
