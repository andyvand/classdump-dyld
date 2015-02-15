/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:08:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/System/Installation/CDIS/Time Machine System Restore.app/Contents/MacOS/Time Machine System Restore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSArray, NSString;

@interface XIFileServerManager : NSObject {

	int state;
	NSURL* lastServerURL;
	NSArray* lastMountedURLs;
	char mountIsPasswordOnly;
	int disksToMount;
	NSString* username;
	NSString* password;

}

@property (assign) int state; 
@property (assign) int disksToMount; 
@property (assign) char mountIsPasswordOnly; 
@property (copy) NSURL * lastServerURL; 
@property (copy) NSArray * lastMountedURLs; 
@property (retain) NSString * username; 
@property (retain) NSString * password; 
+(id)sharedManager;
-(id)mountPoints;
-(id)mountedServers;
-(void)setLastServerURL:(NSURL *)arg1 ;
-(void)setLastMountedURLs:(NSArray *)arg1 ;
-(void)setDisksToMount:(int)arg1 ;
-(char)mountIsPasswordOnly;
-(NSArray *)lastMountedURLs;
-(int)disksToMount;
-(id)serverURLForMountPoint:(id)arg1 ;
-(void)mountServerAtURL:(id)arg1 passwordOnly:(char)arg2 ;
-(NSURL *)lastServerURL;
-(void)setMountIsPasswordOnly:(char)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)setPassword:(NSString *)arg1 ;
@end
