/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/XPCServices/com.macpaw.CleanMyMac2.IconsService.xpc/Contents/MacOS/com.macpaw.CleanMyMac2.IconsService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSData;

@interface XPCConnection : NSObject {

	NSObject*<OS_xpc_object> connection;
	int pid;
	id context;
	NSData* tokenData;

}

@property (assign) NSObject*<OS_xpc_object> connection; 
@property (assign) int pid; 
@property (nonatomic,retain) id context; 
@property (nonatomic,retain) NSData * tokenData; 
-(void)setTokenData:(NSData *)arg1 ;
-(NSData *)tokenData;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)context;
-(void)setContext:(id)arg1 ;
@end

