/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection;

@interface LSResumableActivitiesControlManager : NSObject {

	NSXPCConnection* connection;
	id _delegate;

}

@property (assign) id delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSXPCConnection * connection; 
+(id)resumableActivitiesControlManager;
-(void)terminateServer;
-(id)matchingUUIDForString:(id)arg1 ;
-(id)advertisedItemUUID;
-(id)allUUIDsOfType:(unsigned long long)arg1 ;
-(id)enabledUUIDs;
-(id)currentAdvertisedItemUUID;
-(id)debuggingInfo;
-(void)restartServer;
-(void)injectBTLEItem:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 frameworkPayload:(id)arg6 payloadDelay:(double)arg7 ;
-(void)callWillSaveDelegate:(id)arg1 ;
-(void)callWillSaveDelegate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)callDidSaveDelegate:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)status;
@end

