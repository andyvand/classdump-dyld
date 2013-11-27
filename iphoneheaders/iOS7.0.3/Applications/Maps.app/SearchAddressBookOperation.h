/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol SearchAddressBookOperationDelegate;
@class NSString, ;

@interface SearchAddressBookOperation : NSOperation {

	void* _addressBook;
	NSString* _searchQuery;
	BOOL _abAllowed;
	<SearchAddressBookOperationDelegate>* delegate;

}

@property (assign,nonatomic) <SearchAddressBookOperationDelegate> * delegate; 
-(id)initWithSearchQuery:(id)arg1 addressBook:(void*)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)main;
@end
