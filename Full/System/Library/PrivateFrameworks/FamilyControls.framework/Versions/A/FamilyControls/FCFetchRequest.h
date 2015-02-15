/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FamilyControls.framework/Versions/A/FamilyControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FCFetchRequest : NSObject {

	NSString* _entity;
	NSString* _predicate;
	NSDictionary* _sortDesc1;
	NSDictionary* _sortDesc2;

}

@property (retain) NSString * entity;                     //@synthesize entity=_entity - In the implementation block
@property (retain) NSString * predicate;                  //@synthesize predicate=_predicate - In the implementation block
@property (retain) NSDictionary * sortDesc1;              //@synthesize sortDesc1=_sortDesc1 - In the implementation block
@property (retain) NSDictionary * sortDesc2;              //@synthesize sortDesc2=_sortDesc2 - In the implementation block
+(id)fetchRequestFromNSFetchRequest:(id)arg1 ;
+(id)fetchRequestFromPlistData:(id)arg1 ;
-(void)setSortDesc1:(NSDictionary *)arg1 ;
-(void)setSortDesc2:(NSDictionary *)arg1 ;
-(NSDictionary *)sortDesc1;
-(NSDictionary *)sortDesc2;
-(id)NSFetchRequest;
-(id)plistData;
-(void)dealloc;
-(void)setPredicate:(NSString *)arg1 ;
-(NSString *)entity;
-(void)setEntity:(NSString *)arg1 ;
-(NSString *)predicate;
@end

