/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/AppleIDAuthAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol XMLRPCConnectionDelegate;
@class XMLRPCConnectionManager, XMLRPCRequest, NSString, NSMutableData, NSURLConnection;

@interface XMLRPCConnection : NSObject {

	XMLRPCConnectionManager* myManager;
	XMLRPCRequest* myRequest;
	NSString* myIdentifier;
	NSMutableData* myData;
	NSURLConnection* myConnection;
	id<XMLRPCConnectionDelegate> myDelegate;

}
+(id)sendSynchronousXMLRPCRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithXMLRPCRequest:(id)arg1 delegate:(id)arg2 manager:(id)arg3 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)dealloc;
-(void)cancel;
-(id)identifier;
-(id)delegate;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(char)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
@end

