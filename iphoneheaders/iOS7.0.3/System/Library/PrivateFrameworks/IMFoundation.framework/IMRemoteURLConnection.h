/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSURLRequest, NSString, NSObject;

@interface IMRemoteURLConnection : NSObject {

	NSURLRequest* _request;
	NSString* _bundleIdentifierForDataUsage;
	/*^block*/ id _block;
	NSObject<OS_xpc_object>* _connection;
	BOOL _cancelled;
	BOOL _loading;
	BOOL _forceCellularIfPossible;
	int _retries;

}

@property (assign) BOOL forceCellularIfPossible;                         //@synthesize forceCellularIfPossible=_forceCellularIfPossible - In the implementation block
@property (retain) NSString * bundleIdentifierForDataUsage;              //@synthesize bundleIdentifierForDataUsage=_bundleIdentifierForDataUsage - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)load;
-(void)_disconnected;
-(id)bundleIdentifierForDataUsage;
-(BOOL)forceCellularIfPossible;
-(id)initWithURLRequest:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)setForceCellularIfPossible:(BOOL)arg1 ;
-(void)setBundleIdentifierForDataUsage:(id)arg1 ;
-(BOOL)_connect;
-(BOOL)_disconnect;
@end
