/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABRecordSummaryBuilding.h>

@class NSArray, NSDictionary, NSMutableArray, ABPropertySummaryBuilder, NSString;

@interface ABPersonSummaryBuilder : NSObject <ABRecordSummaryBuilding> {

	NSArray* _properties;
	NSDictionary* _propertiesAndTypes;
	NSMutableArray* _summaries;
	ABPropertySummaryBuilder* _propertySummaryBuilder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)buildSummaryOfRecord:(id)arg1 ;
-(void)_cachePropertiesAndTypes;
-(id)_ignoredProperties;
-(void)_buildSummariesOfPropertiesOnPerson:(id)arg1 ;
-(id)_summaryForProperty:(id)arg1 onPerson:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

