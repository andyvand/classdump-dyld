/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSHashTable;

@interface NSKeyValueObservationInfo : NSObject {

	int _retainCountMinusOne;
	NSArray* _observances;
	unsigned long long _cachedHash;
	char _cachedIsShareable;
	NSHashTable* _observables;

}
-(id)_initWithObservances:(id*)arg1 count:(unsigned long long)arg2 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(char)_tryRetain;
-(char)_isDeallocating;
@end

