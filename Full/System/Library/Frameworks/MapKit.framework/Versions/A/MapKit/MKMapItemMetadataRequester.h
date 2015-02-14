/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/NSURLConnectionDelegate.h>

@class NSMapTable, ACAccountStore, ACAccountCredential, OAURLRequestSigner, NSString;

@interface MKMapItemMetadataRequester : NSObject <NSURLConnectionDelegate> {

	NSMapTable* _requestsForURLs;
	NSMapTable* _connectionsForURLs;
	NSMapTable* _dataForConnections;
	char _hasCheckedYelpAccountCredentials;
	ACAccountStore* _accountStore;
	ACAccountCredential* _yelpAccountCredentials;
	OAURLRequestSigner* _signer;

}

@property (nonatomic,readonly) OAURLRequestSigner * signer; 
@property (nonatomic,readonly) ACAccountCredential * yelpAccountCredentials; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)accountStore;
-(void)sendRequest:(id)arg1 ;
-(void)cancelRequestsForBusinessMetadata:(id)arg1 ;
-(OAURLRequestSigner *)signer;
-(void)handleConnection:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
-(ACAccountCredential *)yelpAccountCredentials;
-(void)accountStoreDidChange:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
@end

