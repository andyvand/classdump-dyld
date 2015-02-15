/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsAutocomplete/CNAutocompleteSearchExecutor.h>

@class NSArray, NSOperationQueue, ABAddressBook, NSMutableArray, NSPredicate, CNAutocompleteResultTracing, NSString;

@interface CNAutocompleteServerSearchExecutor : NSObject <CNAutocompleteSearchExecutor> {

	NSArray* _accounts;
	NSOperationQueue* _queue;
	ABAddressBook* _addressBook;
	/*^block*/id _resultTransform;
	NSMutableArray* _results;
	NSPredicate* _postFilterPredicate;
	CNAutocompleteResultTracing* _tracer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) CNAutocompleteResultTracing * tracer;              //@synthesize tracer=_tracer - In the implementation block
+(id)executorWithCurrentUserData;
+(id)autocompleteAccountsForRepository:(id)arg1 ;
-(id)addressBook;
-(char)usesNetwork;
-(void)executeRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(CNAutocompleteResultTracing *)tracer;
-(void)setTracer:(CNAutocompleteResultTracing *)arg1 ;
-(id)initWithAccounts:(id)arg1 ;
-(/*^block*/id)makeResultTransformForRequest:(id)arg1 ;
-(id)makePostFilterPredicateForRequest:(id)arg1 ;
-(id)searchOperationsForRequest:(id)arg1 ;
-(void)searchOperation:(id)arg1 foundRecords:(id)arg2 ;
@end

