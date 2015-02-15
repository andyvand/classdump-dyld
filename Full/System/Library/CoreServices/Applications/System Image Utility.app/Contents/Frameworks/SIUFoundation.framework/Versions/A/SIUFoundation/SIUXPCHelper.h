/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/System Image Utility.app/Contents/Frameworks/SIUFoundation.framework/Versions/A/SIUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SIUFoundation/SIUFoundation-Structs.h>
@class NSXPCConnection;

@interface SIUXPCHelper : NSObject {

	AuthorizationOpaqueRefRef _authorizationRef;
	NSXPCConnection* _connection;
	char _allowInteraction;
	double _creationTime;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)helperAllowingInteraction:(char)arg1 exportedObject:(id)arg2 ;
-(id)initAllowingInteraction:(char)arg1 callbackObject:(id)arg2 ;
-(int)validateAuthorizationRef:(AuthorizationOpaqueRefRef)arg1 ;
-(id)getAuthorizationExternalFormWithError:(id*)arg1 ;
-(id)authErrorForCode:(int)arg1 ;
-(char)authenticateWithError:(id*)arg1 ;
-(void)blessBootVolume:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createAnImage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopImageCreation;
-(double)creationTime;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(void)dealloc;
@end

