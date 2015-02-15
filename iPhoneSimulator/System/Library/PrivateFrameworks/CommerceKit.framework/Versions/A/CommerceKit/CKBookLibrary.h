/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKBookLibraryDelegate;
@class NSArray, NSPredicate, ISServiceProxy;

@interface CKBookLibrary : NSObject {

	long long _libraryType;
	NSArray* _sortDescriptors;
	NSPredicate* _searchPredicate;
	id<CKBookLibraryDelegate> _delegate;
	ISServiceProxy* _serviceProxy;

}

@property (readonly) long long libraryType;                                          //@synthesize libraryType=_libraryType - In the implementation block
@property (copy) NSArray * sortDescriptors;                                          //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (copy) NSPredicate * searchPredicate;                                      //@synthesize searchPredicate=_searchPredicate - In the implementation block
@property (assign,nonatomic,__weak) id<CKBookLibraryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) ISServiceProxy * serviceProxy;                                  //@synthesize serviceProxy=_serviceProxy - In the implementation block
+(id)titleSortDescriptors;
+(id)authorSortDescriptors;
+(id)categorySortDescriptors;
+(id)shelfSortDescriptors;
+(char)hasSampleWithItemIdentifier:(id)arg1 returningMetadata:(id*)arg2 ;
-(long long)libraryType;
-(NSPredicate *)searchPredicate;
-(id)_requestInfo;
-(id)objectInBooksAtIndex:(unsigned long long)arg1 ;
-(id)_willReturnBooks:(id)arg1 ;
-(id)addObserverOfType:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithLibraryType:(long long)arg1 ;
-(unsigned long long)countOfBooks;
-(id)booksAtIndexes:(id)arg1 ;
-(id)bookWithItemIdentifier:(unsigned long long)arg1 ;
-(void)pollForPurchasedBooks;
-(void)setSearchPredicate:(NSPredicate *)arg1 ;
-(void)setDelegate:(id<CKBookLibraryDelegate>)arg1 ;
-(id<CKBookLibraryDelegate>)delegate;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(id)addObserver:(id)arg1 ;
-(ISServiceProxy *)serviceProxy;
@end

