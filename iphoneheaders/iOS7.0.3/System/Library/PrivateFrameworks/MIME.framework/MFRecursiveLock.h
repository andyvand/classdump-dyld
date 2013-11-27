/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSRecursiveLock.h>
#import <MIME/MFLockObject.h>

@class NSString;

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject> {

	NSString* _name;
	id _delegate;

}
+(void)initialize;
-(BOOL)tryLock;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)lock;
-(void)unlock;
-(BOOL)isLockedByMe;
-(id)initWithName:(id)arg1 andDelegate:(id)arg2 ;
@end
