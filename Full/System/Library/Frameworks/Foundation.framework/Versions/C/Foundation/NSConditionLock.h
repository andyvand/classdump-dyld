/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSLocking.h>

@class NSString;

@interface NSConditionLock : NSObject <NSLocking> {

	void* _priv;

}

@property (readonly) long long condition; 
@property (copy) NSString * name; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(long long)condition;
-(char)lockBeforeDate:(id)arg1 ;
-(char)tryLockWhenCondition:(long long)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)lock;
-(void)unlock;
-(void)unlockWithCondition:(long long)arg1 ;
-(id)initWithCondition:(long long)arg1 ;
-(void)lockWhenCondition:(long long)arg1 ;
-(char)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2 ;
-(char)tryLock;
@end

