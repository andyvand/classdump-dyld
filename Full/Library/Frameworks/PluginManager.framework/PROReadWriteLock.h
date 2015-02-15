/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Frameworks/PluginManager.framework/PluginManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PluginManager/PluginManager-Structs.h>
#import <PluginManager/NSLocking.h>

@interface PROReadWriteLock : NSObject <NSLocking> {

	opaque_pthread_rwlock_t lock;

}
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)lockForReading;
-(void)lockForWriting;
@end
