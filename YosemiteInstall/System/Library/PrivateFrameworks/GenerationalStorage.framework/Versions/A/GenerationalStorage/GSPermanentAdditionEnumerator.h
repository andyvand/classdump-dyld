/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/Versions/A/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>
#import <GenerationalStorage/GSAdditionEnumerating.h>

@class NSError, GSPermanentStorage, NSString, NSArray, GSDaemonProxySync;

@interface GSPermanentAdditionEnumerator : NSEnumerator <GSAdditionEnumerating> {

	GSPermanentStorage* _storage;
	NSString* _nameSpace;
	unsigned long long _withOptions;
	unsigned long long _withoutOptions;
	NSArray* _array;
	unsigned long long _pos;
	GSDaemonProxySync* _proxy;
	NSError* _error;
	id _token;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)_fetchNextBatch;
-(id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5 ;
-(void)dealloc;
-(id)nextObject;
-(NSError *)error;
@end

