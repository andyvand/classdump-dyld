/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@interface NSDistributedObjectsStatistics : NSDictionary {

	unsigned long long requestsReceived;
	unsigned long long repliesSent;
	unsigned long long requestsSent;
	unsigned long long repliesReceived;

}
-(void)addStatistics:(id)arg1 ;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)allKeys;
-(id)keyEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

