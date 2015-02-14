/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/MacOS/CleanMyMac 2 Helper.app/Contents/Frameworks/Growl.framework/Growl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Growl/Growl-Structs.h>
#import <Growl/GrowlCommunicationAttempt.h>

@class NSDictionary;

@interface GrowlXPCCommunicationAttempt : GrowlCommunicationAttempt {

	xpc_connection_sRef xpcConnection;
	NSDictionary* sendingDetails;
	NSDictionary* responseDict;

}

@property (nonatomic,retain) NSDictionary * sendingDetails; 
@property (nonatomic,retain) NSDictionary * responseDict; 
+(char)canCreateConnection;
+(id)XPCBundleID;
-(char)sendMessageWithPurpose:(id)arg1 ;
-(void)handleReply:(void*)arg1 ;
-(void)setResponseDict:(NSDictionary *)arg1 ;
-(NSDictionary *)sendingDetails;
-(void)setSendingDetails:(NSDictionary *)arg1 ;
-(NSDictionary *)responseDict;
-(id)purpose;
-(void)begin;
-(char)establishConnection;
-(void)finished;
@end

