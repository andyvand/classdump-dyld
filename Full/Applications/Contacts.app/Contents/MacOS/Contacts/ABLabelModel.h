/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABPrintingDelegate;
@class NSMutableArray;

@interface ABLabelModel : NSObject {

	NSMutableArray* _addressList;
	NSMutableArray* _peopleList;
	NSMutableArray* _distributionIdentifierList;
	NSMutableArray* _mergedLabels;
	char _isEmpty;
	char _recordCustomLabels;
	NSMutableArray* _customLabelNames;
	char _disableMergedLabels;
	id<ABPrintingDelegate> _printingDelegate;

}
+(id)relatableLabels;
+(id)relatedNamesConfig;
-(long long)numberOfLabels;
-(void)loadUsingDistributionsGroupsSorting:(int)arg1 mergeRelated:(char)arg2 ;
-(void)loadWithLabels:(id)arg1 sorting:(int)arg2 mergeRelated:(char)arg3 ;
-(id)customLabelNames;
-(id)labelsForPage:(long long)arg1 withDescription:(id)arg2 ;
-(id)addressesForPerson:(id)arg1 withLabels:(id)arg2 mergeRelated:(char)arg3 ;
-(id)relatedNameStringWithPerson:(id)arg1 address:(id)arg2 ;
-(char)shouldFindRelationsForAddress:(id)arg1 ;
-(id)addressNameFromPerson:(id)arg1 specificAddress:(id)arg2 ;
-(id)newLabelInfoFromPostalAddress:(id)arg1 ;
-(id)distributionIdentifierForAddressPropertyInGroup:(id)arg1 person:(id)arg2 ;
-(id)addressesFromPeople:(id)arg1 distributionGroup:(id)arg2 ;
-(void)resortBy:(int)arg1 ;
-(char)addressessMostlyMatch:(id)arg1 with:(id)arg2 ;
-(void)removeAllLabels;
-(long long)maxPagesWithDescription:(id)arg1 ;
-(id)allLabels;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(char)isEmpty;
-(id)initWithDelegate:(id)arg1 ;
@end

