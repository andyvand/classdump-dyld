/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CalendarPersistence/CalendarPersistence-Structs.h>
@class NSSet;

@interface CalMDQuery : NSObject {

	MDQueryRef _query;
	NSSet* _scope;

}

@property (assign) MDQueryRef query;              //@synthesize query=_query - In the implementation block
@property (retain) NSSet * scope;                 //@synthesize scope=_scope - In the implementation block
-(MDQueryRef)query;
-(void)setQuery:(MDQueryRef)arg1 ;
-(NSSet *)scope;
-(void)setScope:(NSSet *)arg1 ;
-(void)dealloc;
@end

