/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class NSMutableSet;

@interface IKFolderWatcher : NSObject {

	FSEventStreamRef _fsEventStreamRef;
	NSMutableSet* _clients;
	NSMutableSet* _watchedFolderPaths;

}
+(id)sharedFolderWatcher;
-(void)reload;
-(void)addClient:(id)arg1 ;
-(void)removeFolderWatcher;
-(void)installFolderWatcher;
-(void)reloadAfterDelay;
-(void)updateClients:(id)arg1 ;
-(void)stopWatchingThisFolder:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)removeClient:(id)arg1 ;
-(void)cleanup;
@end

