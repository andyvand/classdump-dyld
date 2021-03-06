/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:23 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSSet, NSDictionary;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask {

	NSSet* _searchItems;
	char _applyToPrincipalCollectionSet;
	NSDictionary* _extraAttributes;

}

@property (nonatomic,retain) NSSet * searchItems;                             //@synthesize searchItems=_searchItems - In the implementation block
@property (nonatomic,retain) NSDictionary * extraAttributes;                  //@synthesize extraAttributes=_extraAttributes - In the implementation block
@property (assign,nonatomic) char applyToPrincipalCollectionSet;              //@synthesize applyToPrincipalCollectionSet=_applyToPrincipalCollectionSet - In the implementation block
-(NSDictionary *)extraAttributes;
-(void)setExtraAttributes:(NSDictionary *)arg1 ;
-(NSSet *)searchItems;
-(void)setSearchItems:(NSSet *)arg1 ;
-(void)dealloc;
-(id)initWithPropertySearches:(id)arg1 propertiesToFind:(id)arg2 atURL:(id)arg3 applyToPrincipalCollectionSet:(char)arg4 extraAttributes:(id)arg5 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)httpMethod;
-(id)requestBody;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 ;
-(void)setApplyToPrincipalCollectionSet:(char)arg1 ;
-(char)applyToPrincipalCollectionSet;
@end

