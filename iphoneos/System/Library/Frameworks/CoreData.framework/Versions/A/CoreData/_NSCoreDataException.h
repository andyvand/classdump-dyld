/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSException.h>

@class NSString;

@interface _NSCoreDataException : NSException {

	long long _code;
	NSString* _domain;

}
+(id)exceptionWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4 ;
-(id)initWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4 ;
-(void)_setDomain:(id)arg1 ;
-(id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
-(void)dealloc;
-(long long)code;
-(id)domain;
@end

