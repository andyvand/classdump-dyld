/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSLocking.h>

@interface NSViewHierarchyLock : NSObject <NSLocking> {

	void** _priv[0];

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(char)_exceptionHandlingEnabled;
-(id)init;
-(oneway void)release;
-(id)retain;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(unsigned long long)retainCount;
-(void)lock;
-(void)unlock;
-(char)_isValid;
-(void)_invalidate;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)unlockWithExceptionHandler:(char)arg1 ;
-(char)tryLock;
-(void)lockForReadingWithExceptionHandler:(char)arg1 ;
-(char)_lockForWriting:(char)arg1 handler:(char)arg2 ;
-(void)unlockTopMostReader;
-(void)lockForReading;
-(char)tryLockForWriting;
-(void)lockForWriting;
-(void)lockForWritingWithExceptionHandler:(char)arg1 ;
-(char)tryLockForWritingWithExceptionHandler:(char)arg1 ;
@end

