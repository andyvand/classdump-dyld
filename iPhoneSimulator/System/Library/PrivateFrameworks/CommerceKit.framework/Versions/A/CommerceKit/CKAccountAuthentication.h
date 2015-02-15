/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommerceKit/NSURLConnectionDelegate.h>

@protocol CKAccountAuthenticationDelegate;
@class NSString, NSDictionary, ISAuthenticationContext, ISStoreClient;

@interface CKAccountAuthentication : NSObject <NSURLConnectionDelegate> {

	id<CKAccountAuthenticationDelegate> _delegate;
	NSString* _accountName;
	NSString* _password;
	NSDictionary* _serverResponseDictionary;
	ISAuthenticationContext* _context;
	long long _attempt;
	ISStoreClient* _storeClient;

}

@property (assign) id<CKAccountAuthenticationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSString * accountName;                                    //@synthesize accountName=_accountName - In the implementation block
@property (retain) NSString * password;                                       //@synthesize password=_password - In the implementation block
@property (readonly) NSDictionary * serverResponseDictionary;                 //@synthesize serverResponseDictionary=_serverResponseDictionary - In the implementation block
@property (retain) ISAuthenticationContext * context;                         //@synthesize context=_context - In the implementation block
@property (assign) long long attempt;                                         //@synthesize attempt=_attempt - In the implementation block
@property (retain) ISStoreClient * storeClient;                               //@synthesize storeClient=_storeClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)password;
-(NSDictionary *)serverResponseDictionary;
-(long long)attempt;
-(void)setAttempt:(long long)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setDelegate:(id<CKAccountAuthenticationDelegate>)arg1 ;
-(void)stop;
-(char)start;
-(ISAuthenticationContext *)context;
-(id<CKAccountAuthenticationDelegate>)delegate;
-(NSString *)accountName;
-(void)setPassword:(NSString *)arg1 ;
-(void)setContext:(ISAuthenticationContext *)arg1 ;
-(ISStoreClient *)storeClient;
-(void)setStoreClient:(ISStoreClient *)arg1 ;
@end

