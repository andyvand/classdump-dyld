/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:14 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSSet;

@interface NSRefreshRequest : NSPersistentStoreRequest {

	NSSet* _refreshObjects;
	unsigned _refreshType;

}
-(unsigned long long)requestType;
-(id)refreshObjects;
-(unsigned)refreshType;
-(void)setRefreshObjects:(id)arg1 ;
-(void)setRefreshType:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
@end

