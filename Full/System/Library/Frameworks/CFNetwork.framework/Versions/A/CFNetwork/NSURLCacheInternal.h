/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSString;

@interface NSURLCacheInternal : NSObject {

	unsigned long long memoryCapacity;
	unsigned long long diskCapacity;
	NSString* diskPath;
	unsigned long long currentMemoryUsage;
	unsigned long long currentDiskUsage;
	const CFURLCache* _cacheRef;

}
-(void)finalize;
-(void)dealloc;
@end

