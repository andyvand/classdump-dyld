/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface _CFPrefsSynchronizer : NSObject {

	dispatch_source_sRef _synchTimer;
	CFSetRef _dirtySources;
	opaque_pthread_mutex_t _CFPrefsDirtySourcesLock;
	char _active;

}
+(id)sharedInstance;
-(void)enableTimer_alreadyLocked;
-(void)clear_alreadyLocked;
-(void)disableTimer_alreadyLocked;
-(void)noteDirtySource:(id)arg1 ;
-(void)synchronizeAndWait;
-(id)init;
-(void)synchronize;
-(void)clear;
@end

