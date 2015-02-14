/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABSearchOperationsFactory.h>

@class NSArray, NSString;

@interface ABAggregateSearchOperationsFactory : NSObject <ABSearchOperationsFactory> {

	NSArray* _searchOperationsFactories;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)searchOperationsForString:(id)arg1 addressBook:(id)arg2 delegate:(id)arg3 ;
-(id)initWithSearchOperationsFactories:(id)arg1 ;
-(void)dealloc;
@end

